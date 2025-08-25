#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter a number: ";
    cin>>marks;

    if (marks>40){
        if (marks>75){
            cout<<"Distinction";
        }
        else
        cout<<"Pass";
    }
    else
        cout<<"Fail";
    
    return 0;
}