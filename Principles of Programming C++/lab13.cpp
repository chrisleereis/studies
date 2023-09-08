
#include <iostream>
using namespace std;

int main(){
    
    //declare variables
    
    string monthName;
    int a, b, c, d, e, f, g = 0;
    double h, i, j, k, l, m, n = 0;
    
    //begin prompt
    
    cout<<"What month is it?"<<endl;
    cin>>monthName;
    cout<<"What day does the report begin?"<<endl;
    cin>>a;
    cout<<"What was the snowfall for day "<<a<<"?"<<endl;
    cin>>h;
    cout<<"What day is next?"<<endl;
    cin>>b;
    cout<<"What was the snowfall for day "<<b<<"?"<<endl;
    cin>>i;
    cout<<"What day is next?"<<endl;
    cin>>c;
    cout<<"What was the snowfall for day "<<c<<"?"<<endl;
    cin>>j;
    cout<<"What day is next?"<<endl;
    cin>>d;
    cout<<"What was the snowfall for day "<<d<<"?"<<endl;
    cin>>k;
    cout<<"What day is next?"<<endl;
    cin>>e;
    cout<<"What was the snowfall for day "<<e<<"?"<<endl;
    cin>>l;
    cout<<"What day is next?"<<endl;
    cin>>f;
    cout<<"What was the snowfall for day "<<f<<"?"<<endl;
    cin>>m;
    cout<<"What day is next?"<<endl;
    cin>>g;
    cout<<"What was the snowfall for day "<<g<<"?"<<endl;
    cin>>n;
    
    //pass values into arrays
    
    int dates[7] = {a, b, c, d, e, f, g};
    double snowFall[7] = {h, i, j, k, l, m, n};
    
    //beginning of report
    
    cout<<"Snow report for "<<monthName<<" "<<dates[0]<<" - "<<dates[6]<<endl;
    cout<<"Date Snowfall"<<endl<<endl;
    cout<<dates[0]<<"    "<<snowFall[0]<<endl;
    cout<<dates[1]<<"    "<<snowFall[1]<<endl;
    cout<<dates[2]<<"    "<<snowFall[2]<<endl;
    cout<<dates[3]<<"    "<<snowFall[3]<<endl;
    cout<<dates[4]<<"    "<<snowFall[4]<<endl;
    cout<<dates[5]<<"    "<<snowFall[5]<<endl;
    cout<<dates[6]<<"    "<<snowFall[6]<<endl;
    //    Height snow fall is 100.67 on 16th and the average snow fall is 62.90
    
}



