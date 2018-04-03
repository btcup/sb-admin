#include<iostream>
using namespace std;
int mySearch(string a,string b)
{
     int x,y,c=0,d=0,e,i;
     x=a.size();
     y=b.size();
     
     for(i=0;i<=y;i++)
     {
      e=a.find(b[i],d);                
     if(b[0]=='*')
         break;
     else if(b[i]=='*')
         {  
         c=c+1;
         }
     else 
         {
         if(a.find(b[i],d)>=0&&a.find(b[i],d)<=x)      
            c=c+1;
            d=e+1;   
         }
     }
     
     return c;
}
int main()
{
    int c;
    string a,b;
    cout<<"Enter text: ";
    getline(cin,a,'\n');
    cout<<"Enter keyword: ";
    getline(cin,b,'\n');
        c=mySearch(a,b);
    if(c==b.size())
      cout<<"'"<<b<<"' is in above text."<<endl;
    else if(c==0)
      cout<<"Incorrect keyword!"<<endl;
    else
      cout<<"'"<<b<<"'is not in above text."<<endl;
    
    
    
    
    system("pause");
    return 0;
}
