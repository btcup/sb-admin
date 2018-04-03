#include<iostream>
using namespace std;
int main () {
    char menu,size,x;
    int cup;
    float total,discount,pay;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    do
    {
      cout<<"Enter your menu (E/A/L/C/M) : ";
      cin>>menu;
      cout<<"Enter size (S/T/G/V) : ";
      cin>>size;
      cout<<"How many cups : ";
      cin>>cup;
      cout<<"Do you want other menu? (Y/N) : ";
      cin>>x;
    }
    while(x=='y');
    
              
                  
    
    system("pause");
    return 0;
}
