#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    int pos = 0;
    int dir = 1;
    int width = 5;

    while(true){
        for (int i = 0; i < pos; i++) cout<<" ";
            cout<<"O"<<endl;
        

        Sleep(100);
     
        pos += dir;
        

        if(pos>=width) dir = -1;
        if(pos<=0) dir = 1;
        
    }

    return 0;
}