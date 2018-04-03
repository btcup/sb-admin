#include <iostream>
using namespace std;
int main()
{
    char model;
    int year,percent;
    double finance,amount,monthly,x;
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    cout<<"Enter number of years (1-6): ";
    cin>>year;
    if (year>0&&year<=6)
    { if(year>=4)
      {
      cout<<"Enter percentage of down payment: ";
      cin>>percent;
      cout<<"--------------------------------"<<endl;
      if (model=='A')
      {finance=1385000-(1385000*percent/100);
       amount=finance*(2.09/100)*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='B')
      {finance=511500-(511500*percent/100);
       amount=finance*(1.79/100)*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='C')
      {finance=738000-(738000*percent/100);
       amount=finance*(1.99/100)*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='J')
      {finance=694000-(694000*percent/100);
       amount=finance*(1.99/100)*year;
       monthly=(finance+amount)/(year*12);
      }
      }
      else
      {
      cout<<"Enter percentage of down payment: ";
      cin>>percent;
      cout<<"--------------------------------"<<endl;
      if (model=='A')
      {finance=1385000-(1385000*percent/100);
       amount=finance*((2.09/100)-(0.1/100))*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='B')
      {finance=511500-(511500*percent/100);
       amount=finance*((1.79/100)-(0.1/100))*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='C')
      {finance=738000-(738000*percent/100);
       amount=finance*((1.99/100)-(0.1/100))*year;
       monthly=(finance+amount)/(year*12);
      }
      else if(model=='J')
      {finance=694000-(694000*percent/100);
       amount=finance*((1.99/100)-(0.1/100))*year;
       monthly=(finance+amount)/(year*12);
      }
      }
    
    cout<<"Financing amount: "<<finance<<endl;
    cout<<"Amount of interest: "<<amount<<endl;
    cout<<"Monthly payment: "<<monthly<<endl;
    }
    else
    cout<<"Error!,number of years is not in range"<<endl;
     system ("pause");
   return 0;
}

