/* Write a program that keeps track of a speakers’ bureau. The program should use a structure to store the following data about a speaker:
Name
Telephone Number 
Speaking Topic 
Fee Required
The program should use an array of at least 10 structures.
 It should let the user enter data into the array, change the contents of any element, 
 and display all the data stored in the array. The program should have a menu-driven user interface.
Input Validation: When the data for a new speaker is entered, be sure the user enters data for all the fields. 
No negative amounts should be entered for a speaker’s fee. */ 


#include <iostream> 
#include <string> 

using namespace std ; 
struct Speaker  { 

string name; 
int number ; 
string speakingTopic; 
double fee ; 

};

double checking ( Speaker [], int );
 int SIZE = 10 ; 
void options (); 
int checkingOption ( int ) ; 
void question ( ) ;
void modifyOption () ; 

int main  ()

{ 
    int modifyInput ; 
    int option ; 
    int num  ; 
    Speaker speaker_ [SIZE]; 

    options() ; 
    cout << "Pick an option: " ; 
    option = checkingOption ( option) ; 
    
    switch ( option)
    {
    case 1:
        cout << "Enter speaker name: " << endl ; 
        getline( cin , speaker_[num].name) ; 
        cin.ignore(); 
        cin.ignore(numeric_limits <streamsize> :: max ( ) , '\n'); 


        cout << "Enter speaker telephone number: " << endl ; 
        speaker_[num].number = checking(  speaker_, num) ; 
       
        
        

        cout << "Enter speaker speaking topic: " << endl ; 
        getline (cin, speaker_[num].speakingTopic); 
        cin.ignore () ; 
        cin.ignore(numeric_limits <streamsize> :: max ( ) , '\n'); 

        cout << "Enter the fee: " << endl ;  
        speaker_[num].fee = checking (speaker_ , num); 
     options() ; 
    cout << "Pick an option: " ; 
    option = checkingOption ( option) ; 
        
        break;
    case 2 : 
        cout << "Total speaker: 10 " << endl ; 
        cout << "Enter the number of speaker your wish to change: " ; 
        cin >>  modifyInput ; 
        if ( modifyInput == num)
        { 
        void modifyOption () ; 
        

        }

    
        

        break ; 
    
    case 3 : 
        num ++ ; 
        cout << "================================" << endl ; 
        cout << "Next speaker: " << endl ; 
        cout << "Enter speaker name: " << endl ; 
        getline( cin , speaker_[num].name) ; 
        cin.ignore(numeric_limits <streamsize> :: max (), '\n'); 

        cout << "Enter speaker telephone number: " << endl ; 
        speaker_[num].number = checking(  speaker_, num) ; 
        
       

        cout << "Enter speaker speaking topic: " << endl ; 
        getline (cin, speaker_[num].speakingTopic); 
        cin.ignore ( numeric_limits <streamsize> :: max () , '\n') ; 

        cout << "Enter the fee: " << endl ;  
        speaker_[num].fee = checking (speaker_ , num); 
    
        

        break ; 

    case 4 : 
            cout << "================================" << endl ; 
            cout << "Display: " << endl ; 
            cout << "Speaker name: " << speaker_[num].name << endl ; 
            cout << "Speaker telephone number: " << speaker_[num].number << endl ; 
            cout << "Speaker speaking topic: " << speaker_[num].speakingTopic << endl ; 
            cout << "Speaker fee: " << speaker_[num].speakingTopic << endl ; 


    break ; 

    case 5 : 
    cout << "This program has ended. " ; 

    break ; 
    
    }
    






}

void options () 
{
    cout << "1. New speaker." << endl ; 
    cout << "2. Make a change." << endl; 
    cout << "3. Add another speaker." << endl ; 
    cout << "4. Display" << endl ;
    cout <<"5. Quit " << endl ; 
}
int checkingOption ( int input ) 
{ 
    while ( !(cin>> input) || input < 0 || input > 5 ) 
    {  
        cout << "Enter a valid option. " << endl; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max () , '\n'); 
    }
    return input ; 
}

double checking ( Speaker input [], int num )  
{    
    while (!(cin >> input[num].fee) || !(cin >> input[num].number) || input[num].number < 0  || input[num].fee < 0 )
    { 
        cout << "No negative number! " << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits<streamsize> :: max (), '\n') ;
    }
    return input[num].fee || input[num].number ; 
}

void modifyOption () 
 { 
    cout << "1. Change name" << endl;
    cout <<  "2.Change Telephone number" << endl ; 
    cout << "3. Change topic" <<endl ; 
    cout << "4. Change fee" << endl ; 
}
