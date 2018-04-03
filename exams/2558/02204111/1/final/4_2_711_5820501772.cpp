#include <iostream>
using namespace std ;

int main(){
    int a[]={800,500,2000,600};
    int b[]={1200,700,1500,900};
    int c[]={900,300,1800,500};
    int d[]={700,0,2100,800};
    int e[]={1000,400,1400,1100};
    int f,g,h,i,j ;
    cout<<"Give the number of passengers of day 1: " ; cout<<a[0] <<" " <<a[1]<< " " <<a[2]<< " "<<a[3]<<endl;
    cout<<"Give the number of passengers of day 2: " ; cout<<b[0] <<" "<<b[1] << "  "<<b[2]<< " "<<b[3]<<endl;
    cout<<"Give the number of passengers of day 3: " ; cout<<c[0]<< " " <<c[1] << " "<<c[2] << " "<<c[3]<<endl;
    cout<<"Give the number of passengers of day 4: " ; cout<<d[0]<< " "<<d[1]<< " "<<d[2]<< " "<<d[3]<<endl;
    cout<<"Give the number of passengers of day 5: " ; cout<<e[0]<< " "<<e[1]<< " "<<e[2]<< " "<<e[3]<<endl;
    f = a[0]+b[0]+c[0]+d[0]+e[0] ;
    cout<<"Total passenger for air asia is :"<<f<<endl;
  
    system("pause");
    return 0 ;
}
    
