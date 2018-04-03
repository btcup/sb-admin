//5620502104 MissMethinee Kunsatha
#include<iostream>
using namespace std;
int main()
{
    char model;
    double salary,year;
    int b,a,c,e;
    //down payment=25;
    cout<<"----------Car lease calculator----------"<<endl;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years (1-6):";
    cin>>year;
    cout<<"Enter your salary:";
    cin>>salary;
    cout<<"----------------------------------------"<<endl;

    if(model=='A'||model=='B'||model=='C'||model=='J')
        if(model=='B'){
        b=511500*25/100;
        cout<<"Financing amount:"<<b<<endl;}
        else if(model=='A'){
        a=1385000*25/100;
        cout<<"Financing amount:"<<a<<endl;}
        else if(model=='C'){
        c=738000*25/100;
        cout<<"Financing amount:"<<c<<endl;}
        else if(model=='J'){
        e=684000*25/100;
        cout<<"Financing amount:"<<e<<endl;}
    if(a=1385000*25/100)
    cout<<"Amount of interest:"<<(b*2.09/100)<<endl;
    else if(b=511500*25/100)
    cout<<"Amount of interest:"<<(b*1.79/100)<<endl;
    else if(c=738000*25/100)
    cout<<"Amount of interest:"<<(b*1.99/100)<<endl;
    else if(e=684000*25/100)
    cout<<"Amount of interest:"<<(b*1.99/100)<<endl;
    
    cout<<"Monthly payment:"<<(salary/2)<<endl;
    
    system("pause");
    return 0;
}
