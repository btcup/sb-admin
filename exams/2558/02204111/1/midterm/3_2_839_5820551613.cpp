#include <iostream>
using namespace std;
int main()

{
    long long x;
    int z,p;
    cout << "Please input number :";
    cin >> x;
 
   if (x>=10)
   {
      if ( x%2 ==0)
       {
         cout<<"Summation of Even number "<<endl;
      
      
         x%2==0;
          z = x+x+x+x+x ;
      
         cout <<" "<<  z <<" "<<endl;


       }
       else if (x%2 ==1)
       {    
         cout<<"Summation of Odd number "<<endl;
            x%2==1;
          p = (x%2)+(x%2)+(x%2)  ;
        cout <<" "<<  p <<" "<<endl;
    
    
       }
       
       }
  else if (x>=0 && x<=9)
       {    
        cout<<""<<x<<""<<endl;
        }
  else if(x<0)
       {
     cout<<" !! Wrong Input !! " <<endl;  
       }
  
     system("pause");
    return 0;
}
