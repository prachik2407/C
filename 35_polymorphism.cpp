#include <iostream>
#include <windows.h>
using namespace std;
  
class Device {
public:
    virtual void turnOn() {
        cout << "Device is turn ON" << endl;
    }
    void turnOff() {
        cout << "Device is OFF" << endl;
    }
};
class Light : public Device {
public:
    void turnOn() {
        cout << "Light is ON" << endl;
    }
};
class Fan : public Device {
public:
    void turnOn() {
        cout << "Fan speed set to 3" << endl;
    }
};
class AC : public Device {
public:
    void turnOn() {
        cout << "Set AC temperature to 18°C";
    }
};

int main() {
    SetConsoleOutputCP(65001);
    Device d1;
    d1.turnOff();
    d1.turnOn();
    Device* d;
    Light l;
    Fan f;
    AC a;
    d = &l;
    d->turnOn();
    d = &f;
    d->turnOn();
    d = &a;
    d->turnOn();
    return 0;
}