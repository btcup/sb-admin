#include <iostream>
using namespace std;
int main()
{
    int x,y             ;
    char   a        ;
    cout << "Are you number (Y or N): ";
    cin >> a;
    cout << "How old are you? : ";
    cin >> x;
    cout << "Normal price : ";
    cin >> y;
    
    
    if (a=='Y')
    {
                 cout << "You have to pay ";
                 
                 if (x<2)
                      cout<< (y*0/100);
                 else if (x>=2 && x<=12)
                      cout<< (y*30/100);
                 else 
                      cout << (y*50/100);
    }
    else if (a=='N')
    {
                 cout << "You have to pay ";
                 
                 if (x<2)
                      cout<< (y*0/100);
                 else if (x>=2 && x<=10)
                      cout<< (y*50/100);
                 else 
                      cout << (y*100/100);
    }
    
    cout << endl;
    
    system ("pause");
    return 0 ;
}
        
