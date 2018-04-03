//5920502932 Sithichok Sudsan
#include<iostream>
using namespace std;
main()
{
  char g;    
  int z,y,i,j;
  float a[100][100],b[100][100],c[100][100],max;
  cout<<"Number of student : "; 
  cin>>z;   
  cout<<"Number of subject : ";    
  cin>>y;
  for(i=1;i<=z;i++)
  {
       cout<<"score of Student "<<i<<":";             
       for(j=1;j<=y;j++)
       {
          cin>>a[i][j];             
       }           
  }  
  cout<<"select graph (1-scoren2-max,3-exit) : ";   
  cin>>g;
  if(g=='3') cout<<"EXIT"<<endl;
  else if(g=='2')
  {
      for(i=1;i<=z;i++)
      {
         cout<<"Student"<<i<<endl;
         if(a[i][1]>a[i][2]&&a[i][1]>a[i][3])
         {
           max=a[i][1];
         }
         else if(a[i][2]>a[i][1]&&a[i][2]>a[i][3])
         {
           max=a[i][2];
         }
         else if(a[i][3]>a[i][1]&&a[i][3]>a[i][2])
         {  
           max=a[i][3];
         }
         cout<<max<<endl;               
      } 
  }
   else if(g=='1')
  {
       for(i=1;i<=z;i++)
      {
         cout<<"Student"<<i<<endl;
         cout<<a[i][1]<<endl; 
         cout<<a[i][2]<<endl;
         cout<<a[i][3]<<endl;              
      } 
       
}
    
system("pause");      
return 0;      
}
