#include <iostream>
using namespace std;
int main()
{
          int x,y,i=0,j=0;
          int a[4][5];
          while(i<5)
          {          
              while(j<5)
              {
              cin>>a[j][i];
              j++;
              }
              i++;
          }  
          i=0;
          j=0;
          while(i<5)
          {          
              while(j<5)
              {
              cout<<"Give the number of passengers of day : "<<a[j][i]<<endl;
              j++;
              }
              i++;
          }  
        

system ("pause");
return 0;
}


