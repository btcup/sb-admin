//5920501642 patcharawan chaowanitkul 
#include <iostream>
using namespace std;
int main()
{
    char c;
    int s,st;
    
    double max=0;
    cout <<"Number of subject : ";
    cin >> s;
    cout <<"Number of student : ";
    cin >> st;
   double score [s][st];
   for(int i=0;i<s;i++)
    {
          cout << "score of subject " << i+1 << ":";
          for (int j=0; j<st ;j++)
          {
              cin >> score [i][j];
              
          }
    }
    cout <<"Select graph (1-score ,2-max ,3-exit) : ";
    cin >>c;
    if (c=='1') 
    {
               for (int i=0;i<s;i++) 
               {
                   cout << "Sub " << i+1 <<endl;
                   for (int j=0;j<st;j++)
                       for (double k= score[i][j];k>=5;)
                       {
                           if (k>=10)cout <<"O";
                           else if (k>=5)cout <<"X";
                           k=k-10;
                           if (k<5) cout <<endl;
                       }
               }
    }
    if (c=='2') 
    {
                for (int i=0;i<s;i++)
                {    cout << "sub "<<i+1<<endl;
                    for (int j=0;j<st;j++)
                    if (score [i][j]>= max) max=score [i][j];
                    for (double k= max;k>=5;k=k-10)
                       {
                           if (k>=10)cout <<"O";
                           else if (k>=5)cout <<"X";
                       }
                    cout <<endl;
                }
    }
    if (c=='3') return 0;
    system ("pause");
    return 0;
}             










