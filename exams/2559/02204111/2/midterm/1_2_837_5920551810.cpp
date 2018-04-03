#include<iostream>
using namespace std;
int main()
{
    int x,y,prime;   
    cout<<"Enter N : ";
    cin>>y;
    cout<<endl;
    if (y<0 )
    {
            cout<<"Enter N : ";
            cin>>y;
            cout<<endl;  
            }
            
            if (y<0 )
    {
            cout<<"Enter N : ";
            cin>>y;
            cout<<endl;  
            }
            
    if (y==0 )
    {
            cout<<"Enter N : ";
            cin>>y;
            cout<<endl;  
            }
            
    for(x=y;x>=0;x++)
 
           
    if (y>3 && y<100 && y%2 != 0)
    {       
            y%2 != 0;
            prime = (y)/(prime*3);
            prime=prime+1;
            
            cout<<"The greatest factor of "<<y<<" is "<<prime<<endl;
            break;
            } 
    
    else if (y>3 && y<100 && y%2 == 0)
    {       
            prime = (y)/(prime*3);
            
            cout<<"The greatest factor of "<<y<<" is "<<prime<<endl;
            break;
            } 
            
    else if ( y > 100 || y == 100 )
    {      
            cout<<"The greatest factor of "<< y <<" is 151 --> prime"<<endl;
            break;
            } 
    else if(y>0)
    {
            prime = (y);
            
            cout<<"The greatest facetor of "<<y<<" is "<<prime<<" --> prime number "<<endl;
            break;
        }
            system("pause");
            return 0;
            }
