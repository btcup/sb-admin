//5920550252 Warit Singdee
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{   
    int x,i,m;
    m=1;
    cout<<"Enter a positive integer :";
    cin>>x;
      do 
    {   if (x<=0)
        {cout<<"Invalid number!!"<<endl;
           break; }
         else
         i=x%m; 
          i--;
          cout<<"Number of digit is"<<endl;
           cout<<"Factor of"<<x<<""<<"are :"<<endl;
      
    }
    while (i>=x);          
    
                   
        
system ("pause");
return 0 ;

}
