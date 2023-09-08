// 1) 10    20
// 2) 20    10
// 3)
// This program swaps the values of two integers, i and n

#include <iostream>
using namespace std;

void grade(string a, string b);
string correctAnswers [10] {"B","D","A","A","C","A","B","A","C","D"};
string studentAnswers [10];

int main (){
    int testQuestion = 0;
    while (testQuestion < 10){
        cout<<"What is your answer for question #"<<(testQuestion+1)<<"?"<<endl;
        cin>>studentAnswers[testQuestion];
        testQuestion++;
        
    }
    grade(*studentAnswers, *correctAnswers);
    
    
}

void grade(string a, string b){
    string finalTestPassed;
    int n = 0;
    int numberAnswersCorrect = 0;
    while (n<10){
        if (correctAnswers[n]==studentAnswers[n]){
            n++;
            numberAnswersCorrect++;
        }
        else {
            n++;
        }
    }
    
    if (numberAnswersCorrect>=8){
        finalTestPassed = "You Passed!";
    }
    else {
        finalTestPassed = "You did not pass; try again.";
    }
    cout<<"Results of the test; did you pass? "<<endl<<finalTestPassed<<endl;
    cout<<"Number of correct answers: "<<numberAnswersCorrect<<endl;
}

//a) What    is    the    output    of    the    cout    statement    1    above?
//b) What    is    the    output    of    the    cout    statement    2    above?
//c) Briefly    explain    your    answer    to    questions    (a)    and    (b)    ?
