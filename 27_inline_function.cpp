#include<iostream>
using namespace std;

inline int cube(int a){
        return a*a*a;
}

class math
{
    public:
    inline int square(int b){
        return b*b;
    }
};

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The cube of "<<num<<" is: "<<cube(num)<<endl;
    math m;
    cout<<"The square of "<<num<<" is: "<<m.square(num);
    
    return 0;
}