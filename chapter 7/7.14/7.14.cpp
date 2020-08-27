//Write a program that simulates a lottery. 
//The program should have an array of five integers named lottery and should generate a random number in the range 
//of 0 through 9 for each element in the array. The user should enter five digits, which should be stored in an 
//integer array named user. The program is to compare the corresponding elements in the two arrays 
//and keep a count of the digits that match. For example, the following shows the lottery array and
//the user array with sample numbers stored in each. There are two matching digits (elements 2 and 4).
//lottery array:
//74913
//user array:
//42973
//The program should display the random numbers stored in the lottery array and the number of matching digits. 
//If all of the digits match, display a message proclaiming the user as a grand prize winner.

#include <iostream> 
#include <cstdlib>
using namespace std ; 


const int number = 5 ; 
int check1 (int[], int ) ; 


int main () { 
int total ; 
unsigned seed = time ( 0) ; 
srand (seed); 
int max = 9 , min = 1 ; 
int winningLotter  [number] ; 
int user [number] ; 

for (int i = 0 ; i < number ; i ++) { 

winningLotter [i] = (rand () % ( max - min +1))  + min ; 


}


for (int i = 0 ; i < number ; i++ ) { 
    cout << "Enter a number:" ; 
    user[i]  = check1 (user, number); 



}

cout << "Winning lottery " << endl ; 
for ( int i = 0 ; i < number ; i ++ ){ 
    cout << winningLotter [i] << " "  ;

}
cout <<endl ; 
cout << "User lottery" << endl ;
for (int i = 0 ; i< number ; i++ ) { 
    cout << user[i] << " " ; 
    

}
cout << endl ;

for ( int i = 0 ; i < number ; i++ )  { 
    if ( user[i] == winningLotter [i] ) { 
        total += 1 ; 
    }
    
}
if ( total == 5 ) 
    cout << "You won!" << endl ; 
 else if ( total == 4) 
 cout << "Four matching numbers" << endl  ; 
 else if(total ==3) 
 cout << "Three matching numbers" << endl;
else if ( total == 2)
cout << "Two numbers matching" << endl ; 
else if (total ==1)
cout << " One matching number" << endl  ;  
else 
cout << "Better luck next time " << endl ; 
}

int check1 (int input[], int max ) { 

    while ( !(cin >> input[max]) || input[max] < 0 || input[max] > 9 )  { 
        cout << "Re-Enter a number between 1-9" << endl ; 
        cin.clear (); 
        cin.ignore ( numeric_limits <streamsize> ::max () , '\n') ; 


    }
    return input [max] ; 

}