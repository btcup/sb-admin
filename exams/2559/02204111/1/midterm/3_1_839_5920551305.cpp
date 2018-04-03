#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int x,i;
 
 
 for(int i;i<=10;i=i++ )
 {
   cout<<"Input value: "<<"\t";
   cin >>i;
       x=i++;   
          if(i>9)
          {
              cout<<"Invalid Input !! Try Again "<<endl;
              continue;   
                 } 
          
    
         
 }
         cout<<"Total is "<<x<<endl;
 
 system("pause");
 return 0;   
}
