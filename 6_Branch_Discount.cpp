#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char branch;
    int total_bill;
    cout<<"Enter Your location"<<endl;
    cout<<"J = Jagatpura"<<endl;
    cout<<"S = Sitapura"<<endl;
    cout<<"R = Rajapark"<<endl;
    cout<<"Choose your branch: ";
    cin>>branch;
    branch = toupper(branch);
    cout<<"Enter your total bill: ";
    cin>>total_bill;
    if (branch == 'J' || branch == 'S'){
        if (total_bill>600){
            cout<<"Offer available - 50% discount, You have to pay: "<<total_bill/2;}
        else
        cout<<"Sorry, the discount is only available on order above Rs.600, You have to pay the full amount: "<<total_bill;
    }
    else
    cout<<"Sorry, the discount offer is not availble for your branch, You have to pay the full amount: "<<total_bill;
    return 0;
}