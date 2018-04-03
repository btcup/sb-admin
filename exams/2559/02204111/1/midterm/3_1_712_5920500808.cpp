//5920500808    Pikhanet Attasuriyakun
#include <iostream>

using namespace std;
int main()
{
    double x,sum;
    sum=0;
    do{
    cout << "Input value : ";
    cin >> x;
    if (x>=10)
       {
              cout << "Invalid Input!! Try again " <<"\n" <<endl;
              continue;
       }
       if ( x>=0)
       sum=sum*10+x;
    }while(x>=0);
                 cout <<"Total is : "<< sum <<endl;
   system("pause");
   return 0; 
}
