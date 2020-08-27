
//The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in Figure 7-19.
//The Lo Shu Magic Square has the following properties:
//• The grid contains the numbers 1 through 9 exactly.
//• The sum of each row, each column, and each diagonal all add up to the same
//number. This is shown in Figure 7-20.
//In a program you can simulate a magic square using a two-dimensional array. 
//Write a function that accepts a two-dimensional array as an argument, and 
//determines whether the array is a Lo Shu Magic Square. Test the function in a program.


#include <iostream>
using namespace std ; 


int const row = 3 , colum = 3 ;
void input (int [][colum], int );
int checking (int[][colum], int); 

int main () { 
int num ;
int loShuMagic [row] [colum] ; 
for ( int i = 0 ; i < row ; i++ ) {


        for ( int a = 0 ; a < colum ; a++ ) { 
            cout << "Enter a number and try to create a Lo Shut Magic square:" << endl ; 
            cout << "row: " << (i+1)<< " Colum: " << (a+1) <<  endl;  
            loShuMagic [i][ a] = checking(loShuMagic, row ) ;    
        }

}
input( loShuMagic, row) ; 


}

void input (int  array [] [colum], int row) { 
    int total1, total2, total3 , total4 , total5 , total6 , x1 = 0  , x2 = 1  , x3 = 2 , y1 = 0 , y2 = 1 , y3 = 2 ; 

    for ( int i = 0 ; i < colum ; i ++ )   { 
        total1 += array [x1] [ i] ; 
        total2 += array [x2] [i]; 
        total3 += array [x3] [i] ; 

    }

    for ( int a = 0 ; a < row ; a++) {
        total4 += array [a] [y1] ; 
        total5 += array [a] [y2] ; 
        total6 += array [a] [y3] ; 
        
    }
    
    if ( total1 == total2 && total1 == total3 && total1 == total4 && total1 == total5 && total1 == total6) 
        cout << "Lo Shu Magic Square." << endl ; 
    else  cout << " Not a Lo Shu Magic Square. " << endl  ;




    }
    

    
    






int checking (int num [] [ colum] , int  row) { 

    while ( !(cin >> num[row] [colum]) || num [row] [colum]< 0 ) { 
    cout << "No negative number!" << endl ; 
    cin.clear() ;
    cin.ignore ( numeric_limits <streamsize> ::max(), '\n') ;
    }
return num [row][ colum]   ;
}