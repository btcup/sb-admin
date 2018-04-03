//5920502932 Sithichok Sudsan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n;
   cout<<"input value: ";
   cin>>n; 
   while(n>=0)
   {   
   if(n>9)
   { 
   cout<<"Invalid Input!! Try Again"<<endl;   
   }
   cout<<"input value: ";
   cin>>n;        
   }
   cout<<"Total is "<<n<<endl;
  
   system("pause");
   return 0;    
}
