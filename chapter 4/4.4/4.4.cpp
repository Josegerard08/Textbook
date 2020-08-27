//The area of a rectangle is the rectangle’s length times its width.
//Write a program that asks for the length and width of two rectangles. 
//The program should tell the user which rectangle has the greater area, 
//or if the areas are the same.

#include <iostream> 
#include <iomanip> 
using namespace std ; 


int main (){ 

int l1, w1 ,l2,w2;

cout << " Enter the length of the first triangle" << endl ; 
cin >> l1;
cout << "Enter the width if the first traingle" << endl ; 
cin >> w1 ; 


cout << " Enter the length of the second triangle" << endl ; 
cin >> l2;
cout << "Enter the width if the second traingle" << endl ; 
cin >> w2 ; 

int rec1 = l1*w1 , rec2 = l2 *w2 ; 

if (rec1 < rec2 ) 
cout << "Rectangle two is bigger." << endl ;
else if ( rec2 > rec1 )
cout << "Rectangle one is bigger." << endl; 
else if ( rec2 == rec1 ) 
cout << "Both rectangle are equal" << endl; 



}