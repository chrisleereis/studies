
#include <iostream>
using namespace std;
// ***declare the function prototype for "calcFinalScore" here
double calcFinalScore(double);
// ***declare the function prototype for "printFinalScore" here
void printFinalScore(double);

int main()
{
    // local variables
    double finalGrade;
    double test1, test2; // the two tests scores
    double hw; // the homework score
    double finalScore; // the student's final score
    cout << "Enter the score for test #1: ";
    cin >> test1;
    cout << "Enter the score for test #2: ";
    cin >> test2;
    cout << "Enter the score for the homework: ";
    cin >> hw;
    finalScore=test1+test2+hw;
    // ***call calcFinalScore here
    finalGrade=calcFinalScore(finalScore);
    // ***call printFinalScore here
    printFinalScore(finalGrade);
    system("PAUSE");
    return 0;
}
// ***implement calcFinalScore here
double calcFinalScore(double a){
    double calcFinalScore;
    calcFinalScore=a/3;
    return calcFinalScore;
}
// ***implement printFinalScore here
void printFinalScore(double a){
    string letterGrade;
    if (a>=90){
        letterGrade="A";
    }
    else if (a>=80&&a<89){
        letterGrade="B";
    }
    else if (a>=70&&a<80){
        letterGrade="C";
    }
    else if (a>=60&&a<70){
        letterGrade="D";
    }
    else {
        letterGrade="F";
    }
    
    
    cout<<"The final score is "<<a<<" and your letter grade is "<<letterGrade<<endl;
    
}



