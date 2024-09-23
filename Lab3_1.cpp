#include <iostream>

extern int quarters;
extern int dimes;
extern int nickels;
extern int pennies;

using namespace std;

int main () {
    
    int purchase_amount;
    int change;
    
    cout << "Enter amount in pennies (Make sure it's less than 100) : "; //user enters purchase amount
    cin >> purchase_amount; // my program takes in the purchase amount
    
    change = 100 - purchase_amount; // the change is 100 - the purchase amount
    
    int num_quarters = change / quarters; // the program starts sorting the change to Quarters, Dimes, Nickels and Dimes
    change = change % quarters;
    
    int num_dimes = change / dimes;
    change = change % dimes;
    
    int num_nickels = change / nickels;
    change = change % nickels;
    
    int num_pennies = change;
    
    cout << " Your change is : "; 
    
    cout << "Quarters: " << num_quarters << endl ; //prints out the sorted change
    cout << "Dimes: " << num_dimes << endl;
    cout << "Nickels: " << num_nickels << endl;
    cout << "Pennies: " << num_pennies << endl;



	return 0;
}