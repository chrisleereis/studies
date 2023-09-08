// Part I
//
// Question 1)
//      This code outputs nothing; There is an error which makes the while loop body empty.
//      This can be fixed by removing the ";" from line 3 of the code
//      which will yield an output of 56789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100101102103104Program ended with exit code: 0
//
// Question 2)
//      The output is
//      !lwt d,duyrv aProgram ended with exit code: 0
//      The program takes the length of myString and then only prints out every second letter in reverse.

// Part II


#include<iostream>
#include<cstring>
using namespace  std;
int main()
{
    
    
    //    // variables declaration
    int cityOnePopulation;
    int cityTwoPopulation;
    int cityThreePopulation;
    int cityFourPopulation;
    int stars;
    int starsOne;
    int starsTwo;
    int starsThree;
    int starsFour;
    
    
    cout<<"Enter the population of city 1:"<<endl;
    cin>>cityOnePopulation;
    cout<<"Enter the population of city 2:"<<endl;
    cin>>cityTwoPopulation;
    cout<<"Enter the population of city 3:"<<endl;
    cin>>cityThreePopulation;
    cout<<"Enter the population of city 4:"<<endl;
    cin>>cityFourPopulation;
    
    starsOne = cityOnePopulation/1000;
    starsTwo = cityTwoPopulation/1000;
    starsThree = cityThreePopulation/1000;
    starsFour = cityFourPopulation/1000;
    
    cout<<"POPULATION"<<endl;
    cout<<"each * = 1000 people"<<endl;
    
    cout<<"City 1 :";
    for (stars = 0; stars < starsOne; stars++)
        cout<<'*';
    cout<<endl<<"City 2:";
    for (stars = 0; stars < starsTwo; stars++)
        cout << '*';
    cout<<endl<<"City 3: ";
    for (stars = 0; stars < starsThree; stars++)
        cout<<'*';
    cout<<endl<<"City 4: ";
    for (stars = 0; stars < starsFour; stars++)
        cout<<'*';
    cout<<endl;
    
    return 0;
}
