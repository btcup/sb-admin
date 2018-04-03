#include <iostream>
#include <cmath>
using namespace std; 
int main(){
    int m=4,n=5,i=0,j=0,a[m][n],sum=0,z,x;
    float avr;
    cout<<"Give the number of passengers of day 1:";
    for(i=0;i<m;i++)
    cin>>a[i][j];
    cout<<"Give the number of passengers of day 2:";
    for(i=0;i<m;i++)
    cin>>a[i][j+1];
    cout<<"Give the number of passengers of day 3:";
    for(i=0;i<m;i++)
    cin>>a[i][j+2];
    cout<<"Give the number of passengers of day 4:";
    for(i=0;i<m;i++)
    cin>>a[i][j+3];
    cout<<"Give the number of passengers of day 5:";
    for(i=0;i<m;i++)
    cin>>a[i][j+4];
    cout<<endl;
    
    cout<<"Total passenger of air asia is:";
    for(j=0;j<n;j++)
    sum=sum+a[0][j];
    cout<<sum<<endl;
    
    sum=0;
    cout<<"The average number of passengers for all days and all flights is:";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    sum=sum+a[i][j];
    avr=sum/20;
    cout<<avr<<endl;
    
    sum=0;
    cout<<"The largest number of passengers is:";
    for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    if (a[i][j]){
    for(z=0;z<m;z++)
    for(x=0;x<n;x++){
    if(a[i][j]>a[z][x])
    sum=a[i][j];
    else
    break;
    }}}}
    cout<<sum<<endl;
      

    system ("pause");
    return 0;
}
    
