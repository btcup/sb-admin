#include<iostream>
using namespace std;
int main()
{
    int f,i;
    char c, a,b,d,e ;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
   
    cout<<"Enter your menu (E/A/L/C/M):";
    cin>>a;
 {
 if(a=='e'||a=='E'||a=='A'||a=='a')
    
    cout<<"Enter size (S/T/G/V):";
    cin>>b;
    
           if((b=='s'||b=='S'||b=='t'||b=='T')==40)
           cout<<"How many cups?:";
           cin>>d;
           
           cout<<"Do you want other menu (Y/N):";    
           cin>>c;
           if(c=='Y'||c=='y')
            cout<<"Enter your menu (E/A/L/C/M):";
            cin>>a;
            
        
           if (c=='N'||c=='n')
           cout<<"Are you a number ? (Y/N)";
           cin>>e;
           cout<<"total:"<<40*d<<"baht"; 
           
}


    system("pause");
    return 0;
}
    
    
