
#include <iostream>
#include <iomanip> // formating the console  
using namespace std;



int main()
{

   // variable 
   double  classA = 15.00 , classB = 12.00 , classC = 9.00 ; 
    double seatA, seatB, seatC; 


    //asking user 
cout <<  "How many seats of class A where sold? " << endl; 
cin >>  seatA ; 

cout << "How many  seats of class B where sold" << endl ; 
cin >> seatB ; 

cout << "How many  seats of class C where sold" << endl ; 
cin >> seatC ; 

// doing the math 
double priceA = seatA * classA , priceB = seatB * classB  ,priceC = seatC * classC , 
total = priceA + priceB + priceC ; 

// formating the result 
cout << setprecision(2) << fixed ; 
cout << "The total for seat A: " << priceA << endl ; 
cout << "The total for seat B: " << priceB <<  endl ; 
cout << "The total for seat C: " << priceC << endl ; 
cout << "Total price: " << total << endl ; 


}