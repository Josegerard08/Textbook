//In physics, an object that is in motion is said to have kinetic energy. 
//The following formula can be used to determine a moving object’s kinetic energy:
//KE = mv^2
//The variables in the formula are as follows: KE is the kinetic energy, m is the object’s
//mass in kilograms, and v is the object’s velocity, in meters per second.
//Write a function named kineticEnergy that accepts an object’s mass (in kilograms) and velocity 
//(in meters per second) as arguments. The function should return the amount of kinetic energy that the
//object has. Demonstrate the function by calling it in a program that asks the user to enter values for mass and velocity.

#include <iostream> 
#include <cmath> 
using namespace std ; 

double error ( double ); 
double kineticEnergy ( double , double) ;

int main () { 

double mass , velocity , total   ; 

cout << "Enter the value of mass of the object (In kilogram): " << endl ; 
cin >> mass ; 
mass = error (mass ); 

cout << "Enter the value of velocity (In meter per second): "<< endl ; 
cin >> mass ; 
velocity = error ( mass) ; 

total = kineticEnergy( mass, velocity ) ; 
cout << "The kinetic Energy is: " << total <<  endl ;



return 0 ; 

}

double kineticEnergy (double a, double b ) { 
        double half = .5  ; 
        return  a  * pow ( b, 2 ) * half  ; 

}

double error ( double check ) { 
         double rightNumber ; 
        while ( check <  0  )
        { 
        cout << "No negative number! " << endl ; 
        cout << "Re-enter number: " << endl ;  
        cin >> check ; 
        } 
return check ; 
} 