//5920503025 Maihom vilas
#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,x;
    while(1)
    { cout<<"input value : ";
      cin>>x;
      
             if(x>=0 && x<10)
             {sum=(sum*10)+x;}
             else if (x>=10)
             {cout<<"Invalid Input!!!"<<endl;}
             else if (x<0)
             {break;}
      }
    
    cout<<"Your money is "<<sum<<" = ";
    
    while(1)
     {           sum=sum/10;
                 cout<<sum<<" + ";
                 if (sum<=0)
                 break;
                 }
                 
    
    
    system("pause");
    return 0;
}
             
             
             
      
      
