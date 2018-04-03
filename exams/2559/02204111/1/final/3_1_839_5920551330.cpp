//5920551330 chularat prapbuntarik
#include <iostream>
using namespace std;

int main()
{
    string key,s;
    string w;
    cout<<"Enter text: ";
    cin>>w;
    cout<<"Enter keyword: ";
    cin>>key;
    
    s=(w.find(key));
    if (s==key)            
            cout<<"'"<<key<<"'"<<"is in above text"<<endl;
    else 
            cout<<"'"<<key<<"'"<<"is not in above text"<<endl;

    system("pause");
    return 0;
    
}
