//BUBBLE SORT
/*#include<iostream>
using namespace std;
void print(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void bubblesort(int *arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    print(arr,n);
}
int main(){
    int arr[5]={5,4,1,3,2};
    bubblesort(arr,5);
}*/

//SELECTION SORT
/*#include<iostream>
using namespace std;
void printarr(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minidx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minidx])
            {
                minidx=j;
            }
            
        }
        swap(arr[i],arr[minidx]);
    }
    printarr(arr,n);
}
int main(){
    int arr[5]={5,4,1,3,2};
    selectionsort(arr,5);
    return 0;
}*/

//INSERTION SORT
/*#include<iostream>
using namespace std;
void printarr(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void insertionsort(int *arr,int n){
    for (int i = 1; i < n; i++)
    {
       int curr=arr[i];
       int prev=i-1;
       while (prev>=0 && arr[prev]>curr)
       {
        swap(arr[prev],arr[prev+1]);
        prev--;
       }
       arr[prev+1]=curr;
    }
   printarr(arr,n); 
}
int main(){
    int arr[5]={5,4,1,3,2};
    insertionsort(arr,5);
    return 0;
}*/

//COUNTING SORT
/*#include<iostream>
#include<limits.h>
using namespace std;
void printarr(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void countsort(int arr[], int n) {
    int range = INT_MIN;
    for(int i=0; i<n; i++) {
        range = max(range, arr[i]);
    }

    int freqArr[100001];
    for(int i=0; i<n; i++) {
        freqArr[arr[i]]++;
    }

    for(int i=0; i<range; i++) {
        while(freqArr[i] > 0) {
            arr[i] = i;
            freqArr[i]--;
        }
    }

    printarr(arr, n);
}

int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    countsort(arr,8);
    return 0;
}*/

//practice question
/*#include<iostream>
using namespace std;
void printarr(char *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}
void insertionsort(char arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    printarr(arr,n);
}
   
int main(){
    char arr[]={'f', 'b', 'a', 'e', 'c', 'd'};
    int n=sizeof(arr)/sizeof(char);
    insertionsort(arr,n);
}*/

#include<iostream>
#include<algorithm>
using namespace std;
void printarr(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
     printarr(arr,n);
    sort(arr,arr+n,greater<int>());
     printarr(arr,n);
   
}
