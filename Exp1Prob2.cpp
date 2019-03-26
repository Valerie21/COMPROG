#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double mass, density, volume;

    cout << "Please enter mass: ";
    cin >> mass;
    cout << "Please enter density: " ;
    cin >> density;

    volume = mass / ( density * 4 );

    cout << "The volume is " << volume<< endl;

    return 0;
}
