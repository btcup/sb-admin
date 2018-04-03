#include<iostream> //5920504382 Chatchawat Chatwongphun 
#include<cmath>
using namespace std;
int main()
{
    char x;
    float sum,i,a,b,c;
    sum=0;
    cout<<"Enter objective (Living,Agriculture) : ";
    cin>>x;
           if(x=='L')
           {  cout<<"Enter living type (Main, Second) : ";
              cin>>x;
              if(x=='M')
               {         cout<<"Enter land cost (million) : ";
                         cin>>i;
                         cout<<"Enter buliding cost (million) : ";
                         cin>>a;
                         cout<<"building age : ";
                         cin>>b;
                   if(i<50){}
                   else if(i>=50&&i<100)
                   {sum=sum+1;
                        }
                   else if(i>=100)
                   {}
                 cout<<"Your estate cost is""("<<i<<"+"") million bath"<<endl;
                 cout<<"The land tax is ""million bath"<<endl;
               }
              else if(x=='S')
              {          cout<<"Enter land cost (million) : ";
                         cin>>i;
                         cout<<"Enter buliding cost (million) : ";
                         cin>>a;
                         cout<<"building age : ";
                         cin>>b;
                    if(i<5){}
                   else if(i>=5&&i<10)
                   {sum=sum+(i*0.6)-a;}
                   else if(i>=10)
                   {}
                  cout<<"Your estate cost is""("<<i<<"+"<<sum<<") million bath"<<endl;
                  cout<<"The land tax is ""million bath"<<endl;
              }
           }
           if(x=='A')         
              {           cout<<"Enter land cost (million) : ";
                          cin>>i;
                          if(i<40)
                          { cout<<"Your estate cost is 30 million bath"<<endl;
                            cout<<"The land tax is exemption"<<endl;             }
                          if(i>=40&&i<80)
                          {}
                          if(i>=80)
                          {} 
              }             
           
    








system("pause");
return 0;
}
