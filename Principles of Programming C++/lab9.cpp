
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int timeFalling;
    double heightInMeters;
    int timeInSeconds;
    float gravity = 9.8;
    
    
    
    cout<<"Please input the time of fall in seconds:"<<endl;
    cin>>timeInSeconds;
    cout<<"Please input the height of the bridge in meters:"<<endl;
    cin>>heightInMeters;
    
    cout<<"Time Falling (seconds)\t Distance Fallen (meters)"<<endl;
    cout<<"*******************************************"<<endl;
    for (timeFalling = 0; timeFalling <= timeInSeconds; timeFalling++){
        cout<<timeFalling<<"\t\t\t"<<(0.5 * gravity) * pow(timeFalling, 2)<<endl;
    }
    
}
