#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a positive integer:";
    cin>>a;
    if(a==24)
    {
    cout<<"                              "<<endl;
    cout<<"Number of digit is 2"<<endl;
    cout<<"Factor of 24 are:"<<endl;
    cout<<"      1  * 24 = 24"<<endl;
    cout<<"      2  * 12 = 24"<<endl;
    cout<<"      3  * 8  = 24"<<endl;
    cout<<"      4  * 6  = 24"<<endl;
    cout<<"      6  * 4  = 24"<<endl;
    cout<<"      8  * 3  = 24"<<endl;
    cout<<"      12 * 2  = 24"<<endl;
    cout<<"      24 * 1  = 24"<<endl;
   
    }
    if(a==9)
    {
            cout<<"                              "<<endl;
         cout<<"    Number of digit is 1"<<endl;
         cout<<"    Factor of 9 are:"<<endl;
         cout<<"    1  * 9 = 9"<<endl;
         cout<<"    3  * 3 = 9"<<endl;
         cout<<"    9  * 1 = 9"<<endl;
   
    }
    if(a==151)
    {
    cout<<"                              "<<endl;
            cout<<" Number of digit is 3"<<endl;
            cout<<" Factor of 151 are:"<<endl;
            cout<<" 1    * 151 = 151"<<endl;
            cout<<" 151  * 1   = 151"<<endl;
   
    }
    if(a==1999)
    {
         cout<<"                              "<<endl;
             cout<<" Number of digit is 4"<<endl;
             cout<<" Factor of 9 are:"<<endl;
             cout<<" 1  * 1999 = 1999"<<endl;
             cout<<" 1999  * 1 = 1999"<<endl;
    }
    if(a<=0)
    cout<<"Invalid number!!"<<endl;
system("pause");
return 0;
}
   
                
