#include<iostream> //5920502606 Benjamaporn Nuankaew
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer:";
    if((x>0)&&(x<10))
    cout<<"Number of digit is 1";
    if  ((x>10)&&(x<100))
    cout<<"Number of digit is 2";
    if  ((x>100)&&(x<1000))
    cout<<"Number of digit is 3";
    if  ((x>1000)&&(x<10000))
    cout<<"Number of digit is 4";
    if  ((x>10000)&&(x<100000))
    cout<<"Number of digit is 5";
    if  ((x>100000)&&(x<1000000))
    cout<<"Number of digit is 6";
    cout<<""<<x<<"is a target number.";
    return 0;
}
    
                  
    
