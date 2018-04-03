//5920503939 Saowapak Pohduang
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,max,min,moo;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
    
{
     if((a<b)&&(a<c)&&(a<d)){ cout<<endl<<"1st number is Minimum"<<endl; min=a;}
    else if((b<a)&&(b<c)&&(b<d)){ cout<<endl<<"2nd number is Minimum"<<endl; min=b;}
    else if((c<a)&&(c<b)&&(c<d)){ cout<<endl<<"3rd number is Minimum"<<endl; min=c;}
    else if((d<a)&&(d<b)&&(d<c)){ cout<<endl<<"4th number is Minimum"<<endl; min=d;}
}
{
     if((a>b)&&(a>c)&&(a>d)){ cout<<"1st number is Maximum"<<endl; max=a;}
    else if((b>a)&&(b>c)&&(b>d)){ cout<<"2nd number is Maximum"<<endl; max=b;}
    else if((c>a)&&(c>b)&&(c>d)){ cout<<"3rd number is Maximum"<<endl; max=c;}
    else if((d>a)&&(d>b)&&(d>c)){ cout<<"4th number is Maximum"<<endl; max=d;}
}
moo=max-min;
cout<<"The difference between Min. and Max. is "<<moo<<endl;
system ("pause");
return 0;
}
