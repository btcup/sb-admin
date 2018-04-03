#include <iostream>
#include <string>
using namespace std;

void Dec2X(int &a , int b)
{
    
     a = a%10;
     
      
}

int main()
{
    int a,b ; 
    if(a>=0 || b>=0 ){
    
    cout<<"Enter decimal number : " ;
    cin>> a ;
    Dec2X(a,b);
   
    cout<< "Enter bas (2-9) : " ;
    cin>> b ;
    cout<< a*25 <<"b10 is "<<"1000b"<<b<< endl;
    }
    else 
    cout<<"Enter decimal number : " <<a << endl;
    
    
    system ("pause");
    return 0;
       
}
