// 5920501642 Patcharawan Chaowanitkul
#include <iostream>
using namespace std;
int main()
{
    int w,x,y,z,max,min;
    cout << "Enter 1st number : ";
    cin >> w;
    max=w;
    min=w;
    cout << "Enter 2nd number : ";
    cin >> x; 
    if (x>max)max=x;
    else if(x<min)min=x;     
    cout << "Enter 3rd number : ";
    cin >> y;
    if (y>max)max=y;
    else if(y<min)min=y;
    cout << "Enter 4th number : ";
    cin >> z;
     if (z>max)max=z;
    else if(z<min)min=z;
    
    cout << endl;
   
    if(w==min)cout<<"1st mumber is Minimum" <<endl;
    else if(x==min)cout<<"2nd mumber is Minimum" <<endl;
    else if(y==min)cout<<"3rd mumber is Minimum" <<endl;
    else if(z==min)cout<<"4th mumber is Minimum" <<endl;
    
    if(w==max)cout<<"1st mumber is Maximum" <<endl;
    else if(x==max)cout<<"2nd mumber is Maximum" <<endl;
    else if(y==max)cout<<"3rd mumber is Maximum" <<endl;
    else if(z==max)cout<<"4th mumber is Maximum" <<endl;
    
    cout << "The difference between Min. and Max. is  "<< max-min <<endl;
system ("pause");
return 0;
}
