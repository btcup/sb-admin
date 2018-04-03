#include <iostream>
using namespace std;
int main()
{
    int a,num=0;
    cout<<"Enter an integer:";cin>>a;
    do{
    if(a>=100&&a<1000)
    cout<<"Number of digit is 3"<<endl;
    num++;
    
    if(a>=10&&a<100)
    cout<<"Number of digit is 2"<<endl;
    
    if(a>=1000&&a<10000)
    cout<<"Number of digit is 4"<<endl;
    
    if(a>=10000&&a<100000)
    cout<<"Number of digit is 5"<<endl;            
}
while(true);



    
   
    cout<<a<<"is a target number"<<endl;
    cout<<a<<"is not a target number"<<endl;
    
    system("pause");
    return 0;
}
