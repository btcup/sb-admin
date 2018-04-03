//5920500468 Pongsathorn Seangvirunthorn
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
 
 
  if (a>b&&a>c&&a>d)
  {
           if(b<c&&b<d)
                     {
                    cout<<"2nd number is Minimum"<<endl;
                    cout<<"1st number is Maximum"<<endl;
                    e=a-b;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                     }
           else if (c<b&&c<d )
                    {
                     cout<<"3rd number is Minimum"<<endl;
                    cout<<"1st number is Maximum"<<endl;
                    e=a-c;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }
           else 
                   {
                    cout<<"2nd number is Minimum"<<endl;
                    cout<<"1st number is Maximum"<<endl;
                    e=a-d; 
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }
}
else  if (b>a&&b>c&&b>d)
  {
          if (a<c&&a<d)  
                    {
                     cout<<"1st number is Minimum"<<endl;
                    cout<<"2nd number is Maximum"<<endl;
                    e=b-a;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }  
           else if (c<a&&c<d)   
                     {
                     cout<<"3rd number is Minimum"<<endl;
                    cout<<"2nd number is Maximum"<<endl;
                    e=b-c;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }
           else 
                    {
                     cout<<"4th number is Minimum"<<endl;
                    cout<<"2nd number is Maximum"<<endl;
                    e=b-d;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }
}
 else if (c>a&&c>b&&c>d)
  {
          if (a<b&&a<c)
                   {
                     cout<<"1st number is Minimum"<<endl;
                    cout<<"3rd number is Maximum"<<endl;
                    e=c-a; 
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }  
          else if (b<a&&b<d)
                   {
                     cout<<"2nd number is Minimum"<<endl;
                    cout<<"3rd number is Maximum"<<endl;
                    e=c-b;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }
          else 
                    {
                    cout<<"4th number is Minimum"<<endl;
                    cout<<"3rd number is Maximum"<<endl;
                    e=c-d;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }  
}
 else 
{
           if (d>a&&d>b&&d>c&&a<b&&a<c)
                   {
                    cout<<"1st number is Minimum"<<endl;
                    cout<<"4th number is Maximum"<<endl;
                    e=d-a;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }   
           else if (d>a&&d>b&&d>c&&b<a&&b<c)
                   {
                    cout<<"2nd number is Minimum"<<endl;
                    cout<<"4th number is Maximum"<<endl;
                    e=d-b;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    }  
           else 
                     {
                    cout<<"3nd number is Minimum"<<endl;
                    cout<<"4th number is Maximum"<<endl;
                    e=d-c;
                    cout<<"The difference between Min. and Max. is "<<e<<endl;
                    } 
}   
              
                       
                                                                                                                                            
        system("pause");
        return 0;
}  
