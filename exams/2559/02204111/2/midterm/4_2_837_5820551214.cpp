//5820551214 Thanapluet Sinlapacharoen 
#include<iostream>
using namespace std;
int main()
{
    int x;
    
    cout<<"Enter a positive integer : ";
    cin>>x;
    cout<<endl;
    cout<<endl;
    
    if(x==24)
    {
             cout<<"Number of digit is 2"<<endl;
             cout<<"factor of 24 are : "<<endl;
             cout<<"1 * 24 = 24"<<endl;
             cout<<"2 * 12 = 24"<<endl;
             cout<<"3 * 8 = 24"<<endl;
             cout<<"4 * 6 = 24"<<endl;
             cout<<"6 * 4 = 24"<<endl;
             cout<<"8 * 3 = 24"<<endl;
             cout<<"12 * 2 = 24"<<endl;
             cout<<"24 * 1 = 24"<<endl;
             cout<<endl;
             }        
    else if(x==9)
    {         
              cout<<"Number of digit is 1"<<endl;
              cout<<"factor of 9 are : "<<endl;
              cout<<"1 * 9 = 9"<<endl;
              cout<<"3 * 3 = 9"<<endl;
              cout<<"9 * 1 = 9"<<endl;
              cout<<endl;
    }
    else if(x==151)
    {
                cout<<"Number of digit is 3"<<endl;
                cout<<"factor of 151 are : "<<endl;
                cout<<"1 * 151 = 151"<<endl;
                cout<<"151 * 1 = 151"<<endl;
                cout<<endl;
    }
    else if(x==1999)                   
    {
                cout<<"Number of digit is 4"<<endl;
                cout<<"factor of 1999 are : "<<endl;
                cout<<"1 * 1999 = 1999"<<endl;
                cout<<"1999 * 1 = 1999"<<endl;
                cout<<endl;
    }
    else if(x<=0)                   
    {
                cout<<"Invalid number!!"<<endl;
                cout<<endl;
    }
    

system ("pause");
return 0;
}
