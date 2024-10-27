#include <iostream>
#include <fstream>
#include <chrono>
#include <vector> //for vector
#include <list> //for list
#include <set> //for set
#include <algorithm> //for sort
using namespace std;
using namespace std::chrono;

//function prototypes
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

void printRecords();

int main()
{
    //declare vector/string objects
    vector<string>myVec;
    list<string>myList;
    set<string>mySet;

    printRecords();

    return 0;
}

//function implementations

auto vRead(vector<string>&myVec)
{
    string buf;
    auto start = high_resolution_clock::now();

    ifstream fin("codes.txt");
    while(getline(fin,buf))
        myVec.push_back(buf); //add all elements to vec
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return(duration.count()); 
}

auto vSort(vector<string>&myVec)
{
    sort(myVec.begin(),myVec.end()); //sorts entire vector
}

auto vInsert(vector<string>&myVec)
{
    myVec.insert(10000, "a");
}

auto vDelete(vector<string>&myVec)
{

}

//list operations

auto lRead(list<string>&myList)
{
    string buf;
    ifstream fin("codes.txt");
    while(getline(fin,buf))
    {
        myList.push_back(buf); //add all elements to vec
    }
}

auto lSort(list<string>&myList)
{

}

auto lInsert(list<string>&myList)
{

}

auto lDelete(list<string>&myList)
{

}

//set operations

auto sRead(vector<string>&mySet);
{

}

auto sSort(vector<string>&mySet) //already sorted, return -1
{
    return(-1);
}  

auto sInsert(vector<string>&mySet){

}
auto sDelete(vector<string>&mySet)
{

}

//very important function!
void printRecords()
{
    //table that calls all prior functions
}


/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/