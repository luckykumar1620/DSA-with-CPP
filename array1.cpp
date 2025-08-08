//creating an array
/*#include<iostream>
using namespace std;
int main(){
    int a[50];
   int a[50]={1,2,3};
   int a[]={1,2,3};
   cout<<a[0]<<endl;
   cout<<a[1]<<endl;
   cout<<a[2]<<endl;
   int n=sizeof(a)/sizeof(int);
   cout<<sizeof(a)<<endl;
   cout<<n;
   return 0;
}*/

//input and output
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int marks[n];
    //int n=sizeof(marks)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<marks[i]<<" ";
    }
    
}*/

//find largest in array
/*#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,3,9,12};
    int n=sizeof(a)/sizeof(int);
    int max=a[0];
    int min=a[0];
    for (int  i = 0; i < n; i++)
    {
       if (a[i]>max)
       {
        max=a[i];
       }
       
    }
    for (int  i = 0; i < n; i++)
    {
       if (a[i]<min)
       {
        min=a[i];
       }
       
    }
    cout<<"largest = "<<max<<endl;
    cout<<"smallest = "<<min<<endl;
    return -1;
}*/

//array passed by reference
/*#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<*(arr)<<endl;//arr[0]
    cout<<*(arr+1)<<endl;//arr[1]
    cout<<*(arr+2)<<endl;//arr[2]
    cout<<*(arr+3)<<endl;//arr[3]
    return 0;
}*/

/*#include<iostream>
using namespace std;
//void func1(int arr[]){
  //  cout<<arr[0]<<endl;
    //arr[0]=1000;
//}
//void func2(int *ptr){
  //  ptr[0]=1000;
//}

void printarray(int arr[],int n){
   
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
     

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
   // func2(arr);
  //  cout<<arr[0]<<endl;
   printarray(arr,n);
   return 0;
}*/

//linear search
/*#include<iostream>
using namespace std;
int linearsearch(int *ptr,int size,int key){
        for (int i = 0; i < size; i++)
        {
           if (ptr[i]==key)
           {
            return i;
           }
           
        }
      return -1;  
}
int main(){
    int arr[]={2,4,6,8,10,12,14};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key= ";
    cin>>key;
    cout<<linearsearch(arr,size,key);
    return 0;

}*/

//reverse an array(with extra space)
/*#include<iostream>
using namespace std;
void printarray(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={3,5,4,7,2};
    int n=sizeof(arr)/sizeof(int);
    
    //WITHOUT EXTRA SPACE
    int start=0,end=n-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
       // int temp;
       // temp=arr[start];
        //arr[start]=arr[end];
       // arr[end]=temp;
        start++;
        end--; 
    }
    

   // int copyarr[n];
   // for (int  i = 0; i <n; i++)
  //  {
    //   int j=n-i-1;
      // copyarr[i]=arr[j];
  //  }
    //for (int  i = 0; i <n; i++){
      //  arr[i]=copyarr[i];
    //}
    printarray(arr,n);  
    return 0;
}*/

//binary search
// #include<iostream>
// using namespace std;
// int binarysearch(int *arr,int n,int key){
//     int st=0,end=n-1;

//     while(st<=end ){
//        int mid=(st+end)/2;
//        if (arr[mid]==key)
//        {
//         return mid;
//        }
//        else if (arr[mid]<key)
//        {
//         st=mid+1;
//        }
//        else
//        {
//          end=mid-1;
//        }     
//     }
//     return -1;
// }
    

// int main(){
//     int arr[]={2,4,6,8,10,12,14,16};
//     int n=sizeof(arr)/sizeof(int);
//     int key=14;
//     cout<<binarysearch(arr,n,key);
  //  return 0;
//}

//array pointer
// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr=&x;
//     int y=20;
//     ptr=&y;
//     cout<<*ptr;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr=&x;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;
//     ptr--;
//     cout<<ptr;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=10;
//     int *ptr=&x;
//     cout<<ptr<<endl;
//     ptr=ptr+3;
//     cout<<ptr<<endl;
//     ptr=ptr-3;
//     cout<<ptr;
// }

#include<iostream>
using namespace std;
void printarray(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*(ptr+i)<<",";
        // cout<<*ptr<<" ";
        // ptr=ptr+1;
    }
    
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    printarray(arr,n);
}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int *ptr1=arr;
//     int *ptr2=arr+3;
//     cout<<(ptr1==arr);
//     return 0;
// }
