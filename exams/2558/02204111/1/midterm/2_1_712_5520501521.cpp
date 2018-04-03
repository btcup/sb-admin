#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int many,x,total,Discount,;
    char menu,size,other;
    cout<< "Welcome to A Cup-with-love Coffee!!" <<endl;
    cout<< "Enter your menu (E/A/L/C/M) : ";
    cin>>menu;
    cout <<"Enter size (S/T/G/V) : " ;
    cin>>size;
    cout<<"How many cups? : " ;
    cin>>many;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>other;
    {
    if(menu=='E'||menu=='e')
              {
                            if (menu=='S'||menu=='s'); x==40;
                            if (menu=='T'||menu=='t') ;x==50;
                            if (menu=='G'||menu=='g'); x==60;
                            if (menu=='V'||menu=='v'); x==70;
              }
    else if(menu=='A'||menu=='a')
              {
                            if (menu=='S'||menu=='s') ;x==40;
                            if (menu=='T'||menu=='t'); x==50;
                            if (menu=='G'||menu=='g'); x==60;
                            if (menu=='V'||menu=='v') ;x==70;
              }
    else if(menu=='C'||menu=='c')
              {
                            if (menu=='S'||menu=='s'); x==50;
                            if (menu=='T'||menu=='t'); x==60;
                            if (menu=='G'||menu=='g'); x==70;
                            if (menu=='V'||menu=='v') ;x==80;
              }
     else if(menu=='L'||menu=='l')
              {
                            if (menu=='S'||menu=='s'); x==50;
                            if (menu=='T'||menu=='t'); x==60;
                            if (menu=='G'||menu=='g'); x==70;
                            if (menu=='V'||menu=='v'); x==80;
                            
      else if(menu=='M'||menu=='m')
              {
                            if (menu=='S'||menu=='s') ;x==60;
                            if (menu=='T'||menu=='t') ;x==70;
                            if (menu=='G'||menu=='g') ;x==80;
                            if (menu=='V'||menu=='v') ;x==90;
              }
    }
}{
            if (other=='Y'||other=='y')
                   cout << "Total " <<x<<"Bath"<<endl;
                   Discount== x/10;
                   cout <<"Discount " <<Discount<<"Bath"<<endl;
                   cout<< "You pay " <<x/10<<"Bath"<<endl;
                   
            else if (other=='N'||other=='n')
                   cout << "Total " <<x<<"Bath"<<endl;
                   cout <<"Discount 0 Bath"<<endl;
                   cout<< "You pay " <<x<<"Bath"<<endl;
      }
    system("pause");
    return 0;
}
