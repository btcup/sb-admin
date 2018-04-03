#include <iostream>
using namespace std;
int main()
{
    char m;//e,a,c,l,m;
    char s;//s,t,g,v;
    char a;
    char b;
    int n,i;
    int t;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    i=1;
    do
    {
        cout<<"Enter your menu (E/A/L/C/M):";
        cin>>m;
        cout<<"Enter size(S/T/G/V):";
        cin>>s;
        cout<<"How many cups?:";
        cin>>n;
        cout<<"Do you want other menu? (Y/N):";
        cin>>a;
        i++;
        }   
    while(a == 'y' || a == 'Y');
       
   
    cout<<"Are you member? (Y/N):";
        cin>>b;
    if(m == 'e' || m == 'E' ) 
         {
                if(s == 's' || s== 'S')
                     t=40;
                if(s == 't' || s== 'T')
                     t=50;
                if(s == 'g' || s== 'G')
                     t=60;
                if(s == 'v' || s== 'V')
                     t=70;
                     
         }
    if(m == 'a' || m == 'A' ) 
         {
                if(s == 's' || s== 'S')
                     t=40;
                if(s == 't' || s== 'T')
                     t=50;
                if(s == 'g' || s== 'G')
                     t=60;
                if(s == 'v' || s== 'V')
                     t=70;
                     
         }
    if(m == 'c' || m == 'C' ) 
         {
                if(s == 's' || s== 'S')
                     t=50;
                if(s == 't' || s== 'T')
                     t=60;
                if(s == 'g' || s== 'G')
                     t=70;
                if(s == 'v' || s== 'V')
                     t=80;
                  
         }
    if(m == 'l' || m == 'L' ) 
         {
                if(s == 's' || s== 'S')
                     t=50;
                if(s == 't' || s== 'T')
                     t=60;
                if(s == 'g' || s== 'G')
                     t=70;
                if(s == 'v' || s== 'V')
                     t=80;
                     
         }
    if(m == 'm' || m == 'M' ) 
         {
                if(s == 's' || s== 'S')
                     t=60;
                if(s == 't' || s== 'T')
                     t=70;
                if(s == 'g' || s== 'G')
                     t=80;
                if(s == 'v' || s== 'V')
                     t=90;
                     
         }
    if(b== 'y' || b == 'Y')
    {
           cout<<"Total"<<t*n<<"Bath"<<endl;
           cout<<"Discount"<<(t*n)*0.1<<"Bath"<<endl;
           cout<<"you pay"<<(t*n)-((t*n)*0.1)<<"Bath"<<endl;
           cout<<"Thank you."<<endl;
    }
    else
    {
           cout<<"Total"<<t*n<<"Bath"<<endl;
           cout<<"Discount 0 Bath"<<endl;
           cout<<"you pay"<<t*n<<"Bath"<<endl;
           cout<<"Thank you."<<endl;
    }
    
    system ("pause");
    return 0;
} 
