#include <iostream>
#include <list>
#include <ostream>
#include <iomanip>
using namespace std;

ostream &tab(ostream &ostream1)
{
    return cout<<"\t";
}


int main() {
    ////list<int> list2 // Creation of an empty LinkedList list2
    int a[] = {1,5,8,9,3,5,6,4};
   // list<int> list1{1,5,8,9,3,5,6,4}; // Creation of a list directly from values using {}
    list<int> list1(a,a+8); // Creation of a list from range of array a

    for (list<int>::iterator itr =list1.begin() ; itr != list1.end() ; ++itr) {
        cout<<*itr<<tab;
    }
    cout<<endl;
    list1.reverse();

    for (list<int>::iterator itr =list1.begin() ; itr != list1.end() ; ++itr) {
        cout<<*itr<<tab;
    }

    return 0;
}
