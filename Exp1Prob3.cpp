#include <iostream>


using namespace std;

int main ()
{
    double netbalance, d1, d2, payment, interest, monthlyinterestrate, avedailybal;
    
    cout << "Please enter net balance: ";
    cin >> netbalance;
    cout << "Please enter payment made: ";
    cin >> payment;
    cout << "Please enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << "Please enter the number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << "Please enter interest per month: ";
    cin >> monthlyinterestrate;
    
    avedailybal = (netbalance * d1 - payment * d2)/ d1;
    interest = avedailybal * monthlyinterestrate;
    
    cout << "The interest is: " << interest << endl;
    
    return 0;
}
