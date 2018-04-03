#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the 1st number:";
    cin>>a;
    cout<<"Enter the 2nd number:";
    cin>>b;
    cout<<"Enter the 3rd number:";
    cin>>c;
    cout<<"Enter the 4th number:";
    cin>>d;

    if(a>b && b<c && b<d)
    {
               cout<<"1st number is the maximum"<<endl;
               cout<<"2nd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=a-b)<<endl; 
    }
    else if (a>c && c<b && c<d)
        {
               cout<<"1st number is the maximum"<<endl;
               cout<<"3rd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=a-c)<<endl; 
               }             
    else if (a>d && d<c && d<b)
    {
               cout<<"1st number is the maximum"<<endl;
               cout<<"4th number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=a-d)<<endl; 
               }
                               
    
    else if(b>a && a<c && a<d)
    {
               cout<<"2nd number is the maximum"<<endl;
               cout<<"1st number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=b-a)<<endl; 
    }
    else if(b>c && c<a && c<d)
    {
               cout<<"2nd number is the maximum"<<endl;
               cout<<"3rd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=b-c)<<endl; 
    }
    else if(b>d && d<c && d<a)
    {
               cout<<"2nd number is the maximum"<<endl;
               cout<<"4th number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=b-d)<<endl; 
    }

 
    else if(c>a && a<b && a<d)
    {
               cout<<"3rd number is the maximum"<<endl;
               cout<<"1st number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=c-a)<<endl; 
    }
     else if(c>b && b<a && b<d)
    {
               cout<<"3rd number is the maximum"<<endl;
               cout<<"2nd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=c-b)<<endl; 
    }
    else if(c>d && d<b && d<a)
    {
               cout<<"3rd number is the maximum"<<endl;
               cout<<"4th number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=c-d)<<endl; 
    }

    else if(d>a && a<b && a<c)
    {
               cout<<"4th number is the maximum"<<endl;
               cout<<"1st number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=d-a)<<endl; 
    }
     else if(d>b && b<a && b<d)
    {
               cout<<"4th number is the maximum"<<endl;
               cout<<"2nd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=d-b)<<endl; 
    }
    else if(d>c && c<b && c<d)
    {
               cout<<"4th number is the maximum"<<endl;
               cout<<"3rd number is the minimun"<<endl;
               cout<<"The difference between Max and Min is ";
               cout<<(e=d-c)<<endl; 
    }

system("pause");
return 0;
}
    
    
