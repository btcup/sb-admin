#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,t,r;
    int stu,sub;
    int s[stu][sub];
    
    int O=10,X=5;
    char a;
    cout<<"Number of student : "; cin>>stu;
    cout<<"Number of subjust : "; cin>>sub;
    for(i=1;i<=stu;i++)
                     {
                             cout<<"score of Student"<<i<<" :";
                             {for(j=1;j<=sub;j++)
                             {cin>>s[i][j];}}
                     }
    cout<<"Select graph (1-score,2-max,3-exit):"; cin>>a;
    while(1)
    {
            if(a=='3')
            break;
            else
            {
              if(a=='1')
              {for(n=1;n<stu;n++)
                        cout<<"Student"<<m<<endl;
                        k=s[1][j]/10;
                        for(t=1;t<=k;t++)
                        cout<<"0";
                        }        
              
              
              if(a=='2')
              {for(m=1;m<stu;n++)
                       cout<<"Student"<<m<<endl; 
              } 
            } 
    }
    
    system("pause");
    return 0;
}
