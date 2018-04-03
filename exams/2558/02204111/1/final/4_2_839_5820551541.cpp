#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,e=0,sum=0,sam=0,zum=0,zam=0,zim=0;
    int A[4],B[4],C[4],D[4],E[4];
    cout<<"Give the number of passengers of day 1 : ";
    for(a=0;a<4;a++)
    {
    cin>>A[a];
    }
    cout<<"Give the number of passengers of day 2 : ";
    for(a=0;a<4;a++)
    cin>>B[a];
    cout<<"Give the number of passengers of day 3 : ";
    for(a=0;a<4;a++)
    cin>>C[a];
    cout<<"Give the number of passengers of day 4 : ";
    for(a=0;a<4;a++)
    cin>>D[a];
    cout<<"Give the number of passengers of day 5 : ";
    for(a=0;a<4;a++)
   cin>>E[a];
    a=0,b=1;
    while (a<4&&b<4)
    {

          if (A[a]<A[b])
          sum=A[b];
          else if (A[a]>A[b])
          sum=A[a];
          else if (A[a]==A[b])
          sum=A[b];
          a++;
          b++;
    }

    a=0,b=1;
    while (a<4&&b<4)
    {

          if (B[a]<B[b])
          sam=B[b];
          else if (B[a]>B[b])
          sam=B[a];
          else if (B[a]==B[b])
          sam=B[b];
          a++;
          b++;
    }

       a=0,b=1;
    while (a<4&&b<4)
    {

          if (C[a]<C[b])
          zum=C[b];
          else if (C[a]>C[b])
          zum=C[a];
          else if (C[a]==C[b])
          zum=C[b];
          a++;
          b++;
    }

       a=0,b=1;
    while (a<4&&b<4)
    {

          if (D[a]<D[b])
          zam=D[b];
          else if (D[a]>D[b])
          zam=D[a];
          else if (D[a]==D[b])
          zam=D[b];
          a++;
          b++;
    }
       a=0,b=1;
    while (a<4&&b<4)
    {

          if (E[a]<E[b])
          zim=E[b];
          else if (E[a]>E[b])
          zim=E[a];
          else if (E[a]==E[b])
          zim=E[b];
          a++;
          b++;
    }
    

    
    cout<<"Total Passenger for air asia is : ";
    cout<<A[0]+B[0]+C[0]+D[0]+E[0]<<endl;
    
    cout<<"The average number of passengers for all days and all flights is : ";
  
     b=A[0]+B[0]+C[0]+D[0]+E[0];
     c=A[1]+B[1]+C[1]+D[1]+E[1];
     d=A[2]+B[2]+C[2]+D[2]+E[2];
     e=A[3]+B[3]+C[3]+D[3]+E[3];
    
     cout<<(b+c+d+e)/20<<endl;
     
     cout<<"The largest number of passengers is : ";
    if(sum<sam&&zum<sam&&zam<sam&&zim<sam)
    cout<<sam<<endl;
    else if (sam<sum&&zum<sum&&zam<sum&&zim<sum)
    cout<<sum<<endl;
    else if (sam<zum&&sum<zum&&zam<zum&&zim<zum)
    cout<<zum<<endl;
    else if (sam<zam&&sum<zam&&zum<zam&&zim<zam)
    cout<<zam<<endl;
    else
    cout<<zim<<endl;
    
system ("pause");
return 0;    
}
