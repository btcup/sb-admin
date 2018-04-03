//5920501472Thitirat Jantarapagdee
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n,x=0,i,j=0;
    while (n>=0)
    {  
       cout<<"input value: ";
       cin>>n;
       x=x+1;
       if (n>=10)
       {cout<<"Invalid Input!!"<<endl;} 
          for (;x>=0;x--)
          {
          i=-n*pow(10,x); 
          j=j+i;
          }
    }
cout<<"Your money is "<<(-j)<<endl;
system ("pause");
return 0;
}
       
