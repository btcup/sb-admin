#include<iostream>                 // 5920503831 phanuwat  rodklongtan
using namespace std;
int main()
{
    int n,i,j,s,g,c;
    double x=0,b;
    cout<<"Number of student : ";
    cin>>n; 
    cout<<"Number of subject : ";
    cin>>s;
    double a[n][s];
    
    for(i=0;i<n;i++)
    { cout<<"scor of Student "<<i+1<<": ";
       for(j=0;j<s;j++)
        { cin>>a[i][j];
        }
    }
    
    cout<<"Select graph (1-score,2-max,3-exit): ";
    cin>>g;
    
    if(g==3) {}
    
    if(g==1)
    { for(i=0;i<n;i++)
       { cout<<"Student "<<(i+1)<<endl;
       { for(j=0;j<s;j++)
         {
           for(c=a[i][j];c>0;c=c-10)         
            {if(c>=10 )
              cout<<"O";
             else
              {if(c-5>=0)
               cout<<"X";   }         
            }               
            cout<<endl;           
         }
       }
     }
    }
    
    if(g==2)
      { 
        {for(i=0;i<n;i++)
         for(j=0;j<s;j++)
        { b=a[i][j];
         if(x<b)
         x=b;
        }
        }
            
            
            
            
      for(i=0;i<n;i++)
       { cout<<"Student "<<(i+1)<<endl;
       { for(j=0;j<s;j++)
         {
           for(c=x;c>0;c=c-10)         
            {if(c>=10 )
              cout<<"O";
             else
              {if(c-5>=0)
               cout<<"X";   }         
            }               
            cout<<endl;           
         }
       }
     }
    }
       
       
       
     
  
  
  
  
  if(i>=0)
        {for(i=0;i<n;i++)
         for(j=0;j<s;j++)
        { b=a[i][j];
         if(x<b)
         x=b;
        }
        }
  
  
  
  
  
  system("pause");
  return 0;
}
