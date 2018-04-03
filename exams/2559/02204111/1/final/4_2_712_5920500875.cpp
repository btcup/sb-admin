//5920500875 Suphakarn Luangrangsi
#include<iostream>
//5920500875 Suphakarn Luangrangsi
using namespace std;
int main()
{
    int n,s,i,j,x,m;
    cout<<"Number of student : ";cin>>n;
    cout<<"Number of subject : ";cin>>s;
    double a[n][s];
    int b[n][s],c[n][s];
    for(i=0;i<n;i++){
       cout<<"sore of Student "<<i+1<<" : ";
       for(j=0;j<s;j++){
         cin>>a[i][j];
        }
      }
      
      cout<<"select graph(1-score,2-max,3-exit) : ";cin>>x;
      if(x==1){
       for(i=0;i<n;i++){
       cout<<"Student "<<i+1<<" : ";
       for(j=0;j<s;j++){
         cout<<endl;
         b[i][j]=int(a[i][j])/10;
         //cout<<b[i][j]<<" ";
         c[i][j]=int(a[i][j])%10;
         //cout<<c[i][j]<<" ";
         for(m=0;m<b[i][j];m++){
             cout<<"O";}
         if(c[i][j]>=5)
          cout<<"X";
        
         }
         cout<<endl;
      }
      cout<<endl;
      }//{if(x==1)}
      
      else if(x==2)
      {
          
           
      }
      
     
    
system("pause");
return 0;
}
