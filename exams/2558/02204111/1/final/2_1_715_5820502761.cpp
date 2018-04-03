#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
            int a,k,l,i,j,g,e;
            cout<<"Size of matrix: ";
            cin>>a;
            if(a<2)
            break;
            int m[a][a];
            cout<<"value:\n";
            for(i=0;i<a;i++)
            {
                            for(j=0;j<a;j++)
                            cin>>m[i][j];
            }
            cout<<endl;
            cout<<"sub-matrix :\n";
                
            for(i=0;i<a;i++)
            {
                            
                           if(i!=g)
                            {
                                    
                                    for(j=0;j<a;j++)
                                    {
                                    if(j!=e){
                                    cout<<"|";
                                    cout<<"|"<<m[i][j]; }
                                    }
                                    e++;
                            }
                             g++;       
                                    cout<<"|\n"<<"|"<<endl<<"------\n"; 
                            
            }
            
    }
    cout<<"Error!! no sub matrix\n";
    system("pause");
    return 0;
}
