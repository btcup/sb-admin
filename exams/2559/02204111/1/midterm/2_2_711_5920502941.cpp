#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    char d,e;
    cout<<"Enter objective (Utilization, Waste) : ";
    cin>>d;
    if(d=='W')
    {
            cout<<"land cost (million) : ";
            cin>>a;
            cout<<"land age : ";
            cin>>c;
            if(c>0&&c<=3)
            {
                         cout<<"Your estate cost is "<<a<<" million bath."<<endl;
                         cout<<"The land tax is exemption."<<endl;
            }
            if(c>3&&c<=6)
            {
                         cout<<"Your estate cost is "<<a+(a*1.2/100)<<" ("<<a<<"+"<<a*1.2/100<<") million bath."<<endl;
                         cout<<"The land tax is exemption."<<endl;
            }
            if(c>6)
            {
                         cout<<"Your estate cost is "<<a+(a*2.4/100)<<" ("<<a<<"+"<<a*2.4/100<<") million bath."<<endl;
                         cout<<"The land tax is exemption."<<endl;
            }
              
    }
    if(d=='U')
    {
              cout<<"Enter utilization type (Business, Agriculture) : ";
              cin>>e;
              if(e=='B')
              {
                      cout<<"Enter land cost (million) : ";
                      cin>>a;
                      cout<<"Enter building cost (million) : ";
                      cin>>b;
                      cout<<"Building age : ";
                      cin>>c;
                      if(b<20&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.3)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.3)/100<<") million bath."<<endl;            
                      }
                       if(b>20&&b<50&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.5)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.5)/100<<") million bath."<<endl;                 
                      }
                       if(b>=50&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.7)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.7)/100<<") million bath."<<endl;
                      }
                      if(b<20&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.3)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.3)/100<<") million bath."<<endl;            
                      }
                      if(b>20&&b<50&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.5)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.5)/100<<") million bath."<<endl;            
                      }
                      if(b>=50&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.7)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.7)/100<<") million bath."<<endl;            
                      }        
                          
                        
              }
              if(e=='A')
              {
                      cout<<"Enter land cost (million) : ";
                      cin>>a;
                      cout<<"Enter building cost (million) : ";
                      cin>>b;
                      cout<<"Building age : ";
                      cin>>c;
                      if(b<20&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.3)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.3)/100<<") million bath."<<endl;            
                      }
                       if(b>20&&b<50&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.5)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.5)/100<<") million bath."<<endl;                 
                      }
                       if(b>=50&&c>0&&c<=10)
                      {
                                          cout<<"Your estate cost is "<<a+(a*((c*1.5)+0.7)/100)<<" ("<<a<<"+"<<a*((c*1.5)+0.7)/100<<") million bath."<<endl;
                      }
                      if(b<20&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.3)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.3)/100<<") million bath."<<endl;            
                      }
                      if(b>20&&b<50&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.5)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.5)/100<<") million bath."<<endl;            
                      }
                      if(b>=50&&c>0&&c>10&&c<=40)
                      {
                                          cout<<"Your estate cost is "<<a+(a*(((1.8*(c-10))+15)+0.7)/100)<<" ("<<a<<"+"<<a*(((1.8*(c-10))+15)+0.7)/100<<") million bath."<<endl;            
                      }              
              }
    }
    system ("pause");
    return 0;   
}
