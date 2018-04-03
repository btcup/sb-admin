#include <iostream>
using namespace std;
int GetIntVal(string strConvert) {
                     int intReturn;
                     intReturn = atoi(strConvert.c_str());
                     return(intReturn);
}
void Dec2X(int b,int n)
{
    int i,j=2;
    do{
        n=n/b;
        if(n>=b) j+=1;
        
        }while(n>=b);
    int a[j];
    for(i=0;i<j;i++)
    {
                    a[i]=n%b;
                    n=n/b;
    }
    for(i=j-1;i>=0;i--)
                    cout<<a[i];
    cout<<"b"<<b<<endl;
} 
    

int main()
{
    int n,b,m,k;
    string s;
    do{
    cout<<"Enter decimal number: "; cin>>s;
    n=GetIntVal(s);
    if(n<0) break;
    cout<<"Enter base (2-9): "; cin>>b;
    cout<<n<<"b"<<b<<" is ";
    Dec2X(b,n);
    cout<<endl;
    }while(n>=0);
    
    system("pause");
    return 0;
}
    
    
    
