#include <iostream>
using namespace std;
int main()
{
    int A[4][5],i,j,sumaa=0,sum=0,max=0;
    float avg;
    for (i=1 ; i<6 ;i++)
    {
        
        cout << "Give the number of passengers of day "<< i <<" : ";
        for (j=0 ; j<4 ;j++)
        {        
                 cin >> A[j][i-1];
        }
    
    }
    
    for (i=0 ; i<5 ;i++)
        {        
                 sumaa= sumaa+ A[0][i];
        }
    
    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<5 ;j++)
        {
            sum = sum + A[i][j];
        }
    }
    avg = sum/20.0; 
    
    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<5 ;j++)
        {
            if (A[i][j]> max)
               max = A[i][j];
        }
    } 
    
    
    
    cout <<endl;
    cout << "Total passenger for air asia is : " << sumaa<<endl<< endl;
    cout << "The average number of passengers for all days and all flights is : " <<avg<<endl<<     endl;
    cout << "The largest number of passengers is : " << max <<endl<<     endl;

    system ("pause");
    return 0;
}
