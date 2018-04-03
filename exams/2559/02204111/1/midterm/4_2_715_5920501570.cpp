//5920501570 Niracha Ngernpisutsilp
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
      if(a<b&&a<c&&a<d) cout<<" 1st number is Minimum"<<endl;
    else if(b<a&&b<c&&b<d) cout<<" 2nd number is Minimum"<<endl;
    else if(c<a&&c<b&&c<d) cout<<" 3rd number is Minimum"<<endl;
    else if(d<a&&d<b&&d<c) cout<<" 4th number is Minimum"<<endl;
    
       if(a>b&&a>c&&a>d) cout<<" 1st number is Maximum"<<endl;
    else if(b>a&&b>c&&b>d) cout<<" 2nd number is Maximum"<<endl;
    else if(c>a&&c>b&&c>d) cout<<" 3rd number is Maximum"<<endl;
    else if(d>a&&d>b&&d>c) cout<<" 4th number is Maximum"<<endl;
    
   if((a>b&&a>c&&a>d)&&(b<a&&b<c&&b<d))
    cout<<"The difference between Min. and Max. is"<<a-b;
   if((a>b&&a>c&&a>d)&&(c<a&&c<b&&c<d))
   cout<<"The difference between Min. and Max. is"<<a-c;
   if((a>b&&a>c&&a>d)&&(d<a&&d<b&&d<c))
   cout<<"The difference between Min. and Max. is"<<a-c;
   
   if((b>a&&b>c&&b>d)&&(a<b&&a<c&&a<d))
   cout<<"The difference between Min. and Max. is"<<b-a;
   if((b>a&&b>c&&b>d)&&(c<a&&c<b&&c<d))
   cout<<"The difference between Min. and Max. is"<<b-c;
    if((b>a&&b>c&&b>d)&&(d<a&&d<b&&d<c))
   cout<<"The difference between Min. and Max. is"<<b-d;
    
  
    if((c>a&&c>b&&c>d)&&(a<b&&a<c&&a<d))
   cout<<"The difference between Min. and Max. is"<<c-a;
   if((c>a&&c>b&&c>d)&&(b<a&&b<c&&b<d))
   cout<<"The difference between Min. and Max. is"<<c-b;
    if((c>a&&c>b&&c>d)&&(d<a&&d<b&&d<c))
   cout<<"The difference between Min. and Max. is"<<c-d;
   
   
   if((d>a&&d>b&&d>c)&&(a<b&&a<c&&a<d))
   cout<<"The difference between Min. and Max. is"<<d-a;
   if((d>a&&d>b&&d>c)&&(b<a&&b<c&&b<d))
   cout<<"The difference between Min. and Max. is"<<d-b;
    if((d>a&&d>b&&d>c)&&(c<a&&c<b&&c<d))
   cout<<"The difference between Min. and Max. is"<<d-c;
    
    
    
    system("pause");
    return 0;
}
