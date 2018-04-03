#include<iostream>
using namespace std;
int main()
{
        
        
         int s,i,j,k=1;
         cout<<"Size of matrix : ";
         cin>>s;
         
         int A[s][s];
         
         if(s!=1)
         {
            cout<<"Value : "<<endl;
            for(i=0;i<s;i++)     
             for(j=0;j<s;j++)
            cin>>A[i][j];
            
            if(s==2)
            {
                    
                    cout<<"sub-matrix : "<<endl;
                    for(i=0;i<s;i++)     
                    for(j=0;j<s;j++)
                     cout<<A[i][j]<<endl<<"-----"<<endl;
                     k++;
            }
             if(s==3)
            {
                    
                    cout<<"sub-matrix : "<<endl;
                    for(i=0;i<3;i++)     
                    for(j=0;j<3;j++)
                     cout<<A[i][j]<<endl<<"-----"<<endl;
            }    
                 
                 
                 
         }
       else
        cout<<"Eroor !! no sub matrix ";
    
    
    
    
    
         system("pause");
         return 0;
    
}
