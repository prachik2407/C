#include<iostream>
using namespace std;

int main(){

    cout<<"Use of break: "<<endl;

    for(int i=1; i<=5; i++){
        if(i==3) break;
        cout<<i<<endl;
    }

    cout<<"Note: Loop stopped completely at 3"<<endl<<endl;
    
    cout<<"Use of Continue: "<<endl;

    for(int i=1; i<=5; i++){
        if(i==3) continue;
        cout<<i<<endl;
    }

    cout<<"Note: 3 is skipped because of continue";

    return 0;
}