#include<iostream>
using namespace std;
int main (){
int i,j,x,sum=0,avg,max,;
int str1[5][4];
cout<<"Give the number of passengers of day 1:";
for(i=0;i<5;i++){
          for(j=0;j<4;j++){
                 cin>>str1[i][j];
                 sum=sum+str1[i][j];
                 avg=(sum/20);
                 } 
                 x=(i+2);
                 if(x<6)
                 cout<<"Give the number of passengers of day"<<" "<<i+2<<":";
                 else 
                 break;
                 }
          cout<<"Total passenger for air asia is :"<<" "<<str1[0][0]+str1[1][0]+str1[2][0]+str1[3][0]+str1[4][0]<<endl;
          cout<<"The average number of passengers for all days and all flights is :"<<" "<<avg<<endl;
          int min=0;
          for(i=0;i<5;i++){
          for(j=0;j<4;j++)
          max=str1[i][j];
          if(min<max)
          max=max;
          else 
          max=min;
          }
          cout<< "The largest number of passengers is :"<<max<<endl;
system("pause");
return 0;
}
