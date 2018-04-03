#include <iostream>
using namespace std;
int main()
{
    int l,c,a;
    char objective,type;
    cout<<"Enter objective (Living, Agriculture) :";
    cin>>objective;
    cout<<"Enter living type (Main, Second) :";
    cin>>type;
    cout<<"Enter land cost (million) : ";
    cin>>l;
    cout<<"Enter building cost (million) :";
    cin>>c;
    cout<<"Building age :";
    cin>>a;
    if(objective=='L')
    {
                      if(type=='M')
                      {
                                   if(l<50)
                                   {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                                   cout<<"Enter building cost (million) :"<<c<<endl;
                                   cout<<"Enter building cost (million) :"<<c<<endl;
                                   cout<<"Building age :"<<a<<endl;
                                   }
                                   if(l>=100)
                                   {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                                   cout<<"Enter building cost (million) :"<<c<<endl;
                                   cout<<"Building age :"<<a<<endl;
                                   
                                   }
                      }
                      if(type=='S')
                      {
                                   if(l<5)
                                   {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                                   cout<<"Enter building cost (million) :"<<c<<endl;
                                   cout<<"Building age :"<<a<<endl;
                                   }
                                   if(l>10)
                                   {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                                   cout<<"Enter building cost (million) :"<<c<<endl;
                                   cout<<"Building age :"<<a<<endl; 
                                   }
                      }     
    }
    if(objective=='A')
    {
                      if(l<40)
                      {
                                   cout<<"Enter land cost (million) :"<<l<<endl;       
                      }
                      if(40<=l<80)
                      {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                      }
                      if(l>80)
                      {
                                   cout<<"Enter land cost (million) :"<<l<<endl;
                      }
    }
    
    system ("pause");
    return 0;
}
