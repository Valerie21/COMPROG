#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main ()
{
    double PayRate, GrossIncome, NetIncome, SchoolSuppliesAmount, BondsAmount;
    double ClothesAmount, ParentsBondsAmount, HoursWorked;
    double TaxAmount;

    const double TaxRate = 0.14;
    const double ClothesPercent = 0.10;
    const double SchoolSuppliesPercent = 0.01;
    const double SavingsBondsPercent = 0.25;
    const double ParentsAdditionalAmount = 0.50;

    cout << "Hours you have worked: "<< endl;
    cin  >> HoursWorked;
    cout << "Pay rate per hour: " << endl;
    cin >> PayRate;

    TaxAmount = GrossIncome * TaxRate;

    GrossIncome = HoursWorked * PayRate;
    NetIncome = GrossIncome - TaxAmount;
    ClothesAmount = NetIncome * ClothesPercent;
    SchoolSuppliesAmount = NetIncome * SchoolSuppliesPercent;
    BondsAmount = NetIncome * SavingsBondsPercent;
    ParentsBondsAmount = BondsAmount * ParentsAdditionalAmount;

    cout << "Your Gross Income:  $" << GrossIncome << endl;
    cout << "Your Net Income:  $" << NetIncome << endl;
    cout << "Amount you spend on clothes and accessories:  $" << ClothesAmount << endl;
    cout <<  "Amount you spend on school supplies:  $" << SchoolSuppliesAmount << endl;
    cout << "Your savings bonds amount:  $" << BondsAmount << endl;
    cout << "Your parents' contribution on your savings bonds amount:  $" << ParentsBondsAmount << endl;

    getch();

    return 0;
}
