#include<iostream>
using namespace std;
int main()
{
    char x,y;
    int h,w,d;
    cout << "Welcome to The Fantastic Tiles!!"<<endl;
    do
    {
         cout<<"Please enter room size in meter (H x W x D) : ";
         cin >> h >> w >> d ;
         cout<<"Please select floor title... (A/B/C) : ";
         cin >> x;
         cout <<"Please select wall tile... (A/B/C) : ";
         cin >> y;
         cout <<"---------------------------------------------"<<endl; 
         if(x=='a'||x=='A')
         {
                           if(y=='a'||y=='A')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           }
                           else if(y=='b'||y=='B')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl; 
                           }
                           else if(y=='c'||y=='C')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           }
         }
         else if(x=='b'||x=='B')
         {
                           if(y=='a'||y=='A')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           }
                           else if(y=='b'||y=='B')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl; 
                           }
                           else if(y=='c'||y=='C')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           } 
         }
         else if(x=='c'||x=='C')
         {
                           if(y=='a'||y=='A')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           }
                           else if(y=='b'||y=='B')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl; 
                           }
                           else if(y=='c'||y=='C')
                           {
                           cout << "Number of floor tiles : -->Price =  Baht"<<endl;
                           cout << "Number of wall tiles : -->Price =  Bath"<<endl;
                           cout << "Total price :  =  Baht"<<endl;
                           }
                            
         }
         cout <<"---------------------------------------------"<<endl;                 
    }
    while(0);
    system("pause");
    return 0;
}
                  
