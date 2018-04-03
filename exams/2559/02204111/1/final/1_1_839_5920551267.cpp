//5920551267 Kitchapoln Tunnitisupawong
#include<iostream>
using namespace std;
int main()
{
    int a,b,m,n,c,d,f,g,h,i,j,k,l,o;
    int x[m][n],e[n][m];
    cout<<"Please input M and N: ";
    cin>>m>>n;
    cout<<"Please input matrix A: "<<endl;
    for(a=0;a<m;a++)
     for(b=0;b<n;b++)
       cin>>x[a][b];
    cout<<"Please input matrix B: "<<endl;
    for(c=0;c<n;c++)
     for(d=0;d<m;d++)
       cin>>e[c][d];
     cout<<"A x B :"<<endl;
     for(c=0;c<m;c++)
     for(d=0;d<n;d++)
     for(a=0;a<n;a++)
     for(b=0;b<m;b++)
{
     f=e[a][b],g=x[c][d],h=e[a+1][b],i=x[c][d+1];
      cout<<(f*g)+(h*i)<<" ";}
    system("pause");
    return 0;
}
