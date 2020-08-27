#ifndef thirteen
#define thirteen 

#include <iostream> 
#include <string> 
using namespace std ;
class Personal 
{ 
    private:
        string name ; 
        string address ; 
        int age ;
        int phoneNumber ;

    public: 

    Personal () 
    { name = "0"; address = "0"; age = 0 ; 
    phoneNumber  = 0 ; }
    Personal ( string , string , int , int );
    void getName ( string) ; 
    void getAddress ( string) ; 
    void getAge ( int ) ; 
    void getPhoneNumber(int); 


    int setAge() 
    {return age; }
    int setPhone ()
    { return phoneNumber;}
    string setName ()
    { return name ;} 
    string setAddress ( ) 
    { return address ; }
};
#endif 