#include <iostream>
using namespace std;
int main()
{
    int n,a,m,i,j ;
    cout<<"Enter N : ";
    cin>>a;
    int N[a][a];
    if(a<=9)
{
    for(i=1;i<=a*a;i=i+1)
    {
    cin>>n;
    }
    cout<<"Choose(U:Upper,L:Lower,D:Diagonal): ";
    cin>>m;
    
           if (m == 'U')
           {
                   cout<<" U "<<endl;
           }
           else if (m=='L')
           {
                   cout<<" L "<<endl;
           }
           else if (m=='D')
           {
                   cout<<" D "<<endl;
           }
    
}    
     
     
     
     
     
     
     else if(a>9)
{
    cout<<" E r r o r ! ! ! "<<endl;
}

    system("pause");
    return 0;
}
