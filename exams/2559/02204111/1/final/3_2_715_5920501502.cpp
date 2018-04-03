#include <iostream>
using namespace std;
int graph(int a,int x,int y)
{
    int g,b,d;
    cout<<"Select graph (1-score,2-max) : ";
    cin>>g;
    
    if(g==1)
    {
            for(int i=0;i<x;i++)
            {
                    cout<<"Subj"<<i+1<<endl;
                    for(int j=0;j<y;j++)
                    {
                            int b,d,e;
                            b=a[i][j]/10;
                            
                            for(int c=1;c<=b;c++)
                            cout<<"O";
                            d=a[i][j]-(10*b);
                            if (d/5=1) cout<<"X";
                            cout<<endl;
                    }
            }
            
}

int main()
{
    int subject,student;
    cout<<"Number of subject : ";
    cin>>subject;
    cout<<"Number os student : ";
    cin>>student;
    
    int subj[subject][student];
    for (int i=0;i<subject;i++)
    {
        cout<<"score of Subject "<<i+1<<" : ";
        for(int j=0;j<student;j++)
        cin>>subj[i][j];
    }
    graph(sub,subject,student);
    
    
    
    
    system ("pause");
    return 0;
}
