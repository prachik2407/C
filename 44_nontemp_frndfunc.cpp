// Declare non-template friend function

#include <iostream>
using namespace std;

template <class T>
class Sample {
    T data;

public:
    Sample(T d) : data(d) {}
  friend void show(Sample s) {
        cout << "Data = " << s.data << endl;
    }
};

int main() {
    Sample<int> obj1(10);
    Sample<string> obj2("Hello");

    show(obj1);
    show(obj2);

    return 0;
}
