#include <iostream>
using namespace std;
int main()
{
    int num_std,num_sj,graph,i,j,n,m,sum; //5920503688
    cout<<"Number of student : ";
    cin>>num_std;
    cout<<"Number of subject : ";
    cin>>num_sj;
    double score_std[num_std][num_sj],max[num_std];
    n=1,max[i]=0;
    for (i=0;i<num_std;i++)
    {
        cout<<"score of Student "<<n<<" : ";
        for (j=0;j<num_sj;j++)
        {
            cin>>score_std[i][j];
            if (score_std[i][j] > max[i])
            {
               max[i] = score_std[i][j];
            }
        }
        n++;
    }
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>graph;
    
    n=1,m=0;
    for (i=0;i<num_std;i++)
    {
        cout<<"Student"<<n<<endl;
        if (graph==1)
        {
           for (j=0;j<num_sj;j++)
           {
              {     for(sum=0;sum<score_std[i][j];sum=sum+10)
                    { if (sum+10<score_std[i][j])
                         cout<<"O";
                      else if (sum+5<score_std[i][j])
                           cout<<"X";
                    }
                    cout<<endl;
              }
           }
         }
         else if (graph==2)
         {    
              for(sum=0;sum<max[i];sum=sum+10)
              { if (sum+10<max[i])
                   cout<<"O";
                else if (sum+5<max[i])
                   cout<<"X";
              }
              cout<<endl;
         }
         else if (graph==3)
              break;
         n++;
    }

    system("pause");
    return 0;
}
