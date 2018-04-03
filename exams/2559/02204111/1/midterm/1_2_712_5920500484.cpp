#include <iostream>
using namespace std;
int main()
{
    char la,ms;
    double cost,lc,bc,age,tax;
    
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>la;
    
    if (la=='L')
    {   cout<<"Enter living type (Main, Second) : ";
        cin>>ms;
        cout<<"Enter land cost (million) : ";
        cin>>lc;
        cout<<"Enter building cost (million) : ";
        cin>>bc; 
        cout<<"building age : ";
        cin>>age;
        cout<<"Your estate cost is ";
        if (age>=1&&age<=15)
           {cost=(lc+(bc-((bc*1.2*age)/100)));
           cout<<cost<<" ("<<lc<<"+"<<(bc-((bc*1.2*age)/100))<<") million bath."<<endl;}
        else if (age>=16&&age<=40)
           {    cost=lc+(bc-(bc*18/100)-(bc*2.5*(age-15)/100));
                cout<<cost<<" ("<<lc<<"+"<<(bc-(bc*18/100)-(bc*2.5*(age-15)/100))<<") million bath."<<endl;}
        else if (age>=41)
           {    cost=(lc+(bc-(bc*65/100)));
           cout<<cost<<" ("<<lc<<"+"<<(bc-(bc*65/100))<<") million bath."<<endl;}
      if (ms=='M')
      {if (cost<50)
        cout<<"The land tax is exemption.";
       else if (cost>=50&&cost<100)
        cout<<"The land tax is "<<(cost*0.06/100)<<" million bath.";
        else if (cost>=100)
        cout<<"The land tax is "<<(cost*0.12/100)<<" million bath.";
      }
      if (ms=='S')
      {if (cost<5)
        cout<<"The land tax is "<<(cost*0.3/100)<<" million bath.";
       else if (cost>=5&&cost<10)
        cout<<"The land tax is "<<(cost*0.6/100)<<" million bath.";
        else if (cost>=10)
        cout<<"The land tax is "<<(cost*0.9/100)<<" million bath.";
      }
    }
    if (la=='A')
      { cout<<"Enter land cost (million) : ";
        cin>>lc;
        cout<<"Your estate cost is "<<lc<<" million bath."<<endl;
      {if (lc<40)
        cout<<"The land tax is exemption.";
       else if (lc>=40&&cost<80)
        cout<<"The land tax is "<<(lc*0.04/100)<<" million bath.";
       else if (cost>=80)
        cout<<"The land tax is "<<(lc*0.08/100)<<" million bath.";
       }
      }

    
   
    system("pause");
    return 0;
    
}
