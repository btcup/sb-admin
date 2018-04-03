#include<iostream>
#include<cmath>//Pachara Worasilapa 5620501124
using namespace std;
int main()
{
    
   int N,d,i=1;
   cout<<"Enter a positive interger : ";
   cin>>N;
   if(N>0)
    {
           if(N>=1000)
                      d=4;
           else if(N>=100&&N<1000)
                      d=3;
           else if(N>=10&&N<100)
                      d=2;
           else d=1;
           cout<<"Number of digit is "<<d<<endl;
     }
    else cout<<"Invarid number!!"<<endl;
     if(N>0)
     {
            cout<<"Factor of "<<N<<" are : "<<endl;
            for(i=1;i<=N;i++)
            {
                             if(N%i==0)  
                             {
                                         cout<<i<<"*"<<N<<" = "<<N<<endl;
                                         N=N/i;
                                         i=1;
                             }
            }
    }
     system("pause");
    return 0;
}
                    
                 
