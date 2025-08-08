//majority element
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// #include<string>
// using namespace std;
// void majorityelement(vector<int>nums){
//     unordered_map<int,int>m;
//     for (int i = 0; i < nums.size(); i++)
//     {
//        if (m.count(nums[i]))
//        {
//         m[nums[i]]++;
//        }else{
//         m[nums[i]]=1;
//        }
       
//     }
//     for ( pair<int,int>p:m)
//     {
//         if (p.second>nums.size()/3)
//         {
//             cout<<p.first<<" ";
//         }
        
//     }
    
// }
// int main(){
//     vector<int>nums={1,3,2,5,1,3,15,1};
//     vector<int>nums2={1,2};
//     majorityelement(nums2);
// }

//valid anagram
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// #include<string>
// using namespace std;
// bool validanagram(string s,string t){
//     if (s.size()!=t.size())
//     {
//        return false;
//     }

//     unordered_map<char,int>m;
    
    
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (m.count(s[i]))
//         {
//            m[s[i]]++;
//         }else{
//             m[s[i]]=1;
//         }   
//     }
//     for (int i = 0; i < t.size(); i++)
//     {
//         if (m.count(t[i]))
//         {
//             m[t[i]]--;
//             if (m[t[i]]==0)
//             {
//               m.erase(t[i]); 
//             }
            
//         }else{
//             return false;
//         }
        
//     }
//     return m.size()==0;
// }
// int main(){
//     string s="race";
//     string t="care";
//    cout<< validanagram(s,t)<<endl; 
// }


//count distinct
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// #include<string>
// using namespace std;
// int countdistinct(vector<int>arr){
//     unordered_set<int>s;
//     for(int i=0;i<arr.size();i++){
//         s.insert(arr[i]);
//     }
//     return s.size();
// }
// int main(){
//     vector<int>arr={4,3,2,5,6,7,3,4,2,1};
//     cout<<"count= "<<countdistinct(arr)<<endl;
// }


//union and intersection
//  #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// #include<string>
// using namespace std;
// void printunion(vector<int>arr,vector<int>arr2){
//     unordered_set<int>s;
//     for(int el:arr){
//         s.insert(el);
//     }
//     for(int el:arr2){
//         s.insert(el);
//     }
//     cout<<"union :";
//     for(int el:s){
//        cout<<el<<",";
//     }
//     cout<<endl;
// }
// void printintersection(vector<int>arr,vector<int>arr2){
//     unordered_set<int>s;
//     for(int el:arr){
//         s.insert(el);
//     }
//      cout<<"intersection :";
//     for(int el:arr2){
//         if (s.find(el)!=s.end())
//         {
//            cout<<el<<",";
//            s.erase(el);
//         }
        
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>arr={7,3,9};
//     vector<int>arr2={6,3,9,2,9,4};
//     printunion(arr,arr2);
//     printintersection(arr,arr2);
// }


// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<unordered_set>
// #include<string>
// using namespace std;
// void printitinerary(unordered_map<string,string>tickets){
//     unordered_set<string>to;
//     for(pair<string,string>ticket:tickets){
//         to.insert(ticket.second);
//     }
//     string start="";
//      for(pair<string,string>ticket:tickets){
//         if (to.find(ticket.first)!=to.end())
//         {
//            start=ticket.first;
//         }   
//      }
//      //plan trip
//      cout<<start<<"->";
//      while(tickets.count(start)){
//         cout<<tickets[start]<<"->";
//         start=tickets[start];
//      }
//      cout<<"destination\n";
// }
// int main(){
//     unordered_map<string,string>tickets;
//     tickets["chhennai"]="bengaluru";
//     tickets["mumbai"]="delhi";
//     tickets["goa"]="chennai";
//     tickets["delhi"]="goa";
//     printitinerary(tickets);
    
// }

//largest subarray with sum 0
// #include<iostream>
// #include<unordered_map>
// #include<unordered_set>
// #include<vector>
// using namespace std;
// int largestsubwith0sum(vector<int>arr){
//    unordered_map<int,int>m;
//    int sum=0;
//    int ans=0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//       sum+=arr[i];
//       if (m.count(sum))
//       {
//         int currlen=i-m[sum];
//         ans=max(ans,currlen);
//       }else{
//          m[sum]=i;
//       }
      
//    }
//    return ans;
// }
// int main(){
//    vector<int>arr={15,-2,2,-8,1,7,10};
//    cout<<"largest subarray with sum 0: "<<largestsubwith0sum(arr)<<endl;
// }

//subarray sum equals k
#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;
int subarrwithsumk(vector<int>arr,int k){
   unordered_map<int,int>m;
   m[0]=1;
   int sum=0;
   int ans=0;
   for (int i = 0; i < arr.size(); i++)
   {
      sum+=arr[i];
      if (m.count(sum-k))
      {
         ans+=m[sum-k];
      }
      if (m.count(sum))
      {
         m[sum]++;
      }else{
         m[sum]=1;
      }
      
   }
   return ans;
}
int main(){
   vector<int>arr={10,2,-2,-20,10};
   int k=-10;
   cout<<"subarray with sum k: "<<subarrwithsumk(arr,k);

}