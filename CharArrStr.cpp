// #include<iostream>
// using namespace std;
// int main(){
//     char arr[6]={'a','b','c','d','e','\0'};
//     cout<<&arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
    // char ch='f';
    // char ch1='A';
    // int pos=ch-'a';
    
    // cout<<pos+'A'<<endl;
    // cout<<int(ch)<<endl;
    // cout<<int(ch1)<<endl;
    // return 0;
//}

//creation and output
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     // char work[]="hello";
//     // cout<<work<<","<<"length="<<strlen(work)<<endl;
//     // char work[5]="code";
//     // char work1[]="code";
//     char work1[50]="code";
//     cout<<work1;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char word[50];
//    // cin>>word;
//    cin.getline(word,20,'*');
//     cout<<word;
// }

//convert to pper case
// #include<iostream>
// #include<cstring>
// using namespace std;
// void tolower(char word[],int n){
//     for (int  i = 0; i < n; i++)
//     {
//         char ch=word[i];
//         if (ch>='a'&&ch<='z')
//         {
//             continue;
//         }else {
//             word[i]=ch+32;
//         }
        
//     }
//     cout<<word<<endl;
// }
// int main(){
//     char word[]="LOVeLy";
//     tolower(word,strlen(word));
//     return 0;
// }

//lowercase
// #include<iostream>
// #include<cstring>
// using namespace std;
// void toupper(char word[],int n){
//     for (int  i = 0; i < n; i++)
//     {
//         char ch=word[i];
//         if (ch>='a'&&ch<='z')
//         {
//             continue;
//         }else {
//             word[i]=ch-'A'+'a';
//         }
        
//     }
//     cout<<word<<endl;
// }
// int main(){
//     char word[]="al&phaBET";
//     toupper(word,strlen(word));
//     return 0;
// }

//reverse an char array
// #include<iostream>
// #include<cstring>
// using namespace std;
// void reverse(char word[],int n){
//     int st=0;
//     int end=n-1;
//     while (st<end)
//     {
//         swap(word[st++],word[end--]);
//         // st++;
//         // end--;
//     }
//  //cout<<"reverse="<<word;   
// }

// int main(){
//     char word[]="code";
//     reverse(word,strlen(word));
//     cout<<"reverse="<<word;  
//     return 0;
// }

//valid palindrome
// #include<iostream>
// #include<cstring>
// using namespace std;
// bool ispalindrome(char word[],int n){
//     int st=0,end=n-1;
//     while (st<end)
//     {
//         if (word[st]!= word[end])
//         {
//             cout<<"not valid palindrome\n";
//             return false;
//             st++;
//             end--;
//         }
        
//     }
//     cout<<"valid palindrome\n";
//     return true;
// }
// int main(){
//     char word[]="racecar";
//     ispalindrome(word,strlen(word));
//     return 0;
// }

//cstring function
// #include<iostream>
// #include<cstring>
// using namespace std;
// int main(){
//     char str1[10]="lucky";
//      char str2[10]=" kumar";
//      cout<<strcpy(str1,str2)<<endl;

//     // char str1[10]="lucky";
//     //  char str2[10]=" kumar";
//     //  cout<<strcat(str1,str2)<<endl;

//     // char str1[10]="lucky";
//     //  char str2[10]=" kumar";
//     //  cout<<strcmp(str1,str2);
//      return 0;
// }

//string
// #include<iostream>
//  #include<cstring>
//  using namespace std;
//  int main(){
//     // string str1="hello";
//     //  str1="hellosdd";
//     // //cout<<(str1<str2);
//     // cout<<str1;
//     //for input
//     string str;
//     getline(cin,str);
//     cout<<str;
//     return 0;
//  }

//  #include<iostream>
//  #include<cstring>
//  using namespace std;
//  int main(){
//     string str="apna college";
//     for (int i = 0; i < str.length(); i++)
//     {
//         cout<<str[i];
//     }
//     cout<<endl;
//     return 0;

//  }

//2nd method
// #include<iostream>
//   #include<cstring>
//   using namespace std;
//   int main(){
//     string str="apna college";
//     for(char ch:str){
//         cout<<ch;
//     }
//     cout<<endl;
//     return 0;
//   }

//member function
// #include<iostream>
//   #include<cstring>
//   using namespace std;
//   int main(){
//     string str="apna college";
//     cout<<str.length()<<endl;
//     cout<<str.at(5)<<endl;
//     cout<<str.substr(5,5)<<endl;
//     cout<<str.find(str)<<endl;
//     return 0;
//   }

//vallid anagram
// #include<iostream>
//    #include<cstring>
//    using namespace std;
//    bool isanagram(string str1,string str2){
//     if (str1.length()!=str2.length())
//     {
//         cout<<"not valid anagram";
//         return false;
//     }
//     int count[26]={0};
//     for (int i = 0; i < str1.length(); i++)
//     {
//         int idx=str1[i]-'a';
//         count [idx]++;
//     }
//     for (int i = 0; i < str2.length(); i++)
//     {
//         int idx=str2[i]-'a';
//         if (count[idx]==0)
//         {
//            cout<<"not valid anagram";
//            return false;
//         }
//         count[idx]--;
//     }
//     cout<<"valid anagram";
//     return true;
//    }
//    int main(){
//     string str1="gram";
//     string str2="nagaram";
//     isanagram(str1,str2);
//     return 0;
//    }