#include<iostream>
using namespace std;
int m;
int GetIntVal(string x)
{
    m = atoi(x.c_str());
    return(m);
}
void Dec2x(int m)
{
    int n,p;
    cout<<"Enter base (2-9) : ";
    cin>>n;   
}
int main ()
{
  do{
         string x;
         cout<<"Enter demical number : ";
         cin>>x;
         GetIntVal(x); 
         if(m<0)
         {break;}
         Dec2x(m);
    }
  while(true);
  system("pause");
  return 0;
}
    
