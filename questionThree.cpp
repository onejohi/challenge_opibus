/* To extend DriverControl class, create 3 classes that are derived from DriverControl
This means you can access all the functionality and methods of DriverControl while driving in any of the modes
but at the same time can call unique methods only accessible in instances of the driving mode instantiated */

#include <iostream>

using namespace std;

class DriverControl {
    void drive() {}
};

class Eco : public DriverControl{
    public:
    void driveInEcoMode() {} // eco mode method example
};

class Sport : public DriverControl{
    public:
    void driveInSportMode() {} // sport mode method example
};

class OffRoad: public DriverControl{
    public:
    void driveInSportMode() {} // offroad mode method example
};

int main()
{
   cout << "Eco, Sport and Offroad are derived from base class DriverControl" << endl; 
   
   return 0;
}