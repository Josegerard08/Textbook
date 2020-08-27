
/*Modify the Movie Data program written for Programming Challenge 1 to include two
 additional members that hold the movie’s production costs and first-year revenues.
 Modify the function that displays the movie data to display the title, director, release year, 
 running time, and first year’s profit or loss. */ 

 #include <iostream> 
 #include <string> 
 #include <iomanip> 

 using namespace std; 




struct MovieData 
{
    string Title; 
    string Director;
    int YearReleased ; 
    int RunningTime;  
    double productionCost ; 
    double firstYrRevenues ; 

    
 };

void display (MovieData) ; 
int main () { 

    MovieData movie; 
    double total ; 

    

    cout << "Enter the name of the movie: " ; 
    getline( cin , movie.Title) ; 
    cout << "Enter the director name: " ;
    getline( cin, movie.Director) ; 
    cout << "Enter the year realeased: " ; 
    cin >> movie.YearReleased ; 
    cout << "Enter how long the move is: " ; 
    cin >> movie.YearReleased ; 
    cout << "Enter the number of production cost: " ; 
    cin >> movie.productionCost; 
    cout << "Enter the number of first year revenue: " ; 
    cin >> movie.firstYrRevenues ; 

    total = movie.firstYrRevenues - movie.productionCost;
    
    cout << "Title : " << movie.Title  << endl ; 
    cout << "Director: " << movie.Director << endl  ; 
    cout << "Year relaesed: " << movie.YearReleased << endl  ; 
    cout << "Running time: " << movie.RunningTime << endl ; 
    cout << "Total profit: " << total  ;

}