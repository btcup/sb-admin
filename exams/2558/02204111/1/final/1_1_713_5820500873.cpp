#include<iostream>
using namespace std;

int main()
{
    int N , i , j;
    cout << "Enter N : ";
    cin >> N;
    if(N <= 9)
    {
         int matrix[N][N];
         char menu;
         for(i = 0 ; i < N ; i++)
               for(j = 0 ; j < N ; j++) cin >> matrix[i][j];
         cout << "Choose(U:Upper,L:Lower,D:Diagonal) : ";
         cin >> menu;
         if(menu == 'U')
          {
                 for(i = 0 ; i < N ; i++)
                       for(j = i+1 ; j < N ; j++) matrix[j][i] = 0;
                 for(i = 0 ; i < N ; i++)
                 {
                       for(j = 0 ; j < N ; j++) cout << matrix[i][j] <<" ";
                       cout << endl;
                 }
         }
         else if(menu == 'L')
         {
                 for(i = 0 ; i < N ; i++)
                       for(j = i+1 ; j < N ; j++) matrix[i][j] = 0;
                 for(i = 0 ; i < N ; i++)
                 {
                       for(j = 0 ; j < N ; j++) cout << matrix[i][j] <<" ";
                       cout << endl;
                 }
         }
         else if(menu == 'D')
         {
               for(i = 0 ; i < N ; i++)
                       for(j = i+1 ; j < N ; j++) matrix[j][i] = 0;
               for(i = 0 ; i < N ; i++)
                       for(j = i+1 ; j < N ; j++) matrix[i][j] = 0;
               for(i = 0 ; i < N ; i++)
                 {
                       for(j = 0 ; j < N ; j++) cout << matrix[i][j] <<" ";
                       cout << endl;
                 }
         }
    }
    system("pause");
    return 0;
}
