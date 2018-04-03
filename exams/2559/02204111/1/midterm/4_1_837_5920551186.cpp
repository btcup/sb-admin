// 5920551186 worrapon ploymai
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    do
    {
        cout<<"input value: ";
        cin>>n;
        if(n>9)
        cout<<"Invalid Input!!"<<endl;
    }
    while(n>=0);
    cout<<endl; 
    do
    {
       cout<<"Your money is ";         
       cout<<n;        
    }
    while(n>=0);
      
    system("pause");
    return 0;
}
