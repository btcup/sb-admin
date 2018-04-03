#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float size,H,W,D;
    char floor,wall;
    cout<< "Welcome to The Fantastic Tiles!!" <<endl;
    cout<< "Please enter room size in meter (H x W x D) : ";
    cin>>H>>W>>D;
    cout <<"Please select floor tile... (A/B/C) : " ;
    cin>>floor;
    cout<<"Please select wall tile... (A/B/C) : " ;
    cin>>wall;
    cout<<"--------------------------"<<endl;
   if ((floor=='A'||floor=='a')&&(wall=='A'||wall=='a'))
      cout<<"Number of floor tiles : " <<ceil(W)*ceil(D)*10<<"-->Price = "<<ceil(W)*ceil(D)*10*55<<" Bath"<<endl;
      cout<<"Number of all tiles : " <<endl;
      cout<<"Total price : " <<(ceil(W)*ceil(D)*10*55) <<" + " <<endl;
    
    
    system("pause");
    return 0;
}
