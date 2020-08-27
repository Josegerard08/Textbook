//Write a program that calculates and displays a person’s body mass index (BMI).
//The BMI is often used to determine whether a person with a sedentary lifestyle is over- weight 
//or underweight for his or her height. A person’s BMI is calculated with the following formula:
//BMI = weight * 703 / height2
//where weight is measured in pounds and height is measured in inches. 
//The program should display a message indicating whether the person has optimal weight, 
//is underweight, or is overweight. A sedentary person’s weight is considered to be optimal 
//if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is consid- 
//ered to be underweight. If the BMI value is greater than 25, the person is considered to be overweight.
#include <iostream> 
#include <cmath> 
using namespace std ; 

int main () { 

const int num = 703 ; 
double weight , height ; 

cout << "Enter your weight in pounds: " << endl ;
cin >> weight ;
cout << "Enter your height in inches: " << endl ; 
cin >> height ; 

double BMI = weight * (num / pow (height,2)) ; 


if ( BMI >= 18.5 && BMI >= 25)
cout << "OPTIMAL" << endl ; 
else if ( BMI >= 0|| BMI <=  18.5  ) 
cout << "UNDERWIEGHT" << endl; 
else if ( BMI >= 25)
cout << "FAT" << endl ; 











}