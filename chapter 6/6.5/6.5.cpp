//When an object is falling because of gravity, the following formula can be used to determine
//the distance the object falls in a specific time period:
//d = 1/2gt 
//The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
//is the amount of time, in seconds, that the object has been falling.
//Write a function named fallingDistance that accepts an object’s falling time (in seconds) 
//as an argument. The function should return the distance, in meters, that the object has fallen during that time interval.
//Write a program that demonstrates the function by calling it in a loop that passes the values 1 through 10 as arguments 
//and displays the return value.

#include <iostream>
#include <cmath> 
using namespace std ; 


double fallingTime (double); 

const double gravity = 9.8 , half = .5 ; 

int main () { 


for (int i = 1.0; i <= 10 ; i++) { 

cout << "Seconds: " << i <<" And distance: " << fallingTime (i) << endl ; 


}


    
}

double fallingTime (double timefallen) { 
double timeEnter, distance  ; 


distance = pow ( timefallen ,2 )  * gravity * half ; 

return distance ; 



}

