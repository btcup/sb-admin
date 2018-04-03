//5920501634 Miss.Patcharamai Panwanichaiyakij
#include<iostream>
using namespace std;
int main()
{
int n,m;
    int i,j,g;
    cout<<"Number of subject :";
    cin>>n;
    cout<<"Number of student:";
    cin>>m;
  double t[n][m];
    for(i=1;i<=n;i++)
    {
                    cout<<"score of subject"<<i<<":";
                    for(j=1;j<=m;j++)
                    cin>>t[i][j];
                    cout<<endl;
                    }
                    cout<<"select graph(1-score,2-max)";
                    cin>>g;
                     
                              
                    
                    system("pause");
                    return 0;
                    }        
                      
