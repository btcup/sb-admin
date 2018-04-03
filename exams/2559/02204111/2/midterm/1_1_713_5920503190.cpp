//5920503190 Phasit Nakthong
#include<iostream>
using namespace std;
int main()
{
    char model;
    float payment,P,I,D,F,A,M,year;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    if(model=='A')
    {
                  P=1385000.00;
                  cout<<"Enter number of years (1-6):";
                  cin>>year;
                  if(year>=1&&year<4)
                  {
                   I=0.0199;
                   cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else if(year>=4&&year<=6)
                  {
                       I=0.0209;
                       cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=F*I*year;
                   M=(F+A)/(year*12);
                   cout<<"---------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else
                  {
                      cout<<"Error!,number of years is not in range"<<endl;
                  }
    }
    else if(model=='B')
    {
         P=511500;
         cout<<"Enter number of years (1-6):";
                  cin>>year;
                  if(year>=1&&year<4)
                  {
                   I=0.0169;
                   cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else if(year>=4&&year<=6)
                  {
                       I=0.0179;
                      cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else
                  {
                      cout<<"Error!,number of years is not in range"<<endl;
                  }
    }
    else if(model=='C')
    {
         P=738000;
         cout<<"Enter number of years (1-6):";
                  cin>>year;
                  if(year>=1&&year<4)
                  {
                   I=0.0189;
                   cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else if(year>=4&&year<=6)
                  {
                       I=0.0199;
                      cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else
                  {
                      cout<<"Error!,number of years is not in range"<<endl;
                  }
    }
    else if(model=='J')
    {
         P=694000;
         cout<<"Enter number of years (1-6):";
                  cin>>year;
                  if(year>=1&&year<4)
                  {
                   I=0.0189;
                   cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else if(year>=4&&year<=6)
                  {
                       I=0.0199;
                   cout<<"Enter percentage of down payment:";
                   cin>>payment;
                   D=payment/100;
                   F=P-(P*D);
                   A=(F*I)*year;
                   M=(F+A)/(year*12);
                   cout<<"----------------------------------------"<<endl;
                   cout<<"Financing amount:"<<F<<endl;
                   cout<<"Amount of interest:"<<A<<endl;
                   cout<<"Monthly payment:"<<M<<endl;
                  }
                  else
                  {
                      cout<<"Error!,number of years is not in range"<<endl;
                  }
    }
    else
    {
        cout<<"Error !"<<endl;
    }
    system ("pause");
    return 0;
}
    
