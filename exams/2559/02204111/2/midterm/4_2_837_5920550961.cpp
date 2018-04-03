#include<iostream> \\5920550961 Kasiyapat Praditkitkul
using namespace std;
int main()
{
    int pos,i,a,ans,b,num;
    cout<<"Enter a positive integer: ";
    cin>>pos;
    cout<<"\n\n";
    if(pos>0)
    {
    i=0;
    ans=pos;         
    for(a=10;ans!=0;i++)
    {
    ans=ans/a;
    }
    cout<<"Number of digit is "<<i<<endl;
    cout<<"Factor of "<<pos<<" are:"<<endl;
    num=pos;
    for(b=1;b<pos;b++)
    {
    b*num==pos;
       
       cout<<b<<" * "<<num<<" = "<<pos<<endl;
                    
       num--;
      
                   
    }
    }
    else
    cout<<"Invalid number!!"<<endl;
    system("pause");
    return 0;
}    
    
