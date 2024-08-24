//Ishaan Kukade
 //23070123062
#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int i,j,a,b,r,c,k,m,n;
    cout<<"enter number of columns: ";
    cin>>c;
    cout<<"enter number of rows: ";
    cin>>r;
    
    int array[r][c];
     
    //input 1
    cout<<"enter elements of array: "<<endl;

   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>array[i][j];
            
        }
        
    }
   
    
    //output
     cout<<"displaying the array"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<array[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
       
    
    return 0;
}
/*
OUTPUT
enter number of columns: 2
enter number of rows: 2
enter elements of array: 
1 2 3 4
displaying the array
1	2	
3	4	
*/
    
    
