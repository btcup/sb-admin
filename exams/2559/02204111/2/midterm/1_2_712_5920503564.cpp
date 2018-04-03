//5920503564 Wichawat Nathabumrung
#include <iostream>
using namespace std;
int main ()
{   
    int N,i,m,z,l;   /*you can put 18,25,66,2,151,451 is correct*/
    N=-1;
    while(N<=0)
    {
     cout<<"Enter N: "; cin>>N;
    }
    l=N;
    for(i=2;i!=l;i++)
    {  if(l%i==0&&i!=l)
       {
        l=(l/i);
       }
       if(i==l)
       {
        break;
       }           
    }
cout<<"The greatest factor of "<<N<<" is "<<l<<endl;
system("pause");
return 0;  
}
