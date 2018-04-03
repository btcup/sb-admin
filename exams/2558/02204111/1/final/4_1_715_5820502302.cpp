#include<iostream>
#include<cmath>
using namespace std;
/*int GetInVal(int z,int x,int y)
{   cout<<x<<"b10 is "<<z<<"b"<<y<<endl;
    
    return 0;
}*/
int main()
{ int x,y;
  float i,j;
  float k,z=0;
  do
  {
  cout<<"Enter decimal number: ";
  cin>>x;
  cout<<"Enter base(2-9)";
  cin>>y;
         if(x>0||x==0)
         { continue;
         }
         /*{ for(i=0;i<10;i++)
           { k = x%y;
             j = x/y;
             x = j;
               if(j>y)
               { k = pow(y,i);
                 z = z + k;
                 
               }
               else if(j<y)
               { GetInVal(z,x,y);
               }
  
           }
         }*/
         else if(x<0)
         { break;
         }
         
         
  }
  while(1);
  return 0;
  
}
