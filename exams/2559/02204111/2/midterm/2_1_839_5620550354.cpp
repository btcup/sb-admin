#include<iostream>
using namespace std;
int main()
{
    char model;
    int year,salary,a,down=25/100,c;
    double t,y;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years(1-6)";
    cin>>year;
    cout<<"Enter your salary:";
    cin>>salary;
    cout<<"-------------------------------------------------------"<<endl;
    if(model=='A'||model=='B'||model=='C'||model=='D')
       if(model=='A')
       {
          a=1385000;
        cout<<"Financing amount:";
        c=a-(a*(25/100.0));
        cout<<(c)<<endl;
        t=2.09/100;
        y=(year*12)*t*year;
        cout<<"Amount of interest:";
        cout<<c*t*year<<endl;
        cout<<"Monthly payment:";
        cout<<((c+(c*t*year))/(year*12))<<endl;
       
        if(((y+c)/year*12)>(salary*0.5))
        {
        cout<<"The monthly payment is over than 50% of your salary!!";
        } 
        else
        {
        cout<<"Good decision, Enjoy your new car";
        }
       }
       if(model=='B')
       {
         a=511500;
        cout<<"Financing amount:";
        c=a-(a*(25/100.0));
        cout<<(c)<<endl;
        t=1.79/100;
        y=(year*12)*t*year;
        cout<<"Amount of interest:";
        cout<<c*t*year<<endl;
        cout<<"Monthly payment:";
        cout<<((c+(c*t*year))/(year*12))<<endl;
       
        if(((y+c)/year*12)>(salary*0.5))
        {
        cout<<"The monthly payment is over than 50% of your salary!!";
        } 
        else
        {
        cout<<"Good decision, Enjoy your new car";
        }
        }
        if(model=='C')
       {
          a=789000;
        cout<<"Financing amount:";
        c=a-(a*(25/100.0));
        cout<<(c)<<endl;
        t=1.99/100;
        y=(year*12)*t*year;
        cout<<"Amount of interest:";
        cout<<c*t*year<<endl;
        cout<<"Monthly payment:";
        cout<<((c+(c*t*year))/(year*12))<<endl;
       
        if(((y+c)/year*12)>(salary*0.5))
        {
        cout<<"The monthly payment is over than 50% of your salary!!";
        } 
        else
        {
        cout<<"Good decision, Enjoy your new car";
        }
       }
        if(model=='J')
       {
          a=694000;
        cout<<"Financing amount:";
        c=a-(a*(25/100.0));
        cout<<(c)<<endl;
        t=1.99/100;
        y=(year*12)*t*year;
        cout<<"Amount of interest:";
        cout<<c*t*year<<endl;
        cout<<"Monthly payment:";
        cout<<((c+(c*t*year))/(year*12))<<endl;
       
        if(((y+c)/year*12)>(salary*0.5))
        {
        cout<<"The monthly payment is over than 50% of your salary!!";
        } 
        else
        {
        cout<<"Good decision, Enjoy your new car";
        }
       }
    system("pause");
    return 0;
}
