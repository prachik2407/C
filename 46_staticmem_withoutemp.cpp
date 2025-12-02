// Static member functions without template
#include <iostream>
using namespace std;
class Test {
public:
    static int count;   // declaration

    Test() {
        count++;
    }
};
int Test::count = 0;    // definition
int main() {
    Test t1, t2, t3;
    cout << "Count = " << Test::count;
}
