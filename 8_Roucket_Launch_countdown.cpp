#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    system("Pause");
    int i;
    for(i=5; i>=1; i--){
        cout<<i<<endl;
        Sleep(1000);
    }
    cout<<"Rocket Successfully Launched....";
    return 0;
}