#ifndef five 
#define five 

using namespace std ; 
#include <iostream> 
#include <string> 

class RetailItem 
{ 
        private :
            string  description ;
            int unitsOnHand ; 
            double price ; 

        public : 
            RetailItem (); 
            RetailItem (string , int , double ) ; 
            void setDescription (string) ; 
            void setUnits (int );
            void setPrice (double);

            double getPrice () 
            {return price ;}
            int getUnits()
            { return unitsOnHand; }
            string getDescription () 
            {return description; }
}; 
#endif