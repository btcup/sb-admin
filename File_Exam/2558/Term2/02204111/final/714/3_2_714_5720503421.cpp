#include <iostream>
using namespace std;
int  main()
{
     int m,n,i,a,j,k,h=0,d;
     i=0;
     do{
     cout<<"Enter M and N : ";
     cin>>m>>n;
     if(m<2||m>15||n<2||m>15)
     {
     cout<<"Error .Please input M and N between 2-15 .\n";
     }
     if(m>=2&&m<=15&&n>=2&&n<=15)
     {
     cout<<"Enter inital number : ";
     cin>>a;
     int c[m][n];
      for(j=0;j<n;j++)
     {
           for(k=0;k<m;k++)   
           {
               cout<<a+h<<" "; 
               h++;
                          
           } 
           
            cout<<endl;
          
     }
     cout<<endl;
     for(j=0;j<n;j++)
     {
            
                  
            for(k=0;k<=m;k++)  
            {
                if((a+h)%h==0)
           
               cout<<(a+h)<<" ";
                h++;             
            } 
            cout<<endl;        
     }
     
     }
    
    
     
     
     }while(m<2||m>15||n<2||n>15);
     
 system("pause");
 return 0;    
}
