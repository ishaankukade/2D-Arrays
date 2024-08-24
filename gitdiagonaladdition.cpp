//Ishaan Kukade
//23070123062
#include<iostream>
#include<string>
using namespace std; 

int main()
{
    int i,j,a,b,r,c,k,m,n,add,radd;
    cout<<"enter number of columns: ";
    cin>>c;
    cout<<"enter number of rows: ";
    cin>>r;
    if(r==c)
    {
        cout<<"diagonal addition possible"<<endl;
    }
    else
    {
        cout<<"diagonal addition not possible"<<endl;
    }
    
    int array[r][c];

    int sum[4][4]; 
    //input 1
    cout<<"enter elements of array: "<<endl;

   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>array[i][j];
            
        }
        
    }
    cout<<"displaying the array"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<array[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    //output 1
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                add+=array[i][j];
            }
        }
    }
    //output 2
    cout<<"addition of diagonal elements is: "<<add<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                if(i+j==r-1)
                {
                    radd+=array[i][j];
                }
            }
        }
    }
    cout<<"reverse diagonal addition is: "<<radd;
}
/*
OUTPUT
enter number of columns: 2
enter number of rows: 2
diagonal addition possible
enter elements of array: 
1 2 3 4
displaying the array
1	2	
3	4	
addition of diagonal elements is: 5
reverse diagonal addition is: 2
*/
    
    
    
    
