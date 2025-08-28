#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));  
    string c;
    do{
        int d;
        d = rand()%6+1;
        cout<<"Dice is rolling..."<<endl;
        cout<<d<<endl;
        cout<<"Do you want to play again: Y/N: ";
        cin>>c;
    }while(c =="y" || c == "Y");      
    cout<<"Well played! ";
    return 0;
}