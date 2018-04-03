#include<iostream>
using namespace std;
int GetIntval(string strconvert)
{
    int intreturn;
    intreturn=atoi(strconvert.c_str());
    return(intreturn);
}
void dec2x(int d,int a)
{   int i;
    for(i=0;d>a;i++)
    {  
       if(d%a==0) cout<<"0";
       else if(d%a!=0)  cout<<"1";
       d=d/a;
    }
    
}

int main()
{
    int a,i,d;
    string b;
    cout<<"Enter decimal number:";
    cin>>b;
     if(b.size()>3)
    {
    b=b.erase(b.find(","),1);

   }
    d=GetIntval(b);
    for(i=0;d>0;i++)
    {
    if(i!=0){
    cout<<"Enter decimal number:";
    cin>>b;} 

      cout<<"Enter base:";
    cin>>a;
    cout<<b<<"b"<<10<<"  is  ";
    dec2x(d, a);
    cout<<"b"<<a<<endl;
     if(b.size()>3)
    {
    b=b.erase(b.find(","),1);
    d=GetIntval(b);
   }
   
    
   }

system("pause");
return 0;
}

