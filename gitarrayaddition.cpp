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
    int ar[r][c];
    int sum[r][c];
     
    //input 1
    cout<<"enter elements of 1st array: "<<endl;

   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>array[i][j];
            
        }
        
    } 
     cout<<"displaying the 1st array"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<array[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    //input 2
     cout<<"enter elements of 2nd array: "<<endl;

   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>ar[i][j];
            
        }
        
    } 
     cout<<"displaying the 2nd array"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<ar[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    //operation
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            sum[i][j]=0;
            sum[i][j]=array[i][j]+ar[i][j];
            
            
            
        }
       
    }
    
    
   
    
    //output
     cout<<"sum of 2 arrays is: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<sum[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
       
    
    return 0;
}
/* OUTPUT
enter number of columns: 2
enter number of rows: 2
enter elements of 1st array: 
1 2 3 4
displaying the 1st array
1	2	
3	4	
enter elements of 2nd array: 
1 2 3 4
displaying the 2nd array
1	2	
3	4	
sum of 2 arrays is: 
2	4	
6	8	*/
    
