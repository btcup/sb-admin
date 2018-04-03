#include<iostream>
using namespace std;
int main()
{   int a,b,c,d=0,i,j,k;
    
    cout<<"Number of subject : ";
    cin>>a;
    cout<<"Number of student : ";
    cin>>b;
    double score[a][b];
    
    for(i=0;i<a;i++)
    {
     cout<<"score of Subject "<<i+1<<": ";
     for(j=0;j<b;j++)
         cin>>score[i][j];
                         
    }
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>c;
    
    if(c==1)
       {for(i=0;i<a;i++)
           {cout<<"Subj "<<i+1<<endl;
             if(score[i][j]/10!=0)
                  for(j=0;j<b;j++)
                  {for(k=0;k<score[i][j]/10;k++)
                  cout<<"O";
                   if(score[i][j]-10*(k-1)>5)
                  cout<<"X";   
             cout<<endl;}                                       
           }       
       }
    if(c==3)
    cout<<"Thank you";
    
    
    
    
    system("pause");
    return 0;
}
