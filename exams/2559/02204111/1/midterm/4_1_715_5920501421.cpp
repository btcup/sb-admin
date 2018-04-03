// 5920501421 Jarukan Janta 
#include <iostream>
using namespace std ;
int main()
{
    int i,n , sum ;
   do
      {  
                  cout <<"input value: " ;
                  cin>> n;
                  sum = n;
                  if(n>=0)
                     continue;
                  if(n<0)
                  cout <<"Your money is " << sum ;
                     break;
                  
       }
      while(n>=0) ;
      
       
          
    system("pause");
    return 0 ;
}
