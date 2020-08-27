#ifndef thirteen
#define thirteen
#include <iostream> 
#include <string> 
using namespace std ; 

class Car 
{ 
    private:
        int yearModel ; 
        string make ; 
        int speed; 

    public: 
        
        Car (int , string ); 
        void accessor  (int , int , string ) ; 
        void accelarate ( ) ; 
        void break1 ( ) ; 
        void getYear(int) ; 
        void getMake ( string ); 
        void getSpeed (int );

        int setYear (int ) 
        { return yearModel ; }
        string setMake ( ) 
        { return make ; } 
        int setAccelarate () 
        { return speed; }
        int setBreak ()
        { return speed; }
        int setSpeed ()
        { return speed; }
        
        
        

        

    



}; 

#endif  