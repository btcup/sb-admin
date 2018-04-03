//5920500859 Sirichai Sritawatin 712
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,i,j;
    
    cout<<"Please input M : ";
    cin>>m;
    int A[m][m],B[m][m];
    cout<<"Please input array A :"<<endl;
         for(i=0;i<m;i++){
            for(j=0;j<m;j++){
            cin>>A[i][j];}   
            }
    cout<<"Please input array B :"<<endl;
         for(i=0;i<m;i++){
            for(j=0;j<m;j++){
            cin>>B[i][j];}   
            }  
              
   int z=0;     
   for(i=0;i<m;i++){
   for(j=0;j<m;j++){
   if(A[i][j]==B[i][j]){
   z=z+1;}}}                                               
   double k;         
   k=((z*100)/(m*m));         
            
    cout<<endl;        
    cout<<"Similarity of A and B is : "<<k<<" %"<<endl;                                      
    //cout<<"Wrong input !!"<<endl;
    //cout<<"End program.";
       
    
    
 system("pause");
 return 0;   
}
