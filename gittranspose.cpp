//Ishaan Kukade
//23070123062
#include <iostream>
using namespace std;
int main() 
{
    int c1,r1;
    cout<<" Enter the number of rows for matrix:"<<endl;
    cin>>r1;
    cout<<" Enter the number of columns for matrix:"<<endl;
    cin>>c1;
   
    int m[r1][c1], tm[c1][r1];  

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m[i][j];  
            tm[j][i] = m[i][j];  
        }
    }
   

    cout << "Transposed matrix is:" << endl;
    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            cout << tm[i][j] << " ";  
        }
        cout << endl;
    }

    return 0;
}
     /*
     OUTPUT
     Enter the number of rows for matrix:
2
 Enter the number of columns for matrix:
2
Enter the elements of the matrix:
1 2 3 4
Transposed matrix is:
1 3 
2 4 
*/
    
    