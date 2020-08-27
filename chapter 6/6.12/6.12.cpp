//A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. 
//Fractional scores, such as 8.3, are allowed. A performer’s final score is determined by dropping the highest and
//lowest score received, then averaging the three remaining scores. Write a program that uses this method to calculate a
//contestant’s score. It should include the following functions:
//• void getJudgeData() should ask the user for a judge’s score, store it in a reference parameter variable, and validate it.
//This function should be called by main once for each of the five judges.
//• void calcScore() should calculate and display the average of the three scores that remain after dropping the highest 
//and lowest scores the performer received. This function should be called just once by main and should be passed the five scores.
//The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of
//the scores to drop.
//• int findLowest() should find and return the lowest of the five scores passed to it.
//• int findHighest() should find and return the highest of the five scores passed to it.
//Input Validation: Do not accept judge scores lower than 0 or higher than 10.


#include <iostream> 
using namespace std ; 

void getJudgeData (int & ) ; 
void calcScore (int & , int & , int & , int & , int & ) ; 
int findLowest (int , int , int , int , int) ; 
int findHighest ( int , int , int , int , int) ;  


int main ( ) { 

    int score1, score2 , score3 , score4 , score5 ; 

    getJudgeData( score1); 
    getJudgeData ( score2); 
    getJudgeData (score3) ; 
    getJudgeData ( score4); 
    getJudgeData ( score5); 
    
    calcScore ( score1 , score2 ,score3 , score4 , score5 ) ; 


}


void getJudgeData ( int & scores) { 
     
    cout << " Enter score:" << endl ; 

        while ( !( cin >> scores) || scores < 0  || scores > 10 ) { 
        cout << "No negative number and no number greater than 10!" << endl ; 
        cin.clear () ; 
        cin.ignore (numeric_limits<streamsize> :: max () , '\n') ; 

        }

} 
int findLowest (int score1 , int score2  , int score3 , int score4 , int score5)  { 


    if ( score1 < score2 && score1 < score3 && score1 < score4 && score1 << score5) { 

    return score1 ; 
    }
    if ( score2< score1 && score2 < score3 && score2 < score4 && score2 << score5) { 

    return score2 ; 
    }
    if ( score3 < score2 && score3 < score2 && score3 < score4 && score3 << score5) { 

    return score3 ; 
    }
    if ( score4 < score2 && score4 < score3 && score4 < score1 && score4 << score5) { 

        return score4; 
    }
        else
        return score5 ; 


}
int findHighest ( int score1 , int score2  , int score3  , int  score4, int score5)  { 


    if ( score1 > score2 && score1 < score3  && score1 > score4 && score1 > score5 ){ 

        return score1  ; 
    }
     if ( score2 > score1 && score2 < score3  && score2 > score4 && score2 > score5 ){ 

        return score2  ; 
    }
     if ( score3 > score2 && score3 < score1  && score3 > score4 && score3 > score5 ){ 

        return score3  ; 
    }
     if ( score4 > score2 && score4 > score3  && score4 > score1 && score4 > score5 ){ 

        return score4  ; 
    } else 
    return score5 ; 




}

void calcScore ( int & score1 , int &score2 , int &score3 , int & score4 , int & score5  )  { 

            int lowest ,
            highest , add , average; 
   lowest =  findLowest ( score1 , score2 , score3 , score4 , score5) ; 
    highest = findHighest (score1 , score2 , score3, score4 , score5)  ; 

        cout << "lowest out of the five is:" << lowest << endl ; 
        cout << "Highest out of the five is: " << highest <<endl ; 


       add = score1 + score2 + score3 + score4 + score5 - lowest - highest ; 
       average = add / 3 ; 

       cout << "Final score: " << average << endl ; 



}

