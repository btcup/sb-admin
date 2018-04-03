#include<iostream>
#include<string>
using namespace std;
int GetIntVal(string strConvert){
        int intReturn;
        intReturn = atoi(strConvert.c_str());
        return(intReturn);
        }
int main()
{
    int n,m,p;
    cout<<"Enter decimal number: ";
    cin>>n;
    if(n>=0)
            cout<<"Enter base (2-9) : ";
            cin>>m;
            p=n/m;
            cout<<n<<"b10 is "<<p<<"b"<<m<<endl;
    
    

    system("pause");
    return 0;
}
