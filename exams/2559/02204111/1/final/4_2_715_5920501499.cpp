#include  <iostream>
using namespace std ;
void a(double a)
{
     for(a; ;a=a-10){
     if(a>=5&&a<10) {cout<<"x"; break;}
     if(a<5) break;
     cout<<"o";
     }
     }
int main(){
     int m,n,i,j,ch;
     cout<<"Number of student  :    ";
     cin>>m;
     cout<<"Number of subject  :    ";
     cin>>n;
     double k[m][n],max;
     for(i=0;i<m;i++)
     {
     cout<<"score of student :"<<i+1<<"  ";
     for(j=0;j<n;j++)
     cin>>k[i][j];
     cout<<endl;
     }
     for( ; ; )
     {cout<<"Select graph (1-score,2-max,3-exit)   "      ;
     cin>>ch;
     if(ch==1)
     {
     for(i=0;i<m;i++){
      cout<<"Student "<<i+1<<"  "<<endl;
      
      for(j=0;j<n;j++){
          a(k[i][j]) ;   
          cout<<endl;}
          }
              }
     if(ch==2)
     {
      for(i=0;i<m;i++){
      cout<<"Student "<<i+1<<"  "<<endl;
      max=0;
      for(j=0;j<n;j++)
      {
                  
         if(k[i][j]> max) max=k[i][j];      
            } a(max);cout<<endl;
                     }
     }
     if(ch==3) break;
     }      
system ("pause");
return 0;
}
