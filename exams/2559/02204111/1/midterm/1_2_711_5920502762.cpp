#include<iostream>
using namespace std;
int main ()
{
    char a,b;
    float x,y,z,sum=0,T=0,R;
    cout<<"Enter objective (Liveing,Agricuture):";
    cin>>a;
    if(a=='L')
    {
        cout<<"Enter living type (Main,Second):";
        cin>>b;
        if(b=='M')
        {
         cout<<"Enter land cost (million) :";
         cin>>x;
            if(x<50)
            {
            cout<<"Enter building cost (million) :";
            cin>>y;
            T=x-(x*0);
            cout<<"Building age :";
            cin>>z;
            if(z>=1 && z<=15)
            {
              R=(z-z*100/(1.2*z));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
            } 
            else if(z>=16 && z<=40)
            { 
              R=(z-z*100/(2.5*z));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
            }
            } 
            else if(x>=50 || x<100)
            {
            cout<<"Enter building cost (million) :";
            cin>>y;
            T=x-(x*0.06);
            if(z>=1 && z<=15)
            {
              R=(z-z*(1.2*z/100.0));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
            } 
            else if(z>=16 && z<=40)
            { 
              R=(z-z*(2.5*z/100.0));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
            }
            } 
            else if(x>=100)
            {
            cout<<"Enter building cost (million) :";
            cin>>y;
            T=x-(x*0.12);
                   if(z>=1 && z<=15)
            {
              R=(z-z*(1.2*z/100.0));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
              }
            else if(z>=16 && z<=40)
            { 
              R=(z-z*(2.5*z/100.0));
              sum=T+R;
              cout<<"Your estate cost is" <<sum<<"("<<T<<"+"<<R<<endl; 
            }
            
            } 
         } 
    }  
    
       
    else if(a=='A')
    {
        cout<<"Enter land cost (million) :";
        cin>>x;
            if(x<40)
            {
            sum=sum+x;
            } 
            else if(x>=40 || x<80)
            {
            cout<<"Enter building cost (million) :";
            cin>>y;
            } 
            else if(x>=80)
            {
            cout<<"Enter building cost (million) :";
            cin>>y;
             }  
    }
system("pause");
return 0;
}
