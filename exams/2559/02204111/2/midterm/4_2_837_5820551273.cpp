//5820551273 Narupa luabunchoo

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,x,c;
    cout<<"Enter a positive integer :";
    cin>>n;
           if(n<10&&n>0)
    cout<<"Number of digit is 1"<<endl;
            if (n>10 && n<100)
    cout<<"Number of digit is 2"<<endl;
            if (n>100 && n<1000)
    cout<<"Number of digit is 3"<<endl;
            if (n>1000 && n<10000)
    cout<<"Number of digit is 4"<<endl;
            if (n>10000 && n<100000)
    cout<<"Number of digit is 4"<<endl;
            if (n<=0)
    cout<<"invlid number !!"<<endl;
  
  
  i=n;
  while(i>0)
  {
                     0==n%i;
                     cout<<"Foctor of "<<n <<" are "<<i<<endl; 
                     i=i-1;
                    
  }
  
system ("pause");
return 0;
}
