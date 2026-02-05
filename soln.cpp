/* PC #7 from REVEL:
A movie theater only keeps a percentage of the revenue earned from ticket sales.
The remainder goes to the movie distributor.  Write a program that calculates the 
theater's gross and next box office profits for a night.  The program should
ask for the name of the movie, and how many adult and child tickets were sold.
The price of an adult ticket is $10 and a child's ticket is $6.  
It should display a report similar to:

Movie Name:               "Wheels of Fury"
Adult Tickets Sold            382
Child Tickets Sold            127
Gross Box Office Profit     $4,582.00
Net Box Office Profit       $ 916.40
Amount Paid to Distributor  $3,665.60

NOTE: Assume the theater keeps 20 percent of the gross box office profit
*/

#include <iostream>  // cin and cout
#include <iomanip>  //formatting stuff
#include <cstdio> //printf
#include <string>  // for using string objects
using namespace std;

int main() {
        //constants
        const double THEATER_PERCENT = 0.20;
        const double CHILD_TICKET = 6;
        const double ADULT_TICKET = 10;

        // variables and objects
        string movieName;
        int adultTickets, childTickets;

        // prompt user for name of the movie, the number of adult tickets,
        // number of child tickets, and read in data
        cout << "Enter the name of the movie: ";
        getline(cin, movieName);
        cout << "How many child tickets were sold: ";
        cin >> childTickets;
        cout << "How many adult tickets were sold: ";
        cin >> adultTickets;

        // compute the gross, net, and amount to be paid to the distributor
        double gross = adultTickets * ADULT_TICKET + childTickets * CHILD_TICKET;
        double net = THEATER_PERCENT * gross;
        double distributor = gross - net;

        // do the formatted output for the display
        cout << setprecision(2) << fixed;  // should display floating to 2 places and show the decimal
        cout << left << setw(50) << "MovieName:" << setw(20) << movieName << endl;
        cout << left << setw(50) << "Adult Tickets Sold:" << setw(20) << adultTickets << endl;        cout << left << setw(50) << "Child Tickets Sold:" << setw(20) << childTickets << endl;
        cout << left << setw(50) << "Gross Box Office Profit:" << "$" << setw(10) << right << gross << endl;
        cout << left << setw(50) << "Net Box Office Profit: " << "$" << setw(10) << right << net << endl;
        cout << left << setw(50) << "Amount Paid to Distributor:" << "$" << setw(10) << right << distributor << endl;
        return 0; 
}


 
