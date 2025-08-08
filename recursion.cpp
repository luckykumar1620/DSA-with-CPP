//factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
    
// }
// int main(){
//    cout<< factorial(5);
// }

//decreasing order
// #include<iostream>
// using namespace std;
// int print(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     cout<<n<<" ";
//     return print(n-1);
    
// }
// int main(){
//   print(5);
// }


//sum of n natural number
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if (n==1)
//     {
//         return 1;
//     }
    
//     return n+sum(n-1);
    
// }
// int main(){
//   cout<<sum(5);
// }

//fibonacci
// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if (n==0||n==1)
//     {
//         return n;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
    
// }
// int main(){
//   cout<<fibonacci(5);
// }

//check if array sorted
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int n,int i){
//     if (i==n-1)
//     {
//       return true ;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     return isSorted(arr,n,i+1);
    
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//  cout<<isSorted(arr,5,0);
// }

//first occurence
// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurrence(vector<int>arr,int i,int target){
//     if (arr.size()==i)
//     {
//         return -1;
//     }
//     if(arr[i]==target){
//     return i;
//     }
//     return firstOccurrence(arr,i+1,target);
// }
// int main(){
//     vector<int>arr={1,2,3,3,4};
//     cout<<firstOccurrence(arr,0,3);
// }

//last occurence
#include<iostream>
#include<vector>
using namespace std;
int lastOccurrence(vector<int>arr,int target,int i){
    if (i==0)
    {
        return -1;
    }
    // int idxfound=lastOccurrence(arr,target,i+1);
    // if(idxfound==-1&&arr[i]==target){
    // return i;
    // }
    //return idxfound;
    if(arr[i]==target){
        return i;
    }
    return lastOccurrence(arr,target,i-1);
}
int main(){
    vector<int>arr={1,2,3,4,4};
    int k=arr.size()-1;
    cout<<lastOccurrence(arr,4,k);
}

//print x to the power n
// #include<iostream>
// #include<vector>
// using namespace std;
// int pow(int x,int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     int halfpow=pow(x,n/2);
//     int halfpowsquare=halfpow*halfpow;
//     if(n%2!=0){
//         return x*halfpowsquare;
//     }
//     return halfpowsquare;
// }
// int main(){
//     cout<<pow(2,11);
// }

//tiling problem
// #include<iostream>
// using namespace std;
// int tilingproblem(int n){
//     if (n==0 ||n==1)
//     {
//        return 1;
//     }
//     // int ans1=tilingproblem(n-1);
//     // int ans2=tilingproblem(n-2);
//     return tilingproblem(n-1)+tilingproblem(n-2);
// }
// int main(){
//     int n=5;
//     cout<<tilingproblem(n);
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// void removeduplicate(string str,string ans,int i,int map[26]){
//     if (i==str.size())
//     {
//         cout<<ans<<endl;
//         return ;
//     }
//    // char ch=str[i];
//     int mapidx=(int)(str[i]-'a');
//     if (map[mapidx])
//     {
//         removeduplicate(str,ans,i+1,map);//dulpicate
//     }
//     else
//     {
//         map[mapidx]=true;
//         removeduplicate(str,ans+str[i],i+1,map);
//     }
    
// }
// int main(){
// string str="appnnacollege";
// string ans="";
// int map[26]={false};
// removeduplicate(str,ans,0,map);
// return 0;
// }

//friend pairing
// #include<iostream>
// using namespace std;
// int friendpairing(int n){
//     if (n==1||n==2)
//     {
//         return n;
//     }
//     return friendpairing(n-1)+friendpairing(n-2)*(n-1);
    
// }
// int main(){
//     int n=5;
//    cout<<"ans: "<<friendpairing(n);
// }

//binary string problem
// #include<iostream>
// using namespace std;
// void binaryspace(int n,int lastplace,string ans){
//     if (n==0)
//     {
//         cout<<"ans: "<<ans<<endl;
//         return;
//     }
//     if (lastplace!=1)
//     {
//        binaryspace(n-1,0,ans+'0');
//        binaryspace(n-1,1,ans+'1');
//     }else{
//         binaryspace(n-1,0,ans+'0');
//     }    
// }
// int main(){
//     int n=3;
//     string ans="";
//     binaryspace(n,0,ans);
// }

//divide and conquer
//merge sort
// #include<iostream>
// #include<vector>
// using namespace std;
// void printarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// void merge(int arr[],int si,int mid,int ei){
//     vector<int>temp;
//     int i=si;
//     int j=mid+1;
//     while(i<=mid&&j<=ei){
//         if (arr[i]<=arr[j])
//         {
//             temp.push_back(arr[i++]);
//         }else{
//             temp.push_back(arr[j++]);
//         }
        
//     }while(i<=mid){
//         temp.push_back(arr[i++]);
//     }
//     while (j<=ei)
//     {
//         temp.push_back(arr[j++]);
//     }
//     for (int idx=si,x=0; idx <= ei; idx++)
//     {
//         arr[idx]=temp[x++];
//     }
// }

// void mergesort(int arr[],int si ,int ei){
//     if (si>=ei)
//     {
//         return ;
//     }
//     int mid=si+(ei-si)/2;
//     mergesort(arr,si,mid);
//     mergesort(arr,mid+1,ei);
//     merge(arr,si,mid,ei);
// }
// int main(){
//     int arr[6]={6,3,7,5,2,4};
//     int n=6;
//     mergesort(arr,0,n-1);
//     printarray(arr,n);
//     return 0;
// }


//quick sort
// #include<iostream>
// using namespace std;
// void printarr(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }  
// }
// int partition(int arr[],int si,int ei){
//     int i=si-1;
//     int pivot=arr[ei];
//     for (int j = si; j < ei; j++)
//     {
//         if (arr[j]<=pivot)
//         {
//             i++;
//             swap(arr[i],arr[j]);
//         }     
//     }
//     i++;
//     swap(arr[i],arr[ei]);
//     return i;
// }
// void quicksort(int arr[],int si,int ei){
//     if (si>=ei)
//     {
//        return ;
//     }
//     int pivotidx=partition(arr,si,ei);
//     quicksort(arr,si,pivotidx-1);
//     quicksort(arr,pivotidx+1,ei);
// }
// int main(){
//     int arr[6]={6,3,7,5,2,4};
//     int n=6;
//     quicksort(arr,0,n-1);
//     printarr(arr,n);
// }

// #include<iostream>
// using namespace std;
// int search(int arr[],int si,int ei,int target){
//     if (si>ei)
//     {
//         return -1;
//     }
//     int mid=si+(ei-si)/2;
//     if (arr[mid]==target)
//     {
//         return mid;
//     }
    
//     if(arr[si]<=arr[mid]){
//     if (arr[si]<=target&&target<=arr[mid])
//     {
//       return search(arr,si,mid-1,target);  
//     }else{
//         return search(arr,mid+1,ei,target);
//     }
//     }
//     else{
//         if (arr[mid]<=target&&target<=arr[ei])
//         {
//            return search(arr,mid+1,ei,target);
//         }else{
//             return search(arr,si,mid-1,target);
//         }
        
//     }
// }
// int main(){
//     int arr[7]={4,5,6,7,0,1,2};
//     int n=7;
//     cout<<"idx: "<<search(arr,0,n-1,2);
// }

//assignment question 3
// #include<iostream>
// using namespace std;
// int countsubstring(string str,int i,int j,int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     if (n<=0)
//     {
//         return 0;
//     }
//     int res=countsubstring(str,i+1,j,n-1)+countsubstring(str,i,j-1,n-1)-countsubstring(str,i+1,j-1,n-2);
//     if (str[i]==str[j])
//     {
//        res++;
//     }
//     return res;
// }
// int main(){
// string str="abcab";
// int n=str.size();
// cout<<countsubstring(str,0,n-1,n);
// }

//tower of hanoi
// #include<iostream>
// #include<string>
// using namespace std;
// void toh(int n,string src,string aux,string dest){
//     if (n==1)
//     {
//         cout<<"moving disk "<<n<<" from "<<src<<" to "<<dest<<endl;
//     }
//     toh(n-1,src,dest,aux);
//     cout<<"moving disk "<<n<<"from"<<src<<"to"<<aux<<endl;
//     toh(n-1,aux,src,dest);
// }
// int main(){
//     int n=4;
//     toh(n,"a","b","c");
// }



















