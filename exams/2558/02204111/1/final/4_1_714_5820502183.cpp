#include<iostream>
using namespace std;

int GetIntVal(string strConvert)
{
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return(intReturn);
}
int sum1;
int Dec2X(int a,int b);
    sum1= a % b ;
    return sum1;
    
    
int main()
  int a,b;
  int sum1;
do
  {
  cout<<"Enter decimal number:";
  cin>>a;
  cout<<"Enter base (2-9):";
  cin>>b;
  Dec2X(a,b);  
  cout<<a"b10 is "<<sum1<<endl;   
   }    
 while(a>=0);   
 
system("pause");
return 0;

