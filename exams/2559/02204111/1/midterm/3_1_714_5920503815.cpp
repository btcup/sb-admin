//5920503815 Pattaraporn Puttaphrom
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    
    
    cout<<"input value:";
    cin>>g;
    while(g>=0 &&g<10)
    {
     cout<<"input value:";
    cin>>f;
    if(f>=10 )
    { cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
             if(f<0)
             break;
    cout<<"input value:";
    cin>>e;
    if(e>=10 )
    { cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
              if(e<0)
             break;
     cout<<"input value:";
    cin>>d;
    if(d>=10 )
    {cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
              if(d<0)
             break;
     cout<<"input value:";
    cin>>c;
    if(c>=10 )
    { cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
              if(c<0)
             break;
     cout<<"input value:";
    cin>>b;
    if(b>=10 )
    {cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
              if(b<0)
             break;
     cout<<"input value:";
    cin>>a;
    if(a>=10 )
    {cout<<"Invalid Input!! Try Again"<<endl;
             continue;}
              if(a<0)
             break;
     
    
    }
    if(g>=0&&f>=0&&e>=0&&d>=0&&c>=0&&b>=0&&a>=0)
    {
      cout<<"Total is "<<g<<","<<f<<""<<e<<""<<d<<","<<c<<""<<b<<""<<a<<"";
    }
    else if(g>=0&&f>=0&&e>=0&&d>=0&&c>=0&&b>=0)
    {
      cout<<"Total is "<<g<<""<<f<<""<<e<<","<<d<<""<<c<<""<<b<<"";
    } 
    else if(g>=0&&f>=0&&e>=0&&d>=0&&c>=0)
    {
      cout<<"Total is "<<g<<""<<f<<","<<e<<""<<d<<""<<c<<"";
    }
    else if(g>=0&&f>=0&&e>=0&&d>=0)
    {
      cout<<"Total is "<<g<<","<<f<<""<<e<<""<<d<<"";
    }
    else if(g>=0&&f>=0&&e>=0)
    {
      cout<<"Total is "<<g<<f<<e;
    }
    
    else if(g>=0&&f>=0) 
    {
         cout<<"Total is "<<g<<f;
    }
    else if(g>=0)
    {
           cout<<"Total is "<<g<<"";
    }
    
    
    
    
    
    
    
    
    
    
    
    system ("pause");
    return 0;
}
