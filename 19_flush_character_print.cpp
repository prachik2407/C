#include<iostream>
#include<windows.h>

using namespace std;

int main(){

    int d;
    string s;

    s = "Welcome to JECRC!";
    d = s.length();

    for (int i = 0; i<=d; i++){
        cout<<s[i]<<flush;
        Sleep(100);
    }
    
    return 0;
} 