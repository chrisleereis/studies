
#include <iostream>
using namespace std;
int main(){
    int numTimes;// *** Step 2: Create an int called numTimes
    cout << "How many times should I print?"<<endl;
    cin >> numTimes; // *** Step 2: Get rid of this, prompt the user for numTimes instead
    int count = 1;
    // *** Step 2: Change this to check if count is <= numTimes
    while(count <= numTimes)
    {
        cout << count;// *** Step 2: Change this line to output count before the phrase
        cout << " I love Computer Science!!"<<endl;
        ++count;// *** Step 1: Increment count (hint: use the ++ operator)
    }
    cout << "Printed this message "<<numTimes<<" times."<<endl;// *** Step 2: Output the "Printed this message..." line
    
}
