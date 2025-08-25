#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter your Operation:"<<endl;
    cout<<"1. - Add the numbers"<<endl;
    cout<<"2. - Subtract the numbers"<<endl;
    cout<<"3. - Multiply the numbers"<<endl;
    cout<<"4. - Divide the numbers"<<endl;
    cout<<"5. - Find the remainder"<<endl;
    cout<<"Choose your Operation: ";
    cin>>c;

    switch(c){
    case 1:
        cout<<"Result: "<<(a+b);
        break;

    case 2:
        cout<<"Result: "<<(a-b);
        break;

    case 3:
        cout<<"Result: "<<(a*b);
        break;

    case 4:
        if (b != 0){
            cout<<"Result: "<<(a/b);
        }
        else
        cout<<"Zero Divison Error!";
        break;

    case 5:
        if (b != 0){
            cout<<"Result: "<<(a%b);
        }
        else
        cout<<"Zero Divison Error!";
          break;

    default:
    cout<<"Invalid Choice";
    }
    return 0;
}