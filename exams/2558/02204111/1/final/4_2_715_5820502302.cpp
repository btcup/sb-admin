#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int a[4][5];
   int i,j,max;
   float sum=0,k=0,z=0;
   cout<<"Give the number of passengers of day 1: ";
    for(i=0;i<=0;i++)
   { for(j=0;j<4;j++)
     { cin>>a[i][j];
      
     }
   }
    cout<<endl;
    cout<<"Give the number of passengers of day 2: ";
    for(i=1;i<=1;i++)
   { for(j=0;j<4;j++)
     { cin>>a[i][j];
       
     }
   }
   cout<<endl;
   cout<<"Give the number of passengers of day 3: ";
    for(i=2;i<=2;i++)
   { for(j=0;j<4;j++)
     { cin>>a[i][j];
       
     }
   }
   cout<<endl;
   cout<<"Give the number of passengers of day 4: ";
    for(i=3;i<=3;i++)
   { for(j=0;j<4;j++)
     { cin>>a[i][j];
        
     }
   }
   cout<<endl;
   cout<<"Give the number of passengers of day 5: ";
    for(i=4;i<=4;i++)
   { for(j=0;j<4;j++)
     { cin>>a[i][j];
       
     }
   }
   cout<<endl;
  
   for(i=0;i<5;i++)
   { for(j=0;j<=0;j++)
     {   sum = sum + a[i][j];
     }
   }
   cout<<"Total passenger for air asia is: "<<sum<<endl;
   
   for(i=0;i<5;i++)
   { for(j=0;j<4;j++)
    { k = k + a[i][j];
    }
   }
   k = k/20;
   cout<<"The average number of passengers for all days and all flights is : "<<k<<endl;
   
   for(i=0;i<5;i++)
   { for(j=0;j<4;j++)
     { z = a[i][j];
                     
                   if(z>max)
                   { max = z;
                   }
     }
   }
   cout<<"The largest number of passengers is : "<<max<<endl;
   
   system("pause");
   return 0;
   
}
