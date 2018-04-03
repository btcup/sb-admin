#include<iostream>
using namespace std;
int main(){
    int a,s,n,i,j,k,l,x=0,y=0,xm=0,ym=0;
    cout<<"Number of subject : ";
    cin>>s;
    cout<<"Number of student : ";
    cin>>n;
    double score[s][n];
    for(i=0;i<s;i++)
    {
    cout<<"score of Subject "<<i+1<<": ";                    
         for(j=0;j<n;j++)
         {
               cin>>score[i][j];
         }
    }
    cout<<"Select graph (1-score,2-max,3-exit):";
    cin>>a;
    if(a==3){cout<<"Thank you."<<endl;}
    if(a==1){
    for(i=0;i<s;i++)
    {
    cout<<"Subj"<<i+1<<endl;                    
         for(j=0;j<n;j++)
         {
               x=int(score[i][j]/10);
               y=int((score[i][j]-(x*10)))%10;
               for(k=0;k<x;k++)
               {
                               cout<<"O";
               }
               if(y==0||y>4){cout<<"x";}
               cout<<endl;
         }
    }
    }
    else if(a==2)
    {
          for(i=0;i<s;i++)
    {
          cout<<"Subj"<<i+1<<endl;
    for(j=0;j<n;j++)
         {
               x=int(score[i][j]/10);
               y=int((score[i][j]-(x*10)))%10;
               if(x>xm){xm=x;ym=y;}
               if(x==xm)
               {
                        if(y>ym){xm=x;ym=y;}
               }
               if(j==n-1){
                         for(k=0;k<xm;k++)
                         {
                               cout<<"O";
                         }
                         if(ym==0||ym>4){cout<<"x";}
                               cout<<endl;
                         }
         }
    }
    }
    system("pause");
    return 0;
    }
