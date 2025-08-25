#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your name: ";
    string name;
    int name_length;
    cin>>name;

    name_length = name.length();

    if (name_length % 2 == 0){
        cout<<"You are a good programmer.";
    }
    else
    cout<<"You need to work hard.";
    return 0;
}