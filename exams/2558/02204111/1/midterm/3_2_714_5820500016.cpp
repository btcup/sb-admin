#include<iostream>
using namespace std;
int main()
{
    int s=0;
    long long na,i,m=100;
    cout<<"Please input number : ";
    cin>>na;
    
    
    if(na%2==0&&na>0)
    {  
       cout<<"\n\nSummation of Even number\n\n";           
       s+=na%10;
       cout<<na%10;
           for(i=10;i<na;i=i*10)
           {
                if(na/i%2==0)      
                {
                   cout<<" + "<<((na%m)/i);
                   s+=(na%m)/i;
                }
           m=m*10;
           }
    cout<<" = "<<s<<endl;    
    }
    else if(na%2!=0&&na>0)
    {  
         cout<<"\n\nSummation of Odd number\n\n";           
       s+=na%10;
       cout<<na%10;
           for(i=10;i<na;i=i*10)
           {
                if(na/i%2==1)      
                {
                   cout<<" + "<<((na%m)/i);
                   s+=(na%m)/i;
                }
           m=m*10;
           }
    cout<<" = "<<s<<endl;
    }
    else
    {
    cout<<"!!!! Wrong input !!!!"<<endl;
}
    

system("pause");
return 0;
}
