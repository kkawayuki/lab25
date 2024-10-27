#include <iostream>
#include <fstream>
#include <chrono>
#include <vector> //for vector
#include <list> //for list
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

void printRecords();

int main()
{
    //declare vector/string objects
    vector<string>myVec;
    list<string>myList;

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
    {
        myVec.push_back(buf); //add all elements to vec
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    return(duration.count()); 
}

auto vSort(vector<string>&myVec)
{
    
}

auto vInsert(vector<string>&myVec)
{

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

auto lSort(list<string>&myList){return(-1)} //already sorted

auto lInsert(list<string>&myList){}

auto lDelete(list<string>&myList){}

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