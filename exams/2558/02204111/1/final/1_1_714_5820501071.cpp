#include <iostream>
using namespace std;

int main()
{
    int N;
    
    for(;N<1||N>9;)
    {cout<<"Enter N: ";
    cin>>N;}
    int a[N][N],i,j;
    for(i=0;i<N;i++)
    {
                    for(j=0;j<N;j++)
                    {
                                    cin>>a[i][j];
                    }
    }
    char b;
    cout<<"Choose(U:Upper,L=Lower,D=Diagonal): ";
    cin>>b;
    if(b=='u'||b=='U')
    {
            for(i=0;i<N;i++)
            {
                    for(j=0;j<N;j++)
                    {
                                    if(i>j)
                                    {
                                           a[i][j]=0;
                                    }
                    }
            }
    }
    else if(b=='l'||b=='L')
    {
            for(i=0;i<N;i++)
            {
                    for(j=0;j<N;j++)
                    {
                                    if(i<j)
                                    {
                                           a[i][j]=0;
                                    }
                    }
            }
    }
    else if(b=='d'||b=='D')
    {
            for(i=0;i<N;i++)
            {
                    for(j=0;j<N;j++)
                    {
                                    if(i!=j)
                                    {
                                           a[i][j]=0;
                                    }
                    }
            }
    }
    for(i=0;i<N;i++)
    {
                    for(j=0;j<N;j++)
                    {
                                    cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
    }
    system ("pause");
    return 0;
}
