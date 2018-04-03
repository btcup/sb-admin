#include<iostream>
using namespace std;
int main()
{
    int stu,sub;
    char graph;
    cout<<"Number of student : ";
    cin>>stu;
    cout<<"number of suuject : ";
    cin>>sub;
    double score[stu][sub];
    for(int i=0;i<stu;i++)
    {
        cout<<"score of student "<<i+1<<" : ";
        for(int j=0;j<sub;j++)
            cin>>score[i][j];
    }
    cout<<"Select graph (1-score , 2-max , 3-Exit) : ";
    cin>>graph;
    cout<<endl;
    if(graph=='1')
    {
         for(int i=0;i<stu;i++)
         {
             cout<<"Student "<<i+1<<endl;
             for(int j=0;j<sub;j++)
             {
                   for(double a=score[i][j];a>0; )
                   {
                        if(a-10>0)
                        {
                             a = a - 10;
                             cout<<"O"; 
                        }
                        else if(a-5>0)
                        {
                              a = a - 5;
                             cout<<"X";
                             break;
                        }
                        else
                            break;
                   }
                   cout<<endl;
             }
         }
    }
    else if(graph=='2')
    {
         for(int i=0;i<stu;i++)
         {
             cout<<"Student "<<i+1<<endl;
             double max=0;
             for(int j=0;j<sub;j++)
             {
                  if(score[i][j]>max)
                       max = score[i][j];
             }
             for(double a=max;a>0; )
             {
                  if(a-10>0)
                  {
                        a = a - 10;
                        cout<<"O"; 
                  }
                  else if(a-5>0)
                  {
                        a = a - 5;
                        cout<<"X";

                  }
                  else
                        break;
             }
             cout<<endl;
         }
    }
    else if(graph=='3')
         cout<<"Exit"<<endl;
    system("pause");
    return 0;
}
