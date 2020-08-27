
/* Write a program that stores the following data about a soccer player in a structure:
Player’s Name
Player’s Number
Points Scored by Player
The program should keep an array of 12 of these structures. Each element is for a different player on a team.
When the program runs it should ask the user to enter the data for each player. It should then show a table that 
lists each player’s number, name, and points scored. The program should also calculate and display the total points 
earned by the team. The number and name of the player who has earned the most points should also be displayed.
Input Validation: Do not accept negative values for players’ numbers or points scored. */ 

#include <iostream> 
#include <string> 
using namespace std; 

struct Player
{
    string name; 
    int Number; 
    int pointsScored;
}; 


const int twelve = 12 ; 
int checking ( Player[], int  ) ; 
void display (Player[]) ;
int main () 
{ 

    Player soccer[twelve] ; 

    for (int i = 0 ; i < twelve; i++ ) 
    { 
        cout << "The " << (i+1) << " player:  " << endl ;
         cout << "Enter name: " ; 
        cin >> soccer[i].name ; 
        cout << "Enter number: " ; 
        soccer[i].name = checking (soccer, i );
        cout << "Enter goals: " ; 
        soccer[i].pointsScored = checking ( soccer, i ); 


    }

display ( soccer );
return 0 ; 


}

int checking ( Player input [], int i ) 
{ 
    while ( !(cin >> input[i].Number) && !(cin >> input[i].pointsScored) || input[i].pointsScored < 0  || input[i].Number < 0 ) 
    { 
        cout << " No negative number! " << endl ; 
        cin.clear ( ); 
        cin.ignore (numeric_limits<streamsize> :: max() , '\n'); 



    }

return input[i].Number || input[i].pointsScored ; 

}

void display ( Player soccer []) 
{     
    for (int i = 0 ; i < twelve ; i ++ )
     {  
         cout << "Name of player: " ; 
         cout << soccer[i].name << endl ; 
         cout << "Number of player: " ;
         cout << soccer[i].Number << endl ; 
         cout << "Goals of player:" ; 
         cout << soccer[i].pointsScored << endl ;
    }
} 