#include <iostream>
using namespace std;

template <typename T> 
    T add(T a, T b){
    return a+b;
}

int main(){
    cout<<add(5, 7)<<endl;       // int
    cout<<add(5.5, 7.7)<<endl;  // double
}