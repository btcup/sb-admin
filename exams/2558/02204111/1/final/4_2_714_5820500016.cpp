#include<iostream>
using namespace std;
int main()
{
    int i,j,air=0,lar=0;
    double sum=0.0,pa[4][5];
    for(i=0;i<5;i++)
    {
    cout<<"Give the number of passenger of day "<<i+1<<": ";
       for(j=0;j<4;j++)
       {
        
        cin>>pa[j][i];
        if(pa[j][i]>lar)
        lar=pa[j][i];
        sum=sum+pa[j][i];
       }
    }
    for(i=0;i<5;i++)
    {
          air+=pa[0][i];
    }
    cout<<"\nTotal passenger for air asia is : "<<air<<endl;
    cout<<"\nThe average numer of passenger for all days and all fights is"<<(sum/20.0)<<endl;
    cout<<"\nThe largest number of passenger is :"<<lar<<endl;
system("pause");
return 0;

}
        
