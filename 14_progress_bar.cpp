#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(65001);
    cout<<"Your Software is about to download..."<<endl;
    int i,j;
    for(i = 1; i<=5; i++){
        for(j=1; j<=i; j++){
            cout<< "▒▒";
        }
        cout<<" ";
        cout<<i*20<<" %"<<endl;
        Sleep(1000);
    } 
    cout<<"Download Completed"<<endl;
    return 0;
}