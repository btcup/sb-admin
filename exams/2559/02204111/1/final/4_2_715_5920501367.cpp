#include <iostream>
using namespace std;





int main(){
    int i,j,x,y,z,e; double a[x*y][x*y];
    cout<<"Number of student :";
    cin>>x;
    cout<<"Number of subject :";
    cin>>y;
    for(i=1;i<=x;i++){
                     for(j=0;j<y;j++){
                     cout<<"sorce of student"<< i <<":";
                     cin>>a[i][j];         
    }
    }
    cout<<"select graph (1-score,2-max,3-exit): ";
    cin>>z;  
    for(i=1;i<=x;i++)
    {
    if(z='1'){
    cout<<"student"<<i<<endl;
    cout<<"oooooox"<<endl;
    }
    if(z==2){
    cout<<"student"<<i<<endl;
    cout<<"oooooooox"<<endl;
}
}
   system("pause");
    return 0;
    }
