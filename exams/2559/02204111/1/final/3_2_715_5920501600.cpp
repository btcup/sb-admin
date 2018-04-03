//5920501600 Pawanrat Chokchaimadon
#include<iostream>
using namespace std;
void score(double a)
{ for(double k=a;k>=5;)
  {
   if(k>=10)
   {
      cout<<"O";
      k=k-10;
   }
   else if(k>=5)
   {
      cout<<"X";
      k=k-5;
   }
  }
}
int main()
{
    int n,m,t;
    cout<<"Number of subject : "; cin>>n;
    cout<<"Number of student : "; cin>>m;
    double A[n][m];
    for(int i=0;i<n;i++)
    {
      cout<<"score of subject "<<i+1<<" : ";
      for(int j=0;j<m;j++)
      {
        cin>>A[i][j];             
      } 
    }
    cout<<"Select graph (1-score,2-max): "; cin>>t;
    if(t==1)
    {
     for(int i=0;i<n;i++)
    {
      cout<<"subj"<<i+1<<endl;
      for(int j=0;j<m;j++)
      {
       score(A[i][j]); cout<<endl;             
      } 
    }
    }
    else if(t==2)
    {
    double x=0,y;
    for(int i=0;i<n;i++)
    {
      cout<<"subj"<<i+1<<endl;
      for(int j=0;j<m;j++)
      {
       if(A[i][j]>x)
       x=A[i][j];             
      } 
      score(x);
      cout<<endl;
    }
    }
    system("pause");
    return 0;
}
