#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float box = 250.00;
    float sideline = 100.00;
    float premium = 50.00;
    float GeneralAdmission = 25.00;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2);

    float numticketsbox, numticketssideline, numticketspremium, numticketsgenad;
    float ticketsalesbox, ticketsalessideline, ticketsalespremium, ticketsalesgenad;
    float totalticketsales;
   
    cout << "Please enter number of tickets sold for box seating: ";
    cin >> numticketsbox;
    cout << "Please enter number of tickets sold for sideline: ";
    cin >> numticketssideline;
    cout << "Please enter number of tickets sold for premium seating: ";
    cin >> numticketspremium;
    cout << "Please enter number of tickets sold for general admission: ";
    cin >> numticketsgenad;


    ticketsalesbox = box * numticketsbox;
    ticketsalessideline = sideline * numticketssideline;
    ticketsalespremium = premium * numticketspremium;
    ticketsalesgenad = GeneralAdmission * numticketsgenad;


    totalticketsales = ticketsalesbox + ticketsalessideline + ticketsalespremium + ticketsalesgenad;

    cout << "Total sales for box seating: " << ticketsalesbox << endl;
    cout << "Total sales for sideline: " << ticketsalessideline << endl;
    cout << "Total sales for premium seating: " << ticketsalespremium << endl;
    cout << "Total sales for general admission: " << ticketsalesgenad << endl;
    cout << "Total ticket sales: " << totalticketsales << endl;

   
    return 0;
}
