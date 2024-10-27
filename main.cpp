#include <iostream>
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

auto printRecords();

int main()
{
    //declare vector/string objects
    vector<string>myVec;
    list<string>myList;

    printRecords();

    auto start = high_resolution_clock::now();
    auto end = high_resolution_clock::now();
    return 0;


}

//function implementations

auto vRead()
{

}

auto vSort()
{}
auto vInsert(){}
auto vDelete(){}

auto lRead(){}
auto lSort(){}
auto lInsert(){}
auto lDelete(){}

auto printRecords()
{
    //table that calls all prior functions
}
/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/