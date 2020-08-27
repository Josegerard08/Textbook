//Modify the National Commerce Bank case study presented in Program 7-23
//so pin1, pin2, and pin3 are vectors instead of arrays. You must also 
//modify the testPIN function to accept a vector instead of an array.


// This program is a driver that tests a function comparing the
// contents of two int arrays. 
#include <iostream>
#include <vector> 

using namespace std;

// Function Prototype
 bool testPIN( const vector<int>& custPIN1 , const vector <int> & custPIN );

 int main () { 
    const int NUM_DIGITS = 7 ; 
    int pin1 [NUM_DIGITS]= { 2,2,4,1,8,7,9,} ;
    int pin2 [NUM_DIGITS]= { 2,2,4,6,8,7,9,} ; 
    int pin3 [NUM_DIGITS] = { 1,2,3,4,5,6,7} ;  

    vector<int> pin01 (pin1, pin1+7) ; 
    vector<int> pin02 (pin2 , pin2+7);
    vector<int> pin03 (pin3 , pin3+7);
    if (testPIN(pin01, pin02))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    if (testPIN(pin01.date(), pin03.data()))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";
    if (testPIN(pin01.data(), pin01.data()))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    return 0;
 }

    bool testPIN(vector<int> &custPIN,vector<int> databasePIN  ) {
        for (int index = 0; index < 7 ; index++) {
        if (custPIN[index] != databasePIN[index])
    return false; // We've found two different values.
    }
    return true; // If we make it this far, the values are the same.
     }


