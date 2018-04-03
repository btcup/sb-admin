#include <iostream>
using namespace std;
int main()
{
    int b,i,j,k;
    string a,c,d;
    cout<<"Enter text : ";
    getline (cin,a,'\n');
    for (i=0;i<=a.size();i=i+j)
    {
        j=a.find(" ",i);
        for (i=0;i<=j;i=i+1)
        c=c+a[j-i];
        
    }
    for (i=0;i<=a.size();i=i+j)
    {
        k=a.find(" ",j-1);
        
        for (i=0;i<=a.size()-k;i++)
        d=d+a[a.size()-i];
    }
    cout<<c<<d<<endl;
    system ("pause");
    return 0;
} 


