#include<iostream>
using namespace std;
int main()
{
    int suma=0,i,j,a[5],n[5],l[5],t[5],sum=0,max=0;
    cout<<"Give the number of passengers of day 1: ";
    cin>>a[1]>>n[1]>>l[1]>>t[1];
    cout<<"Give the number of passengers of day 2: ";
    cin>>a[2]>>n[2]>>l[2]>>t[2];
    cout<<"Give the number of passengers of day 3: ";
    cin>>a[3]>>n[3]>>l[3]>>t[3];
    cout<<"Give the number of passengers of day 4: ";
    cin>>a[4]>>n[4]>>l[4]>>t[4];
    cout<<"Give the number of passengers of day 5: ";
    cin>>a[5]>>n[5]>>l[5]>>t[5];
    for(i=1;i<=5;i++)
    {
                     suma=suma+a[i];
                     }
    cout<<"Total passenger for air asia is : "<<suma<<endl;
    for(i=1;i<=5;i++)
    {
                     sum=sum+a[i]+n[i]+l[i]+t[i];
                     }
    cout<<"The average number of passengers for all days and all flights is : "<<(sum/20)<<endl;
    for(i=1;i<=5;i++)
    {
                     if(max<a[i])
                     max=a[i];
                     if(max<n[i])
                     max=n[i];
                     if(max<l[i])
                     max=l[i];
                     if(max<t[i])
                     max=t[i];
                     }
    cout<<"The largest number of passengers is :"<<max<<endl;
    system("pause");
    return 0;
}
