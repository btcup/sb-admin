//5920503025 Maihom vilas
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,max,min;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;      
           
           if (b>a)
            {max=b;
             min=a;}
           else if (b<a)
           {max=a;
           min=b; }
           
    cout<<"Enter 3rd number : ";
    cin>>c; 
            if(c>max)
            {max=c;}
            else if(c<min)
            {min=c;}
    cout<<"Enter 4th number : ";
    cin>>d;
           if(d>max)
            {max=d;}
           else if(d<min)
            {min=d;}
            
    if (min==a) {cout<<"1st number is Minimum"<<endl;}
    else if(min==b) {cout<<"2nd number is Minimum"<<endl;}
    else if(min==c) {cout<<"3rd number is Minimum"<<endl;}
    else if(min==d) {cout<<"4th number is Minimum"<<endl;}
    
    if (max==a) {cout<<"1st number is Maximum"<<endl;}
    else if(max==b) {cout<<"2nd number is Maximum"<<endl;}
    else if(max==c) {cout<<"3nd number is Maximum"<<endl;}
    else if(max==d) {cout<<"4th number is Maximum"<<endl;}
    
    cout<<"The difference beyween Min. and Max. is "<<abs(min-max)<<endl;
    
    
   
   system("pause");
   return 0;
}
    

    
