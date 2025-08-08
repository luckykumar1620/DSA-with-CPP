/*#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j  = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
   for (int i = 0; i < 3; i++)
    {
        for (int j  = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}*/

//SPIRAL MATRIX
/*#include<iostream>
using namespace std;
 

void spiralmatrix(int mat[][4],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol){
    //top
    for (int j = scol; j <= ecol; j++)
    {
        cout<<mat[srow][j]<<" ";
    }
    //right
    for (int i = srow+1; i <= erow; i++)
    {
        cout<<mat[i][ecol]<<" ";
    }
    //buttom
    for (int j = ecol-1; j >= scol; j--)
    {
         if (srow==erow) 
    {
    break;
    }    
        cout<<mat[erow][j]<<" ";
    }
    //left
    for (int i = erow-1; i >= srow+1; i--)
    {
        if (scol==ecol) 
    {
    break;
    }  
        cout<<mat[i][scol]<<" ";
    }
    srow++;scol++;
    erow--;ecol--;
    }
    cout<<endl;
}

int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralmatrix(matrix,4,4);
    int matrix2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    spiralmatrix(matrix2,3,4);
    return 0;
}*/

//DIAGONAL SUM
/*#include<iostream>
using namespace std;
void diagonalsum(int mat[][4],int n,int m){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       for (int j  = 0; j < m; j++)
       {
        if (i==j)
        {
             sum+=mat[i][j];
        }
        
       
       }
       
    }
    cout<<"diagonal sum="<<sum<<endl;
}
int main(){
     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     diagonalsum(matrix,4,4);
     return 0;
}*/

//2nd method
/*#include<iostream>
using namespace std; 
void diagonalsum2(int mat[][4],int n,int m){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       for (int j  = 0; j < n; j++) 
       {
        if (i==j)
        {
             sum+=mat[i][j];
        }else if(j==n-i-1){
            sum+=mat[i][j];
        }
        
            
       }
      //cout<<"sum of diagonal="<<sum; 
    }
    cout<<"sum of diagonal="<<sum; 
}
int main(){
     int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     diagonalsum2(matrix,4,4);
     return 0;
}*/

/*#include<iostream>
using namespace std;
void diagonalsum3(int mat[][4],int n){
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum+=mat[i][i];
        if (i!=n-i-1)
        {
            sum+=mat[i][n-i-1];
        }
        
    }
    cout<<"sum of diagonal="<<sum;
}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     diagonalsum3(matrix,4);
}*/

//search in sorted matrix
#include<iostream>
using namespace std;
int searchmatrix(int mat[][3],int n,int m,int key){
    
    int count=0;
   for(int i=0;i<n;i++){
    for (int j = 0; j < m; i++)
    {
        if (mat[i][j]==key)
        {
           count++;
        }
        
    }
    return count;
   }
}

int main(){
    int mat[2][3]={{4,7,8},{8,8,7}};
    cout<<searchmatrix(mat,2,3,7);
}
