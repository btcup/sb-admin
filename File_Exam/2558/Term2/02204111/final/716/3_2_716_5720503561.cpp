#include<iostream>
using namespace std;
int main()
{
    int M,N,x,i;
    while(i>=2)
    {
    i=0;
    cout<<"Enter M and N: ";
    cin>>M>>N;
    if(M&N>=2)
    i=i+1;
    else if(M&N<=15)
    i=i+1;
    else
    cout<<"Error.Please input M and N between 2-15."<<endl;}
    cout<<"Enter initial number: ";
    cin>>x;
    int a[N][M];
    int y=x;
    for(int b=0;b<N;b++)
    {
    for(int c=0;c<M;c++)
    cout<<x++;
    cout<<endl;}
    cout<<endl;
    x=y;
    for(int d=0;d<N;d++)
    {
    for(int e=0;e<M;e++)
    {x++;
    if(x%2==0&x!=2)
    cout<<x;}
    cout<<endl;}
system("pause");
return 0;
}
