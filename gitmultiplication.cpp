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
   
    
    
    int array[c][r];
    int ar[m][n];
    int sum[4][4];
    //input 1
    cout<<"enter elements of array: "<<endl;

   
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>array[i][j];
            
        }
        
    }
    cout<<"displaying the 1st array"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<array[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
    //input 2
    cout<<"enter number of columns: ";
    cin>>m;
    cout<<"enter number of rows: ";
    cin>>n;
    
    
    cout<<"enter elements of second array: "<<endl;

   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ar[i][j];
            
        }
        
    }
    cout<<"displaying the 2nd array"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<ar[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
    //operation
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            sum[i][j]=0;

            for(k=0;k<r;k++)
            {
                sum[i][j]+=array[i][k]*ar[k][j];
            }
            
            
            
            
        }
       
    }
    
    //output
     cout<<"displaying the product array"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<sum[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
    
       
    
    return 0;
}
/*output
enter number of columns: 2
enter number of rows: 2
enter elements of array: 
1 2 3 4
displaying the 1st array
1	2	
3	4	
enter number of columns: 1 2 3 4
enter number of rows: enter elements of second array: 
displaying the 2nd array
3	4	
4	3	
displaying the product array
25	24	
25	24	*/

