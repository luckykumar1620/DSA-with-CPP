#include<iostream>
#include<vector>
using namespace std;
int maxactivities(vector<int>start,vector<int>end){
    cout<<"selecting A0\n";
    int count=1;
    int currendtime=end[0];
    for (int i = 1; i <= start.size(); i++)
    {
        if (start[i]>=currendtime)
        {
            cout<<"selecting A"<<i<<endl;
            count++;
            currendtime=end[i];
        }
        
    }
    return count;
}
int main(){
    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};
    cout<<maxactivities(start,end);
    return 0;
}