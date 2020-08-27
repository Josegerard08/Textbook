#ifndef six 
#define six 

class Inventory 
{ 
    private : 
    int itemNumber ; 
    int quantity ; 
    double cost ; 

    public : 
    Inventory () 
    { itemNumber = 0 ; quantity = 0 ; cost = 0.0 ;  }

    Inventory ( int , int , double ) ; 
    
    void setItemNumber(int )  ; 
    void setQuantity (int)  ; 
    void setCost (double); 
    

    int getItemNumber () 
    { return itemNumber ; }
    int getQuantity () 
    { return quantity ;} 
    double getCost ()
    { return cost ; }



}; 

#endif 