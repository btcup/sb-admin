#include <iostream>
using namespace std;
int GetIntVal (string strConvert) // error 12,456 = 12 , 123,456 = 123  ???
{
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return (intReturn);
}
void Dec2X (int num,int base) 
{
    int  i,X ;
   
    do
    {
        X = num%base;
        cout<< X ;
        num = num/base ;
    }while(num>base);
    cout<<num%base<<num/base;
        
    
}
int main()
{
    do
    {
     int  base ;
     string num ;
     cout<<"Enter decimal number : " ;
     cin>>num;
     if(GetIntVal(num)>=0)
     {
      cout<<"Enter base (2-9) : " ;
      cin>>base; 
      cout<<GetIntVal(num)<<"b10 is ";
      Dec2X(GetIntVal(num), base);
      cout<<"b"<<base<<endl;
     
     }
     else break;
    }
    while(1);
     
system("pause");
return 0;
}
    
    
