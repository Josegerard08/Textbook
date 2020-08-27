//A teacher has five students who have taken four tests. The teacher uses the following grading scale to assign a letter grade to a student, 
//based on the average of his or her four test scores.
//Test Score
//90–100 80–89 70–79 60–69 0–59
//Letter Grade
//A B C D F
//Write a program that uses an array of string objects to hold the five student names, an array of five characters to hold the five students’
//letter grades, and five arrays of four doubles to hold each student’s set of test scores.
//The program should allow the user to enter each student’s name and his or her four test scores. It should then calculate and display each student’s 
//average test score and a letter grade based on the average.
//Input Validation: Do not accept test scores less than 0 or greater than 100.



#include <iostream>
#include <string> 

using namespace std ; 

double checking (double [ ], int ) ;  
 const int numberOfStudent = 5, numberOfGrade = 5  , numberOfTestScore = 4 ; 

int main () { 

    int total, total2 , total3 , total4 , total5 ; 
    double average[numberOfStudent];
    

    string studentName [numberOfStudent] ; 
    string letterGrades [numberOfGrade] = {"A" , "B", "C" , "D" , "F" } ; 
    double grade1 [numberOfTestScore] ; 
    double grade2 [ numberOfTestScore] ; 
    double grade3 [numberOfTestScore] ; 
    double grade4 [numberOfTestScore] ; 
    double grade5 [ numberOfTestScore] ;  

        for (int i = 0 ; i < numberOfStudent ; i++) { 
            cout << "Enter your name student " << (i+1) << ":" << endl;    
            getline (cin,studentName [i] ); 
            
        }   
            
        for ( int i = 0 ; i < numberOfTestScore ; i++) { 
            cout << studentName[0] << " Enter your test score for #" << (i+1) << endl ; 
            grade1[i] = checking (grade1 , numberOfTestScore) ;  
            
            
        } 



        for ( int i = 0 ; i < numberOfTestScore ; i++) { 
            cout << studentName[1] << " Enter your test score for #" << (i+1) << endl ; 
            grade2[i] = checking (grade2 , numberOfTestScore) ;  
            
        } 
          for ( int i = 0 ; i < numberOfTestScore ; i++) { 
            cout << studentName[2] << " Enter your test score for #" << (i+1) << endl ; 
            grade3[i] = checking (grade3 , numberOfTestScore) ;  
            
        } 
        for ( int i = 0 ; i < numberOfTestScore ; i++) { 
            cout << studentName[3] << " Enter your test score for #" << (i+1) << endl ; 
            grade4[i] = checking (grade4 , numberOfTestScore) ;  
            
        } 
        for ( int i = 0 ; i < numberOfTestScore ; i++) { 
            cout << studentName[4] << " Enter your test score for #" << (i+1) << endl ; 
            grade5[i] = checking (grade5, numberOfTestScore) ;  
            
        } 


        for ( int i = 0 ; i < numberOfStudent ; i++ ) { 
            total = grade1 [i];
            total2 = grade2 [i];
            total3 = grade3 [i];
            total4 = grade4 [i];
            total5 = grade5 [i];
        }

            average [0] = total/ numberOfTestScore ; 
            average [1] = total2/ numberOfTestScore ; 
            average [2] = total3/ numberOfTestScore ; 
            average [3] = total4/ numberOfTestScore ; 
            average [4] = total5/ numberOfTestScore ; 
      
      for (int i = 0 ; i < numberOfTestScore ; i++){ 
          if( average [i] >90  )
             cout << letterGrades [0] << "For: " << studentName[i]<< endl ; 
          else if  (average[i] < 90 && average[i] > 79) { 
            cout << letterGrades[1] << "For: " << studentName[i] << endl ; 
            }
          else if ( average [i] < 80 && average [i]> 69) {
            cout << letterGrades[2] << "For: " << studentName[i] << endl ;   
          }
            else if ( average[i] < 70 && average[i] > 59  )  { 
                cout << letterGrades[3] << "For: " << studentName[i] << endl ; 
            }
            else if ( average[i] < 60 && average[i] >= 0 )
            cout << letterGrades[4] << "For: " << studentName[i] << endl ; 


      }

        

        


}

double checking ( double input [ ], int max) { 

    while (!(cin>> input[max]) || input[max] < 0 || input[max] > 100) { 
        cout << "Enter a valid input" << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits <streamsize> :: max () , '\n');
    }
return input[max] ; 
}