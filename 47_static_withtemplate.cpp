// Static member functions with template
#include <iostream>
using namespace std;

template <class T>
class Counter {
public:
    static int count;   // static member declaration

    Counter() {
        count++;        // increases whenever an object is created
    }
};
// static member definition — one for each TYPE
template <class T>
int Counter<T>::count = 0;

int main() {
    Counter<int> c1, c2;       // two int objects
    Counter<double> d1;        // one double object

    cout << "int count = " << Counter<int>::count << endl;
    cout << "double count = " << Counter<double>::count << endl;
}