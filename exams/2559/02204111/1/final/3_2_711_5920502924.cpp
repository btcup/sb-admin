//5920502924 Suparat Jittithammawat
#include <iostream>
using namespace std;
int main()
{
    int sub,std,i,j,g;
    cout<<"Number of subject : ";
    cin>>sub;
    cout<<"Number of student : ";
    cin>>std;
    double score[sub][std],max;
    for(i=0;i<sub;i++)
    {
                      cout<<"score of Subject "<<i+1<<": ";
                      for(j=0;j<std;j++) cin>>score[i][j];
    }
    
    cout<<"Select graph (1-score,2-max) :";
    cin>>g;
    cout<<endl;
    if(g==1)
    {
            for(i=0;i<sub;i++)
            {
              cout<<"Subj"<<i+1<<endl;
              for(j=0;j<std;j++)
              {
                while(score[i][j]>=10)
                {  cout<<"O";
                   score[i][j]=score[i][j]-10; }
                if(int(score[i][j])>=5) cout<<"X";
                cout<<endl;
              }
            }                                                               
    }
    
    else if(g==2)
    {
         for(i=0;i<sub;i++)
            {
              cout<<"Subj"<<i+1<<endl;
              max=score[i][0];
              for(j=0;j<std;j++)
              { if(score[i][j] > max) 
                max=score[i][j]; 
                
              if(j==std-1)
              {  
                while(max >=10)
                {  cout<<"O";
                   max=max-10; }
                if(max >=5) cout<<"X";
                cout<<endl; 
              } 
              }                
            } 
    }               
    system("pause");
    return 0;
}
