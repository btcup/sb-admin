//5920503700 Thanisa Pleehajinda
#include<iostream>
using namespace std;
int main()
{
    char m,n;
    float l,b,a;
    cout<<"Enter object (Utilization/ Waste): ";
    cin>>m;
    cout<<"Enter utilization type (Business/ Agriculture): ";
    cin>>n;
    cout<<"Enter land cost (million): ";
    cin>>l;
    cout<<"Enter building cost (million): ";
    cin>>b;
    cout<<"Building age: ";
    cin>>a;
    if('m'=='U')
    {
              if('n'=='B')
              {
                          
                          
                          
                        {if(l<20)
                         cout<<"The land tax is"<<l+b*0.3  <<"million bath"<<endl;
                        else if(l>=20&&l<50)
                        cout<<"The land tax is"<< l+b*0.5 <<"million bath"<<endl;
                        else if(l>=50)
                         cout<<"The land tax is"<< l+b*0.7 <<"million bath"<<endl;
                        }
                        {if(a>=1&&a<=10)
                        cout<<"Your estate codt is"<<a*1.5 <<"million bath"<<endl;
                        else if(a>=11&&a<=40)
                         cout<<"Your estate codt is"<<a*1.5 <<"million bath"<<endl;
                         else if(a>40)
                         cout<<"Your estate codt is"<<70.8 <<"million bath"<<endl; 
                         }} }
              else if('n'=='A')
              {
                         {if(l<30)
                         cout<<"The land tax is exemption"<<endl;
                        else if(l>=30&&l<60)
                        cout<<"The land tax is"<< l+b*0.06 <<"million bath"<<endl;
                        else if(l>=60)
                         cout<<"The land tax is"<< l+b*0.12 <<"million bath"<<endl;
                        }
                        {if(a>=1&&a<=10)
                        cout<<"Your estate codt is"<<a*1.5 <<"million bath"<<endl;
                        else if(a>=11&&a<=40)
                        cout<<"Your estate codt is"<<a*1.5 <<"million bath"<<endl;
                        else if(a>40)
                        cout<<"Your estate codt is"<<70.8 <<"million bath"<<endl; 
                         
                        }
                        }

      
         system("pause");
         return 0;
         }

