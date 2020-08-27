/* Write a program that uses a structure named MovieData to store the following infor- mation about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members, and pass each one, 
in turn, to a function that displays the information about the movie in a clearly formatted manner. */ 


#include <iostream> 
#include <string>
using namespace std ;

struct MovieData 
{
    string Title; 
    string Director;
    int YearReleased ; 
    int RunningTime;  
 };

void display (MovieData) ; 
int main () { 

    MovieData movie; 

    cout << "Enter the name of the movie: " ; 
    getline( cin , movie.Title) ; 
    cout << "Enter the director name: " ;
    getline( cin, movie.Director) ; 
    cout << "Enter the year realeased: " ; 
    cin >> movie.YearReleased ; 
    cout << "Enter how long the move is: " ; 
    cin >> movie.YearReleased ; 
    
    cout << "Title : " << movie.Title  << endl ; 
    cout << "Director: " << movie.Director << endl  ; 
    cout << "Year relaesed: " << movie.YearReleased << endl  ; 
    cout << "Running time: " << movie.RunningTime << endl ; 


}