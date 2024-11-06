#include<iostream>
using namespace std;
int main()
{
    double mobile = 300.0, leptop = 600.0, charger = 20.0;
    int quantityA, quantityB, quantityC;
    cout << "ENTER THE QUANTITY OF MOBILE:" << endl;
    cin >> quantityA;
    cout << "ENTER THE QUANTITY OF LEPTOP:" << endl;
    cin >> quantityB;
    cout << "ENTER THE QUANTITY OF CHARGER:" << endl;
    cin >> quantityC;
    double total = (mobile * quantityA) + (leptop * quantityB) + (charger * quantityC);
    cout << "TOTAL COST IN DOLLAR IS " << total << "$" << endl;
    double finaltotal = (total > 250) ? total * 0.9 : total;
    cout << "TOTAL AFTER 10% DISCOUNt IS " << finaltotal << "$" << endl;
    double shipping = (finaltotal < 150) ? 15.0 : 0.0;
    int totalwithshipping = finaltotal + shipping;
    int loyalitypoints = (totalwithshipping > 300) ? 50 : 20;
    cout << "TOTAL AFTER DISCOUNT AND SHIPPING IS:$" << totalwithshipping << endl;
    cout << "LOYALITY POINTS EARNED " << loyalitypoints << endl;
    return 0;
}