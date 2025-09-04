#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

int main(){

    SetConsoleOutputCP(65001);
    srand(time(0));

    char choice;

    do{
        cout<<"Race Start..."<<endl;

        int car1 = rand()%20 + 1;
        int car2 = rand()%20 + 1;

        for (int i=0; i<car1; i++){
            cout<<" - ";
            Sleep(100);
        }
        cout<<" 🚗 1"<<endl;

        for (int i=0; i<car2; i++){
            cout<<" - ";
            Sleep(100);
        }
        cout<<" 🚗 2"<<endl;

        if (car1>car2){
            cout<<"Car 1 wins!"<<endl;
        }
        else if (car1<car2){
            cout<<"Car 2 wins!"<<endl;
        }
        else
        cout<<"It's a Tie!"<<endl;

    cout<<"Do you want to play more? Y/N: ";
    cin>>choice;

    }while(choice == 'Y' || choice == 'y');

    cout << "Game Over! Thanks for playing" << endl;
    
    return 0;
}