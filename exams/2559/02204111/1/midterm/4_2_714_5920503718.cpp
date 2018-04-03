#include <iostream>
using namespace std;
int main() 
{
    int a,b,c,d,s,p,q,r;
    cout<<"enter 1st number : ";
    cin >>a;
    cout<<"enter 2st number : ";
    cin >>b;
    cout<<"enter 3st number : ";
    cin >>c;
    cout<<"enter 4st number : ";
    cin >>d;
        if(a>b&&a>c&&a>d)
        cin>>s;
       else if (b>a&&b>c&&b>d)
       cin>>p;
       else if (c>a&&c>b&&c>d)
       cin>>q;
      else if (d>a&&d>c&&d>c)
      cin>>r;
      
  
    
    if(a<b&&a<c&&a<d)
    cout<<"1st number is Min";
       else if (b<a&&b<c&&b<d)
    cout<<"2st number is Min";
     else if (c<a&&c<b&&c<d)
    cout<<"3st number is Min";
     else if (d<a&&d<c&&d<c)
    cout<<"4st number is Min";
    
    system("pause");
    
    
    return 0 ;
}
