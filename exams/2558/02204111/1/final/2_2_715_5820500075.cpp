#include <iostream>
using namespace std;
void CountThe(char ch,string st,int n,int m,int o,int h,int x)
{ 
     st=ch;
     n=st.insent(0,'The');   
     m=st.insent(0,'the');
     o=st.insent(0,'tHe');
     h=st.insent(0,'thE');
     x=n+m+o+h;
}
int main() 
{
    char ch;int x;
    cout<<"Enter your sentence : ";
    cin>>ch;
    cout<<"Ther are "<<x<<" words of 'the' ";
    system("pause");
    return 0;
}
