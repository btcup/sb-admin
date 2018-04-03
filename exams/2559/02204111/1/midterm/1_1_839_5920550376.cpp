#include <iostream>
using namespace std;
int main()
{
     
     
     int x,y,;
     float z;
     cout<<"Enter n, a and d :" ;
     cin>>x>>y>>z;       
     cout<<"The arithmetic progression of n="<<x<<" ""a="<<y<<" ""d="<<z<<"" ":"" "
     <<y<<" "<<(y-0.5)<<" "<<((y-0.5)-0.5)<<" "<<(((y-0.5)-0.5)-0.5)<<" "<<((((y-0.5)-0.5)-0.5)-0.5)<<" "<<endl;
     cout <<"The summation :"<<y+(y-0.5)+(y-0.5)-0.5+((y-0.5)-0.5)-0.5+((((y-0.5)-0.5)-0.5)-0.5)<<" "<<endl; 
     
     
     
     
     
     system ("pause");
     return 0;
     }
