#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your Key: ";
    cin>>n;

    if(n<=0) goto invalid;
    cout<<"Valid key!"<<endl;
    return 0;

invalid:
    cout<<"Invalid Key!";
    return 0;
}