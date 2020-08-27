//Write a program that uses the following arrays:
//• empId: an array of seven long integers to hold employee identification numbers. 
//The array should be initialized with the following numbers:
//5658845 4520125 7895122 8777541 8451277 1302850 7580489
//• hours: an array of seven integers to hold the number of hours worked by each employee
//• payRate: an array of seven doubles to hold each employee’s hourly pay rate
//• wages: an array of seven doubles to hold each employee’s gross wages
//The program should relate the data in each array through the subscripts. For example, 
//the number in element 0 of the hours array should be the number of hours worked by
//the employee whose identification number is stored in element 0 of the empId array.
//That same employee’s pay rate should be stored in element 0 of the payRate array.
//The program should display each employee number and ask the user to enter that employee’s hours and pay rate. 
//It should then calculate the gross wages for that employee (hours times pay rate) and store them in the wages array.
//After the data has been entered for all the employees, the program should display each employee’s identification number and gross wages.
//Input Validation: Do not accept negative values for hours or numbers less than 15.00 for pay rate.


#include <iostream> 
#include <iomanip>
using namespace std ; 


const int  employers = 7; 
double checking ( double array [ ], int  ) ; 
int checking2 ( int arry2 [ ], int ); 
//void display (double array1 [] , int arrayy2 [] , int array3 , int ) ; 

int main ( ) { 

int empid [employers] = { 5658845 ,4520125, 7895122, 8777541 ,8451277 ,1302850 ,7580489} ,hours [ employers] ; 
double payrate [ employers] , wages [employers] ;

for ( int i  = 0 ; i < employers ; i++ ) {
    cout <<  "Employer # "<< empid [i] <<" Enter your hourly pay: " << endl ; 
    payrate [ i] = checking ( payrate, employers)  ; 


}

for ( int i = 0 ; i < employers; i ++  )  { 
cout <<  "Employer # "<< empid [i] <<" Enter the amount of hours you work: " << endl ; 
    hours [ i] = checking2 ( hours, employers)  ; 



}
for ( int i = 0 ; i < employers ; i++ ) 
 wages [i] = payrate [i] * hours [i] ;



for (int i = 0 ; i < employers ; i++ ) {
    cout << setprecision(2) << fixed ; 
cout << "Employer # " << empid [i] << " wages is " << wages [i]<< endl ; 
}
}

double checking ( double input [ ] , int  max ) { 

    while ( !(cin >> input [max ]) || input [ max] < 0 ) { 
        cout << "Enter a valid number! " << endl ; 
        cin.clear () ; 
        cin.ignore ( numeric_limits <streamsize> :: max () , '\n') ; 
}
return input [max] ; 

}

int checking2 ( int input2 [ ] , int  max ) { 

    while ( !(cin >> input2 [max ]) || input2 [ max] < 0 ) { 
        cout << "Enter a valid number! " << endl ; 
        cin.clear () ; 
        cin.ignore ( numeric_limits <streamsize> :: max () , '\n') ; 
}
return input2 [max] ; 

}

//void display ( double payrate [ ] , int hours [] , int empid [] , int max ) { 
   // double w1 , w2, w3, w4 , w5 ,w6 , w7; 

    /* w1 = payrate [0] * hours [0] ;
    w2 = payrate [1] * hours [1];
    w3 = payrate [2] * hours [2];
    w4 = payrate [3] * hours [3];
    w5 = payrate [4] * hours [4];
    w6 = payrate [5] * hours [5];
    w7 = payrate [6] * hours [6];
  
    cout << "Wage for employer # " << empid [0] << w1 << endl ;  

    cout << "Wage for employer # " << empid [1] << w2 << endl ;

    cout << "Wage for employer # " << empid [2] << w3 << endl ;

    cout << "Wage for employer # " << empid [3] << w4 << endl ;

    cout << "Wage for employer # " << empid [4] << w5 << endl ;

    cout << "Wage for employer # " << empid [5] << w6 << endl ;

    cout << "Wage for employer # " << empid [6] << w7 << endl ;


for ( int i = 0 ; i < max ; i++ ) 
cout << "Employer # " <<empid [i] << "Wage" << payrate [i] * hours [i] << endl ;

} */