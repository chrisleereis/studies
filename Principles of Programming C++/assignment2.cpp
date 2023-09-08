
// part 1

//#include <iostream>
//using namespace std;
//int main()
//{
//    float temperature;
//    double velocity;
//    cout<<"What is the temperature in Celsius?"<<endl;
//    cin>>temperature;
//    velocity = (331.3 + 0.61* temperature);
//    cout<<"At "<<temperature<<" degrees Celsius the velocity of sound is "<<velocity<<" m/s."
//
//    return 0;
//}

//  part 3

//  1) This
//  2) i
//  3) s
//  4) my first C++ program.

// part 4

#include<iostream>
#include<string>
using namespace std;


int main()
{
    
    //     a) Name of the instructor
    string instructorsName;
    //     b) Your name
    string myName;
    //     c) A food
    string food;
    //     d) A number between 100 and 120
    int number;
    //     e) An adjective
    string adjective;
    //     f) A color
    string color;
    //     g) An animal
    string animal;
    
    cout<<"What is instructor's name?"<<endl;
    cin>>instructorsName;
    cout<<"What is your name?"<<endl;
    cin>>myName;
    cout<<"What is a food?"<<endl;
    cin>>food;
    cout<<"What is a number between 100 and 120?"<<endl;
    cin>>number;
    cout<<"What is an adjective?"<<endl;
    cin>>adjective;
    cout<<"What is a color?"<<endl;
    cin>>color;
    cout<<"What is an animal?"<<endl;
    cin>>animal;
    
    cout<<"Dear "<<instructorsName<<endl<<"I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "<<food<<" which made me turn "<<color<<" and extremely ill. I come down with a fever of "<<number<<". Next, my "<<adjective<<" pet "<<animal<<" must have smelled the remains of the "<<food<<" on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it here."<<endl<<"Sincerely,"<<endl<<myName<<endl;
    
}

