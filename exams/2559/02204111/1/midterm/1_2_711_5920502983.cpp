#include <iostream>
using namespace std;
int main()
{
    char a,b;
    float x,y,z;
    cout<<"Enter objective (Living, Agriculture):";
    cin>>a;
    {
           if (a=='L')
           cout<<" Enter living type (Main,Second):";
           cin>>b;
           {
                  if (b=='M')
                  cout<<"Enter land cost (million) :";
                  cin>>x;
                  {
                        cout<<"Enter building cost (million) :";
                        cin>>y; 
                        if(x<50)
                        y=y;
                        else if(x>=50&&x<100)
                        y=(y*0.06)/100;
                        else 
                        y=(y*0.12)/100;
                  }         
                  {
                               cout<<"Building age :";
                               cin>>z;
                               if (z>=1&&z<=15)
                               y=(y*1.2)/100;
                               else if (z>=16&&z<=40)
                               y=(y*2.5)/100;
                               else
                               y=(y*65)/100;
                  }
                  cout<<" Your estate cost is "<<x+y<<"million bath"<<endl;
                  cout<<"the tax is "<<y-z<<"million bath"<<endl;
           }
           {
                  if (b=='S')
                  cout<<"Enter land cost (million) :";
                  cin>>x;
                  {
                        cout<<"Enter building cost (million) :";
                        cin>>y; 
                        if(x<5)
                        y=(y*0.3)/100;
                        else if(x>=5&&x<10)
                        y=(y*0.6)/100;
                        else 
                        y=(y*0.9)/100;
                  }         
                  {
                               cout<<"Building age :";
                               cin>>z;
                               if (z>=1&&z<=15)
                               y=(y*1.2)/100;
                               else if (z>=16&&z<=40)
                               y=(y*2.5)/100;
                               else
                               y=(y*65)/100;
                  }
                  cout<<" Your estate cost is "<<x+y<<"million bath"<<endl;
                  cout<<"the tax is "<<y-z<<"million bath"<<endl;
           }
           {
           if (a=='A')
           cout<<" Enter living type (Main,Second):";
           cin>>b;
           {
                  cout<<"Enter land cost (million) :";
                  cin>>x;
                  {
                        cout<<"Enter building cost (million) :";
                        cin>>y; 
                        if(x<40)
                        y=y;
                        else if(x>=40&&x<80)
                        y=(y*0.04)/100;
                        else 
                        y=(y*0.08)/100;
                  }         
                  
                  cout<<" Your estate cost is "<<x+y<<"million bath"<<endl;
                  cout<<"the tax is "<<y-z<<"million bath"<<endl;
           }
           }
           system ("pause");
           return 0;
           }
}
           
           
                  
                  
                               
                        
                        
                        
                        
