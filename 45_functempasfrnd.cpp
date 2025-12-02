// Declare a function template as friend

#include <iostream>
using namespace std;
template <class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    template <class U>
    friend void display(Box<U> b);
};

template <class U>
void display(Box<U> b) {
    cout << "Value = " << b.value << endl;
}

int main() {
    Box<int> b1(10);
    Box<string> b2("Hello");

    display(b1);
    display(b2);

    return 0;
}