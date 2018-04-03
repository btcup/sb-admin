//5920500361 Mr.Thanathon  Prempranee
#include<iostream>
using namespace std;
int main()
{
   
    int i,j,a,b;
    cout<<"number of student : ";
    cin>>i;
    cout<<"number of subject : ";
    cin>>j;
    
    string x[i][j];
    
     for(a=0;a<i;a++)
      { 
         cout<<"score of Student "<<a+1<<": ";           
         for(b=0;b<j;b++)
         {    
                        
           cin>>x[a][b];
         }
      }
      
      cout<<"Select graph (1-score , 2-max , 3-exit)";
      cin>>z;
      
      if(z==1)
      for(a=0,a<i,a++);
      { 
         for(b=0,b<j,b++);
         {              
           cout<<
         }
      }
      
      if(z==2)
      else break;
      
system ("pause");
return 0;
}
