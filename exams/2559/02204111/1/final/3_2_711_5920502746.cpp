//5920502746 Thanachit Panichakij
#include<iostream>;
#include<string>;
using namespace std;
int main()
{
    int n,h,i,j,k;
    cout<<"Number of subject : ";
    cin>>n;
    cout<<"Number of student : ";
    cin>>h;
    double A[n][h];
    for(i=1;i<=n;i++)
      for(j=1;j<=h;j++)
         for(k=1;k<=n;k++)
         {
             cout<<"score of Subject "<<k<<" : ";
             cin>>A[i][j];
             cout<<endl;
         }
    cout<<"Select graph (1-score,2-max) : ";

system("pause");
return 0;


}
