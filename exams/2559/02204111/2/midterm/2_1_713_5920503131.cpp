//5920503131 thirasak  sayon
#include<iostream>
using namespace std;
int main()
{
    const int x=25;
    int year,salary;
    float n,d,y;
    char model;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model : ";
    cin>>model;
    cout<<"Enter number of years (1-6) : ";
    cin>>year;
    cout<<"Enter your salary : ";
    cin>>salary;
    cout<<"----------------------------------------"<<endl;
    switch(model)
    {
                 case 'A':n=1385000-1385000*x/100;d=2.09;break;
                 case 'B':n=511500-511500*x/100;d=1.79;break;
                 case 'C':n=738000-738000*x/100;d=1.99;break;
                 case 'J':n=694000-694000*x/100;d=1.99;break;
                 default:break;
    }
    cout<<"Finoncing amount : "<<n<<endl;
    cout<<"Amounnt ot interest : "<<n*d*year/100<<endl;
    cout<<"Monthly payment : "<<(n+n*d*year/100)/(12*year)<<endl;
    y=(n+n*d*year/100)/(12*year);
    if(y>salary/2)
    cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    else
    cout<<"Good decision, Enjoy your new car"<<endl;
    
         
system("pause");
return 0;
}
