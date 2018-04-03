#include<iostream>
using namespace std;

int GetIntVal(string strConvert)
{
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return(intReturn);
}

int Dec2X (int num, int b)
{
    int c;
    
    while(num>=b)
    {
              c=num%b;
              num=num/b;
              cout<<c;
    }
    
}

int main()
{
    string n,s;
    int b,a,num;
    
    cout<<"Enter decimal number: ";
    cin>>n;
    
    while(n[0]!='-')
    {
    for(int i=0;i<n.length();i++)
    {
            
            a=n.find(",",i);
            if(a!=-1)
            {
            s=s+n.substr(0,a);
            n.erase(0,a+1);
            if(n.length()<4)
            s=s+n;
            } 
            else if(n.length()<4)
            s=n;    
    } 
     
    
    num = GetIntVal(s);
    
    
    cout<<"Enter base (2-9): ";
    cin>>b;
    
    cout<<num<<"b10 is ";
    cout<<Dec2X(num,b);
    cout<<"b"<<b<<endl;
    
    cout<<"Enter decimal number: ";
    cin>>n;
    }
    
    
    system("pause");
    return 0;

}
