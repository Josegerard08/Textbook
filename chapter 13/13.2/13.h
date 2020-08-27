#ifndef First
#define First

#include <string> 
using namespace std ; 


class Employe
{ 
    private:
        int ID ; 
        string name ; 
        string position ;
        string department ; 
    public :
        Employe () { 
            ID = 0 ; 
            position = " " ; 
            department = " " ; 
        }

        Employe (int , string , string , string ) ; 
        void getName (string ) ; 
        void getPosition (string) ; 
        void getDepartment (string ) ; 
        void getID ( int );
        string setName ( ) const{ 
            return name ;
        }
        string setPosition() const  { 
            return position ; 
        }
        string setDepartment () const { 
            return department ; 
        } 
     
        int setID () const  { 
            return ID; 
        }


};




#endif 
