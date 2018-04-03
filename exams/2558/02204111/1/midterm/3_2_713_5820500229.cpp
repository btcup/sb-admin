#include <iostream>
using namespace std;
int main()
{   
   long long number;
   int i;
   cout<<"Please input number :";
   cin>>number;
   
   if(number<=0)
   {
      cout<<"!! Wrong input !!\n" ;           
   }
   
   else
   { 
       if(number%2==0)
       cout<<"Summation of Even number\n";
       else 
       
        cout<<"Summation of Odd number\n";
} 
    system ("pause");
    return 0;
}
