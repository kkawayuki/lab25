#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>    //for vector
#include <list>      //for list
#include <set>       //for set
#include <algorithm> //for sort
#include <iomanip> //for formatting
using namespace std;
using namespace std::chrono;

// function prototypes
auto vRead();
auto vSort();
auto vInsert();
auto vDelete();
auto lRead();
auto lSort();
auto lInsert();
auto lDelete();
auto sRead();
auto sSort();
auto sInsert();
auto sDelete();
const void printRecords();

int main()
{
    // declare vector/string objects
    vector<string> myVec;
    list<string> myList;
    set<string> mySet;

    printRecords();

    return 0;
}

// function implementations

auto vRead(vector<string> &myVec)
{
    string buf;
    auto start = high_resolution_clock::now();

    ifstream fin("codes.txt");
    while (getline(fin, buf))
        myVec.push_back(buf); // add all elements to vec

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto vSort(vector<string> &myVec)
{
    auto start = high_resolution_clock::now();

    sort(myVec.begin(), myVec.end()); // sorts entire vector

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto vInsert(vector<string> &myVec)
{
    auto start = high_resolution_clock::now();

    myVec.insert(myVec.begin() + (myVec.size() / 2), "TESTCODE"); //insert roughly middle element

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto vDelete(vector<string> &myVec)
{
    auto start = high_resolution_clock::now();

    myVec.erase(myVec.begin() + (myVec.size() / 2)); //erase roughly middle element

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

// list operations

auto lRead(list<string> &myList)
{
    auto start = high_resolution_clock::now();

    string buf;
    ifstream fin("codes.txt");
    while (getline(fin, buf))
    {
        myList.push_back(buf); // add all elements to vec
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
}

auto lSort(list<string> &myList)
{
    auto start = high_resolution_clock::now();

    sort(myList.begin(), myList.end()); // sorts entire list

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto lInsert(list<string> &myList)
{
    auto start = high_resolution_clock::now();

    auto it = myList.begin();
    for (int i = 0; i < myList.size()%2; ++it, i++) // iterate "it" to correct location
    {
    }
    myList.insert(it, "TESTCODE"); //insert roughly middle element

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto lDelete(list<string> &myList)
{
    auto start = high_resolution_clock::now();

    auto it = myList.begin();
    for (int i = 0; i < myList.size()%2; ++it, i++) // iterate "it" to correct location
    {
    }
    myList.erase(it); //delete roughly middle element

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

// set operations

auto sRead(set<string> &mySet)
{
    auto start = high_resolution_clock::now();

    string buf;
    ifstream fin("codes.txt");
    while (getline(fin, buf))
    {
        mySet.insert(buf); //inserts buf if unique
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
}

auto sSort(set<string> &mySet) // already sorted, return -1
{
    return (-1);
}

auto sInsert(set<string> &mySet)
{
    auto start = high_resolution_clock::now();

    mySet.insert("TESTCODE"); //insert roughly middle element

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

auto sDelete(set<string> &mySet)
{
    auto start = high_resolution_clock::now();

    auto it = mySet.begin();
    for (int i = 0; i < mySet.size()/2; ++it, i++) // iterate "it" to correct location
    {
    }

    mySet.erase(it); //erase near middle value

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return (duration.count());
}

// very important function!
const void printRecords(vector<string>myVec, list<string> myList, set<string> mySet)
{
    cout << vRead(myVec); 
}