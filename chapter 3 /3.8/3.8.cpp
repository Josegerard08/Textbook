#include <iostream> 
#include <iomanip> 
using namespace std ; 



//The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
//Write a program that calculates how many widgets are stacked on a pallet,
//based on the total weight of the pallet. 
//The program should ask the user how much the pallet weighs by itself
//and with the widgets stacked on it.
 //It should then calculate and display the number of widgets stacked on the pallet.
  
  int main ( ) { 

double widgetsW = 12.5 , pallet , palletW; 


cout << "What's the weight of the pallet alone? " << endl ; 
cin >> pallet ;
cout << "Whats the weigth of the pallet with widgets "<< endl  ;
cin >> palletW;


//math 
double withoutWeight = palletW - pallet  , 
total = withoutWeight / widgetsW ; 


cout << setprecision (1) << fixed ;  
cout << "There is " << total << " widgets in total. " << endl ; 












  }