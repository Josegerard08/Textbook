//The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors.
 //When you mix two primary colors, you get a secondary color, as shown here:
//When you mix red and blue, you get purple. 
//When you mix red and yellow, you get orange. 
//When you mix blue and yellow, you get green.
//Write a program that prompts the user to enter the names of two primary colors to mix.
 //If the user enters anything other than “red,” “blue,” or “yellow,” 
 //the program should display an error message. Otherwise, the program should display
  //the name of the secondary color that results by mixing two primary colors.
  #include <iostream> 
#include <iomanip> 
  using namespace std ; 


int main () { 


string userInput1, userInput2 ; 

cout << "This program would mix the two primary color you enter!" << endl ;
cout << "Watch grammar" << endl ; 
cout << "PRESS ENTER TO START" << endl ;
cin.get() ; 

cout << "Enter first primary color" << endl ; 
cin >> userInput1 ; 



if (  userInput1 =="Red") { 

    cout << "Enter secoundary color" << endl ; 
    cin >>userInput2 ; 
    
    if ( userInput2 == "Blue" || userInput1 =="Yellow") 
        cout << "You mix " << userInput1 << " and " << userInput2 << endl ; 
        else 
        cout << "You enter an invalid primary color" << endl ; 
}
else if (  userInput1 =="Yellow") { 

    cout << "Enter secoundary color" << endl ; 
    cin >>userInput2 ; 

    if ( userInput2 == "Blue" || userInput1 =="Red") 
         cout << "You mix " << userInput1 << " and " << userInput2 << endl ; 
        else 
        cout << "You enter an invalid primary color" << endl ; 
   
}
else if ( userInput1 =="Blue") { 

    cout << "Enter secoundary color" << endl ; 
    cin >>userInput2 ; 
    
     if ( userInput2 == "Red" || userInput1 =="Yellow") 
        cout << "You mix " << userInput1 << " and " << userInput2 << endl ; 
        else 
        cout << "You enter an invalid primary color" << endl ; 
}
else 
    cout << "You enter an invalid primary color" << endl ; 



}