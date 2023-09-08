
#include<iostream>
#include<cstring>
using namespace  std;
int main()
{
    int avg = 0;
    int sumForAverage = 0;
    int highestSale = 0;
    int lowestSale = 0;
    int dailySalesByStore[10] = {20,50,28,57,38,99,57,374,588,1};
    //Lab:
    //    Write program that keeps daily sales of 10 stores in an array and determine
    //    a) Highest sale and the store number (assume that the first store has the store
    //                                          number zero)
    //    b) Lowest sale and the store number
    //    c) Average sale
    for (int low = 0; low < 10; low++)
    {
        if (dailySalesByStore[low] < dailySalesByStore[lowestSale])
            lowestSale = low;
        
    }
    
    for (int high = 0; high < 10; high++)
    {
        if (dailySalesByStore[high] > dailySalesByStore[highestSale])
            highestSale = high;
        
    }
    for (avg=0; avg<10; avg++)
    {
        
        sumForAverage+=dailySalesByStore[avg];
    }
    cout<<"Highest sale: $"<<dailySalesByStore[highestSale]<<" by store #"<<highestSale<<endl;
    cout<<"Lowest sale: $"<<dailySalesByStore[lowestSale]<<" by store #"<<lowestSale<<endl;
    cout<<"Average sale between stores: $"<<(sumForAverage/10)<<endl;
    return 0;
}
