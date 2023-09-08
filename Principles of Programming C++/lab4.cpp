// lab4.cpp
// This program will calculate the amount of
// brownies that can fit into a given size pan.
// Christian Reis

#include <iostream>

using namespace std;

int main()
{
    int lengthOfPan;
    int widthOfPan;
    double areaOfPan;
    int smallBrownieSize = 1;
    int bigBrownieSize = 4;
    int smallBrownieAmount;
    int bigBrownieAmount;
    
    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    
    cout<<"What is the length of the pan?"<<endl;
    cin>>lengthOfPan;
    cout<<"What is the width of the pan?"<<endl;
    cin>>widthOfPan;
    
    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
    
    areaOfPan = lengthOfPan * widthOfPan;
    bigBrownieAmount = areaOfPan / bigBrownieSize;
    smallBrownieAmount = areaOfPan / smallBrownieSize;
    
    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    
    cout<<"The amount of small brownies you can cut from the pan is "<<smallBrownieAmount<<endl;
    cout<<"The amount of big brownies you can cut from the pan is "<<bigBrownieAmount<<endl;
    
    return 0;
}
