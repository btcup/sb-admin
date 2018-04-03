#include<iostream>
using namespace std;
int main()
{
    int a[20][20];
    int i,j,M,N;
   
      while()
       { 
        cout<<"Enter M and N : ";
        cin>>M>>N;
        cout<<endl;
        if(M>=2&&M<=15&&N>=2&&N<=15)
        {
          int a;
          cout<<"Enter initial : ";
          cin>> a;
          for(i=0;i<N;i++)
          { 
            for(j=0;j<M;j++)
           {
            cin>> a[i][j];
          }
           cout<<endl;
           }
           }
          else
         cout<<"Error.Please input M and N between 2-5"<<endl;
         continue;
         }

    system("pause");
    return 0;
}
