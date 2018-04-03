#include<iostream>
using namespace std;
int main()
{
    
int  stu,sub,i,j,n;

cout<<"Number of student :";
cin>>stu;
cout<<"Number of subject :";
cin>>sub;

int A[stu][sub];

for(i=1;i<=stu;i++)
{
     for(j=1;j<=sub;j++)
     cout<<"score of student"<<j<<":";
     getline(cin,n,'\n');
     
     }




system("pause");
return 0;
}
