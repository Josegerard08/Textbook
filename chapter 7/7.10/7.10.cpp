/*The local Driver’s License Office has asked you to write a program that grades the written portion of the driver’s license exam.
The exam has 20 multiple choice questions. Here are the correct answers:
1. A 6. B 2.D 7.A 3. B 8. B 4.B 9.C 5.C 10.D
11. A 12. C 13. D 14. B 15. D
16. C 17. C 18. A 19. D 20. B
Your program should store the correct answers shown above in an array.
It should ask the user to enter the student’s answers for each of the 20 questions,
and the answers should be stored in another array. After the student’s answers have been entered,
the program should display a message indicating whether the student passed or failed the exam. 
(A student must correctly answer 15 of the 20 questions to pass the exam.)
It should then display the total number of correctly answered questions, the total number 
of incorrectly answered questions, and a list showing the question numbers of the incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers. */


#include <iostream> 
#include<string>
using namespace std ; 

string checking (string  [], int) ; 

 

int main() { 
    int points = 1 , totalCorrect, WrongAnswers;
 const int  numberOfAnswer = 20 ; 
string studentAnswer[numberOfAnswer] ; 
string rightAnswer [numberOfAnswer] = {  "A", "B" ,  "D" , "A" , "B" ,  "B" , "B" , "C" ,"C" ,"D", "A", "C","D", "B" ,"D", "C", "C",  "A" , "D" , "B" } ;

    for ( int i = 0 ; i < numberOfAnswer ; i++ ) { 
        cout << "Enter answer #" << (i+1) << " of student:" << endl ; 
        studentAnswer[i] = checking ( studentAnswer, numberOfAnswer ) ; 

    }
    for ( int i = 0; i < numberOfAnswer ; i++ ) { 

        if ( studentAnswer [i] == rightAnswer [i]) 
        totalCorrect += points ;

            }
            WrongAnswers = 20 - totalCorrect ; 

            if ( totalCorrect > 15 ) { 
            cout << "You pass!" << endl ;
            cout << "Correct # of answers: " << totalCorrect << endl ;   }
                 else {
                cout << "You fail." << endl ; 
                cout << "Wrong # of answers " << WrongAnswers << endl ; 
                    }

  return 0 ;
}

string checking ( string studentAnswer [], int numberOfAnswer1) { 

    while ( !(cin>> studentAnswer [numberOfAnswer1]) || studentAnswer [numberOfAnswer1] !="A"&& studentAnswer [numberOfAnswer1] != "B"&& studentAnswer[numberOfAnswer1] != "C"&&
     studentAnswer [numberOfAnswer1] != "D") { 
        cout << "Enter a valid answer!" << endl ; 
        cin.clear () ;
        cin.ignore (numeric_limits <streamsize>:: max() , '\n' )  ;
 }
    return studentAnswer [numberOfAnswer1] ; 

}