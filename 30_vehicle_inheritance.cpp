#include<iostream>
using namespace std;
class Vehicle
{
    public:
    int s,f;
    Vehicle(int speed,int fuel)
    {
        s=speed;
        f=fuel;
        cout<<"Speed is :"<<s<<"km/h"<<endl;
        cout<<"Fuel is : "<<f<<"mph"<<endl;
    }
};
class Car : public Vehicle
{
    public:
    Car(int speed, int fuel): Vehicle(speed, fuel){}
    void doors()
    {
        cout<<"Door Must be closed while driving "<<endl;
    }
};
class Bike : public Vehicle
{
    public:
    Bike(int speed, int fuel): Vehicle(speed, fuel){}
    void helmetRequired()
    {
        cout<<"Wearing helment is compulsory"<<endl;
    }
};
int main()
{
    Car c1(80,50);
    c1.doors();
    Bike b1(40,30);
    b1.helmetRequired();
    return 0;
}