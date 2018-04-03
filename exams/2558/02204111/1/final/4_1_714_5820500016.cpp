#include<iostream>
using namespace std;
int GelntVal(string strconvert)
{       
    int intreturn;
    intreturn=atoi(strconvert.c_str());
    return intreturn;
}
void Dec2X(int  a,int bas)
{
    int i,x,z=a;
    
    for(i=1;;i=i*10)
    { 
       if(z>0)
       {
              x=x+(z%bas)*i;
              z=z/bas;
       }
       else
       break;
    }
    cout<<a<<"b10 is"<<x<<"b"<<bas<<endl;

}
int main()
{
    int i,j,x;
    while(1)
    {
    string n,ne;
    cout<<"\nEnter decimal number :";
    cin>>n;
    for(i=0;i<n.size();i++)
    {
       if(n[i]!=',')
       ne=ne+n[i];
    }
    int y=0;
         y=GelntVal(ne);
         if(y<0)
         break;
         cout<<"Enter base (2-9) :";
    cin>>x;
         Dec2X(y,x);  
    }
 system("pause");
 return 0;   
}
    
    
