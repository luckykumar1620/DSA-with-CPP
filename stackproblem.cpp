// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// void stockspanproblem(vector<int>stock,vector<int>span){
//     stack<int>s;
//     s.push(0);
//     span[0]=1;
//     for (int i = 1; i < stock.size(); i++)
//     {
//         int currprice=stock[i];
//         while (!s.empty()&& currprice>=stock[s.top()])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//            span[i]=i+1;
//         }else{
//             int prevhigh=s.top();
//             span[i]=i-prevhigh;
//         }
//     }
//     for (int i = 0; i < span.size(); i++)
//     {
//         cout<<span[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>stock={100,80,60,70,60,85,100};
//     vector<int>span={0,0,0,0,0,0,0};
//     stockspanproblem(stock,span);
//     return 0;
// }

// NEXT GREATER ELEMENT
//  #include<iostream>
//  #include<vector>
//  #include<stack>
//  using namespace std;
//   void nextGreatElem(vector<int>arr,vector<int> ans){
//      stack<int>s;
//      int idx=arr.size()-1;
//      ans[idx]=-1;
//      s.push(arr[idx]);
//      for ( idx = idx-1; idx >= 0; idx--)
//      {
//          int curr=arr[idx];
//          while (!s.empty()&& curr>=s.top())
//          {
//              s.pop();
//          }
//          if (s.empty())
//          {
//              ans[idx]=-1;
//          }else{
//              ans[idx]=s.top();
//          }
//          s.push(curr);
//      }
//      for (int i = 0; i < ans.size(); i++)
//      {
//          cout<<ans[i]<<" ";
//      }
//      cout<<endl;
//   }
//   int main(){
//      vector<int>arr={6,8,0,1,3};
//      vector<int>ans={0,0,0,0,0};
//      nextGreatElem(arr,ans);
//   }

// VALID PARENTHESIS
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
// bool isvalid(string str)
// {
//     stack<char> s;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char ch = str[i];
//         if (ch == '(' || ch == '[' || ch == '{')
//         {
//             s.push(ch);
//         }
//         else
//         {
//             if (s.empty())
//             {
//                 return false;
//             }
//             int top = s.top();
//             if ((top == '(' && ch == ')') ||
//                 (top == '[' && ch == ']') ||
//                 (top == '{' && ch == '}'))
//             {
//                 s.pop();
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     return s.empty();
// }
// int main()
// {
//     string str1 = {"([{)}]"}; // invalid
//     string str2 = {"({[]})"}; // valid
//     cout << isvalid(str1) << endl;
//     cout << isvalid(str2) << endl;
// }

//duplicate parenthesis
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// bool isduplicate(string str){
//     stack<char>s;
//     for (int i = 0; i < str.size(); i++)
//     {
//        char ch=str[i];
//        if (ch!=')')
//        {
//         s.push(ch);
//        }else{
//         if (s.top()=='(')
//         {
//            return true;
//         }
//         while(s.top()!='('){
//             s.pop();
//         }
//         s.pop();
//        }
       
//     }
//     return false;
// }
// int main(){
//     string str1="((a+b))";
//     string str2="((a+b)+(c+d))";
//     cout<<isduplicate(str1)<<endl;
//     cout<<isduplicate(str2);
//     }

//MAX AREA IN HISTOGRAM
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int maxAreahistogram(vector<int>height){
    int n=height.size()-1;
    vector<int>nsl;
    vector<int>nsr;
    stack<int>s;//
    //next smaller left
    nsl[0]=-1;
    s.push(0);
    for (int i = 1; i < height.size()-1; i++)
    {
        int curr=height[i];
        while (!s.empty()&&curr<=s.top())
        {
            s.pop();
        }
       if (s.empty())
       {
        nsl[i]=-1;
       }else{
        nsl[i]=s.top();
       }
       s.push(i); 
    }
    while(!s.empty()){
        s.pop();
    }

    //next smaller right
    s.push(n-1);
    nsr[n-1]=n;
    for (int i = n-2; i >=0 ; i--)
    {
        int curr=height[i];
        while (!s.empty()&&curr<=height[s.top()])
        {
           s.pop();
        }
        if (s.empty())
        {
            nsr[i]=n;
        }else{
            nsr[i]=s.top();
        }
       s.push(i); 
    }
    void printarr(vector<int>vec){
        for (int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

    int maxArea=0;
    for (int i = 0; i < n; i++)
    {
        int ht=height[i];
        int width=nsr[i]-nsl[i]-1;
        int area=ht*width;
        maxArea=max(area,maxArea);
    }
    cout<<"max area of histogram= "<<maxArea
    
}

