#include <iostream>  
#include <iomanip> 
using namespace std ; 

//A movie theater only keeps a percentage of the revenue earned from ticket sales. 
//The remainder goes to the movie distributor. 
//Write a program that calculates a theater’s gross and net box office profit for a night.
// The program should ask for the name of the movie, and how many adult and child tickets were sold.
// (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) 
//It should display a report similar to

//Movie Name:  “Wheels of Fury”
//Adult Tickets Sold:  382
//Child Tickets Sold:  127
//Gross Box Office Profit:   $ 4582.00
//Net Box Office Profit:    $  916.40
//Amount Paid to Distributor:   $ 3665.60
//NOTE: Assume the theater keeps 20 percent of the gross box office profit.
 int main ( ) { 


string movieName ; 
int adult, child ; 
double  priceA = 10.00 , priceC = 6.00 ; 



cout << "What's the movie name? " << endl ; 
getline (cin , movieName) ; 
 
cout << "How many adults were sold?" << endl ; 
cin >> adult ; 
cout << "How many children tickets were sold?" << endl ; 
cin >> child ;


// math 
const double per = .20 ; 
double totalA = priceA * adult , 
totalC = priceC * child ,
 grossP = totalA + totalC , 
netbox = grossP * per , 
distributor = grossP - netbox ; 


cout << setprecision (2 ) << fixed ; 
cout <<" Adult tickets sold: " << adult << endl  ;
cout << " Child tickets sold: " << child << endl  ; 
cout << " Gross box office profit: " << grossP << endl ;
cout <<  " Net box office profit: " << netbox << endl ; 
cout << " Amount of paid to distrubutor: " << distributor << endl ; 



 }
