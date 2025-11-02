#include <iostream>
using namespace std;
class Ride {
    public:
    virtual void calculateFare(int distance) {
        cout << "Calculate fare:" << endl;
    }
};
class BikeRide : public Ride {
    public:
    void calculateFare(int distance) {
        int rate_per_km = 7.0;
        cout << "Bike Ride Fare : Rs. " << rate_per_km * distance << endl;
    }
};
class CarRide : public Ride {
public:
    void calculateFare(int distance) {
        int rate_per_km = 13.0;
        cout << "Car Ride Fare: Rs. " << rate_per_km * distance << endl;
    }
};
class AutoRide : public Ride {
    public:
    void calculateFare(int distance) {
        int rate_per_km = 10.0;
        cout << "Auto Ride Fare: Rs. " << rate_per_km * distance << endl;
    }
};
int main() {
    int distance;
    cout << "Enter distance in km : ";
    cin >> distance;
    Ride r1;
    r1.calculateFare(distance);
    Ride* r[3];
    BikeRide B;
    CarRide C;
    AutoRide A;
    r[0] = &B;
    r[1] = &C;
    r[2] = &A;
    for (int i = 0; i < 3; i++) {
        r[i]->calculateFare(distance);
    }
    return 0;
}