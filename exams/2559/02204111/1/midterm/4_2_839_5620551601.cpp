//5620551601 Ekkarit chuenpear
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<"Enter 3rd number :";
    cin>>c;
    cout<<"Enter 4th number :";
    cin>>d;
    if((((a<b)&&(a<c))&&(a<d))&&(((b>a)&&(b>c))&&(b>d))  )
    {
    if(a<b)
    {
      cout<<"1st number is Minimum"<<endl;                 
      cout<<"2nd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<b-a<<endl;
      }
    } 
    else if((((a>b)&&(a>c))&&(a>d))&&(((b<a)&&(b<c))&&(b<d))  )
    {
    if(b<a)
    {
      cout<<"2nd number is Minimum"<<endl;                 
      cout<<"1st number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<a-b<<endl;
      }
    }
     else if((((c>b)&&(c>a))&&(c>d))&&(((b<a)&&(b<c))&&(b<d))  )
    {
    if(b<c)
    {
      cout<<"2nd number is Minimum"<<endl;                 
      cout<<"3rd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<c-b<<endl;
      }
    }
     else if((((d>b)&&(d>c))&&(d>a))&&(((b<a)&&(b<c))&&(b<d))  )
    {
    if(b<d)
    {
      cout<<"2nd number is Minimum"<<endl;                 
      cout<<"4th number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<d-b<<endl;
      }
    }
     else if((((c<b)&&(c<a))&&(c<d))&&(((b>a)&&(b>c))&&(b>d))  )
    {
    if(b>c)
    {
      cout<<"3rd number is Minimum"<<endl;                 
      cout<<"2nd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<b-c<<endl;
      }
    }
     else if((((d<b)&&(d<c))&&(d<a))&&(((b>a)&&(b>c))&&(b>d))  )
    {
    if(b>d)
    {
      cout<<"4th number is Minimum"<<endl;                 
      cout<<"2nd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<b-d<<endl;
      }
    }
     else if((((a>b)&&(a>c))&&(a>d))&&(((c<a)&&(c<b))&&(c<d))  )
    {
    if(c<a)
    {
      cout<<"3rd number is Minimum"<<endl;                 
      cout<<"1st number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<a-c<<endl;
      }
    }
     else if((((a>b)&&(a>c))&&(a>d))&&(((d<a)&&(d<c))&&(d<b))  )
    {
    if(d<a)
    {
      cout<<"4th number is Minimum"<<endl;                 
      cout<<"1st number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<a-d<<endl;
      }
    }
     else if((((a<b)&&(a<c))&&(a<d))&&(((c>a)&&(b<c))&&(c>d))  )
    {
    if(c>a)
    {
      cout<<"1st number is Minimum"<<endl;                 
      cout<<"3rd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<c-a<<endl;
      }
    }
     else if((((a<b)&&(a<c))&&(a<d))&&(((d>a)&&(b<d))&&(d>c))  )
    {
    if(d>a)
    {
      cout<<"1st number is Minimum"<<endl;                 
      cout<<"4th number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<d-a<<endl;
      }
    }
     else if((((a<c)&&(b<c))&&(d<c))&&(((d>a)&&(b<d))&&(c>d))  )
    {
    if(d<c)
    {
      cout<<"4th number is Minimum"<<endl;                 
      cout<<"3rd number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<c-d<<endl;
      }
    } 
    else if((((c<b)&&(c<a))&&(c<d))&&(((a<d)&&(b<d))&&(c<d))  )
    {
    if(c<d)
    {
      cout<<"3rd number is Minimum"<<endl;                 
      cout<<"4th number is Maximum"<<endl;
      cout<<"The difference between Min. and Max. is "<<d-c<<endl;
      }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
