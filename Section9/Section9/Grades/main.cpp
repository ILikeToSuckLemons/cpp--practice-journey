// Section 9
// Grades

/*
    Calculate a sudent's grade on an exam given their score
    and tell them if they passed the course
    
*/

// #include <iostream>

// using namespace std;

// int main() {
    
//     int score {};
//     cout << "Enter your score on the exam (0-100) : ";
//     cin >> score;
//     char letter_grade {};
    
//     if (score >= 0 && score <=100) {
//         if (score >= 90)
//             letter_grade = 'A';
//         else if (score >= 80)
//             letter_grade = 'B';
//         else if (score >= 70)
//             letter_grade = 'C';
//         else if (score >=60)
//             letter_grade = 'D';
//         else 
//             letter_grade = 'F';
            
//         cout << "Your grade is : " << letter_grade << endl;
//         if (letter_grade == 'F')
//             cout << "Sorry, you must repeat the class" << endl;
//         else 
//             cout << "Congrats!" << endl;

//     } else {
//         cout << "Sorry, " << score << " is not in range" << endl;
//     }
    
    
//     cout  << endl;
//     return 0;
// }

#include <iostream>

using namespace std;

int main(){

int score {};
char lettergrade {};

cout << "What was your Score 0-100";
cin >> score;


if (score >= 0 && score <= 100){
    if(score >= 95)
        lettergrade = 'A';
    else if(score >= 85)
        lettergrade = 'B';
    else if(score >= 75)
        lettergrade = 'C';
    else if(score >= 60)
        lettergrade = 'D';
    else
        lettergrade = 'F';
    cout << "Your grade is " << lettergrade << endl;
    
    if (lettergrade =='F'){
        cout << "You fail";
    }else{
        cout << "You Passed";
    }

} else {
    cout << "Out of range";
}



return 0;

}