#include <iostream>
using namespace std;
int main ()
{
    int  year,   salary,    A=1385000,  B=511500,   C=738000,   J=694000,;
    double              s,              f,             m,          z ;
    char x;
    cout <<"-----------car lease caculator------------"<<endl;
    cout<<"Enter car model: ";
    cin>>x;
              
               
               cout<<"Enter number of year (1-6): ";
               cin>>year;
               cout <<"Enter your salary:";
               cin>>salary;
               cout<<"--------------------------------"<<endl;
               if (x=='A')
               {
                    f=A-(A*25)/100;
                    s=(f*2.09*year)/100;
                    m=(f+s)/(12*year);
                    cout<<"Financing amount:"<<f<<endl;
                    cout<<"Amount of interest :"<<s<<endl;
                    cout<<"Monthly salary:"<<m<<endl;
                                   
               }
               
               if (x=='B')
               {
                    f=B-(B*25)/100;
                    s=(f*1.79*year)/100;
                    m=(f+s)/(12*year);
                    cout<<"Financing amount:"<<f<<endl;
                    cout<<"Amount of interest :"<<s<<endl;
                    cout<<"Monthly salary:"<<m<<endl;
               }    
                if (x=='C')
               {
                    f=C-(C*25)/100;
                    s=(f*1.99*year)/100;
                    m=(f+s)/(12*year);
                    cout<<"Financing amount:"<<f<<endl;
                    cout<<"Amount of interest :"<<s<<endl;
                    cout<<"Monthly salary:"<<m<<endl;
               }
                if (x=='J')
               {
                    f=J-(J*25)/100;
                    s=(f*1.99*year)/100;
                    m=(f+s)/(12*year);
                    cout<<"Financing amount:"<<f<<endl;
                    cout<<"Amount of interest :"<<s<<endl;
                    cout<<"Monthly salary:"<<m<<endl;
               }
               z=0.5*salary;
               if(m>z)
                                   cout<<"The monthy payment is over than 50% of your salary!!"<<endl;
               else
                                   cout<<"Good decide,Enjoy your new car"<<endl;
    system ("pause");
    return 0;
    
}
