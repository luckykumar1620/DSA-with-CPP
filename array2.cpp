//subarray
// #include<iostream>
// using namespace std;
// void printarr(int*arr,int n){
//     for (int start  = 0; start<n; start++)
//     {
//         for (int end = start; end <= n; end++)
//         {
//           // cout<<"("<<start<<","<<end<<")";
//          for (int i = start; i <end; i++)
//          {
//            cout<<arr[i];
           
//          }
//          cout<<",";
//         }
//          cout<<endl;
//     }
   
    
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     printarr(arr,n);
//     return 0;
// }

//max of subarray
#include<iostream>
#include<limits.h>
using namespace std;
int maxsum=INT_MIN;
void printarr(int *arr,int n){
    for (int start = 0; start<n;start++)
    {
        for (int end = start; end < n; end++)
        {
            int currsum=0;
            for (int i = start; i <=end; i++)
            {
               currsum+=arr[i];
            }
            cout<<currsum<<",";
           maxsum=max(maxsum,currsum);
        }
        cout<<endl;
    }
   cout<<"maximum subarray sum="<<maxsum; 
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
    return 0;
}

//2nd method
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int maxsum=INT_MIN;
// //int maxsum=INT_MIN;
// void maxsubarrsum2(int *arr,int n)
// {
    
//     for (int start = 0; start < n; start++)   
//     {
//         int currsum=0;
//         for (int end = start; end < n; end++)
//         {
//            currsum+=arr[end];
//             maxsum=max(currsum,maxsum);
//         }
//         cout<<currsum; 
//     }
//     cout<<endl;
//     cout<<"maximum subarray sum="<<maxsum;
//     //return maxsum;
// }
// int main(){
//      int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//     int n=sizeof(arr)/sizeof(int);
//     maxsubarrsum2(arr,n);
//     return 0;
// }

//kadane's algorithm
/*#include<iostream>
#include<limits.h>
using namespace std;
int maxsum=INT_MIN;
int maxsubarrsum3(int *arr,int n){
    int currsum=0;
    for (int i = 0; i < n; i++)
    {
        currsum+=arr[i];
        maxsum=(maxsum,currsum);
    
    if (currsum<0)
    {
        currsum=0;
    }
    }
    cout<<"maximum subarray sum="<<maxsum<<endl;
    return maxsum;
}

int main(){
     int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarrsum3(arr,n);
    return 0;
}*/

//BUY AND SELL STOCKS
// #include<iostream>
// #include<limits.h>
// using namespace std;
// void maxprofit(int *price,int n){
//     int bestbuy[100000]={0};
//      bestbuy[0]=INT_MAX;
//     for (int i = 1; i < n; i++)
//     {
//        bestbuy[i]=min(bestbuy[i-1],price[i-1]);
//        cout<<bestbuy[i]<<",";
//     }
//     cout<<endl;
//     int maxprofit=0;
//     for (int i = 1; i < n; i++)
//     {
//         int currprofit=price[i]-bestbuy[i];
//         maxprofit=max(maxprofit,currprofit); 
//     }
//     cout<<"maximum profit="<<maxprofit;
    
// }
// int main(){
//     int price[]={7,1,5,3,6,4};
//     int n=sizeof(price)/sizeof(int);
//     maxprofit(price,n);
//     return 0;
//     }