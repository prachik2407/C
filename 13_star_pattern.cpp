#include<iostream>
using namespace std;

int main(){
    int j, i;
    for(j=1; j<=5; j++){
        for(i = 0; i<j; i++){
            cout<< " * ";
        }
        cout<<endl;
    }
    return 0;
}