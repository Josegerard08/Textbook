//This program started in Programming Challenge 15 of Chapter 3, and was modified in Programming Challenge 9 of Chapter 4. 
//Modify the program again so it displays a menu allowing the user to select an addition, 
//subtraction, multiplication, or division problem. The final selection on the menu should let the user quit the program.
//After the user has finished the math problem, the program should display the menu again.
//This process is repeated until the user chooses to quit the program.
//Input Validation: If the user selects an item not on the menu, display an error message and display the menu again.




#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std ; 


int main () { 

int userInput1 ; 
const int maximum = 800  , minimum = 1 ;
double ad, ad2 , userInput2; 
double total ; 
unsigned seed = time (0 );
srand (seed) ;  
string userInput3 ; 

cout << "Select the kind of problem that you wish to solve: " << endl ; 
cout << "1. Addition" << endl; 
cout << "2. Subtraction" << endl; 
cout << "3. Multiplication" << endl; 
cout << "4. Division" << endl; 
cin >> userInput1;  

while ( userInput1 >= 5 ||  userInput1  < 0  )
{ 
    cout << "Enter a valid number" << endl ;
    cout << "Select the kind of problem that you wish to solve: " << endl ; 
    cout << "1. Addition" << endl; 
    cout << "2. Subtraction" << endl; 
    cout << "3. Multiplication" << endl; 
    cout << "4. Division" << endl; 
    cin >> userInput1;  

}

while ( userInput1 == 1 ) { 

    ad = (rand () % (maximum - minimum + 1 )) + minimum; 
    ad2 = (rand () % (maximum - minimum + 1 )) + minimum; 
    total = ad + ad2; 
    cout << ad << "+ " << ad2  << endl ;
    cin >> userInput2 ;

     do {
        cout << "Wrong answer try again " << endl ;
         cout << ad << "+ " << ad2  << endl ;
    cin >> userInput2 ;
     }
     while ( userInput2 != total ) ; 
      do 
       { 
          cout << "good job!" << endl ; 
          break ; 
     }
     while ( userInput2 == total ) ;
}
    
     
     
     


while ( userInput1 == 2 )  {

 ad = (rand () % (maximum - minimum + 1 )) + minimum; 
    ad2 = (rand () % (maximum - minimum + 1 )) + minimum; 
    total = ad - ad2; 
    cout << ad << "- " << ad2  << endl ;
    cin >> userInput2 ;
     do {
        cout << "Wrong answer try again " << endl ;
         cout << ad << "- " << ad2  << endl ;
    cin >> userInput2 ;
     }
     while ( userInput2 != total ) ; 
     do 
     { 
          cout << "good job!" << endl ; 
          break ; 
     }
     while ( userInput2 == total ) ;
}

    

while ( userInput1 == 3 )  { 
 ad = (rand () % (maximum - minimum + 1 )) + minimum; 
    ad2 = (rand () % (maximum - minimum + 1 )) + minimum; 
    total =ad * ad2; 
    cout << ad << "* " << ad2  << endl ;
    cin >> userInput2 ;
     do {
        cout << "Wrong answer try again " << endl ;
         cout << ad << "* " << ad2  << endl ;
    cin >> userInput2 ;
     }
     while ( userInput2 != total ) ; 
     do 
     { 
          cout << "good job!" << endl ; 
          break ; 
     }

     while ( userInput2 == total ) ;



    
}
while ( userInput1 == 4 ) { 

 ad = (rand () % (maximum - minimum + 1 )) + minimum; 
    ad2 = (rand () % (maximum - minimum + 1 )) + minimum; 
    total = ad/ad2; 
    cout << ad << " / " << ad2  << endl ;
    cin >> userInput2 ;
     do {
        cout << "Wrong answer try again " << endl ;
         cout << ad << " / " << ad2  << endl ;
    cin >> userInput2 ;
     }
     while ( userInput2 != total ) ; 
     do 
     { 
          cout << "good job!" << endl ; 
          break ; 
     }

     while ( userInput2 == total ) ;


    
}


}
