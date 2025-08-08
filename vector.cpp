// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int *arr=new int[size];//dynamic memory allocation
//     int x=1;
//     for (int i = 0; i <size; i++)
//     {
//         arr[i]=x;
//         cout<<arr[i]<<" ";
//         x++;
//     }
//     cout<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int* func(){
//     int *ptr=new int;
//     *ptr=1200;
//     cout<<*ptr<<endl;
//     return ptr;
// }
// int main(){
//     int *x=func();
//     cout<<*x<<endl;
//    //func();
// }

// 2d vector
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"enter rows:"<<endl;
//     cin>>rows;
//     cout<<"enter cols:"<<endl;
//     cin>>cols;
//     int **matrix=new int*[rows];
//     for (int i = 0; i < rows; i++)
//     {
//         matrix[i]=new int[cols];
//     } 
//     //data store
//     int x=1;
//     for (int  i = 0; i <rows; i++)
//     {
//         for (int j = 0; j < cols;j++)
//         {
//             matrix[i][j]=x++;
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//    //  cout<<matrix[2][2]<<endl;
//    //  cout<<*(*(matrix+2)+2);
//    return 0; 
// }


// #include<iostream>
// #include<vector>
//  using namespace std;
//  int main(){
//     vector<int> vec={1,2,3,4,5};
//     // for (int i = 0; i < vec.size(); i++)
//     // {
//     //      cout<<vec[i]<<" ";    
//     // }
//     cout<<vec.size()<<" "<<vec.capacity()<<endl;
//     vec.push_back(6);//for add extra element
//     cout<<vec.size()<<" "<<vec.capacity()<<endl;
//     vec.pop_back();//for delete
//     cout<<vec.size()<<" "<<vec.capacity()<<endl;
//     return 0; 
//  }

///par sum
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> pairsum(vector<int>arr,int target){
//     int st=0,end=arr.size()-1;
//     int currsum=0;
//     vector<int>ans;
//     while(st<end){
//         currsum=arr[st]+arr[end];
//         if (currsum==target)
//         {
//            ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }else if (currsum>target)
//         {
//             end--;
//         }else{
//             st++;
//         }  
//     }
//     return ans;
// }
// int main(){
//     vector<int>vec={2,7,11,15};
//     int target=18;
//     //pairsum(vec,target);
//     vector<int>ans=pairsum(vec,target);
//     cout<<ans[0]<<","<<ans[1];
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix={{1,2,3},{4},{7,8}};
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j<matrix[i].size() ; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//prectise question
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     for (int  i = 0; i < 5; i++)
//     {
//         v.push_back(i);
//     }
//     cout<<v.size()<<" "<<v.capacity();
// }