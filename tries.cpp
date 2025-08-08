// #include<iostream>
// #include<unordered_map>
// #include<string>
// #include<vector>
// using namespace std;
// class node{
//     public:
//     unordered_map<char,node*>children;
//     bool endofword;
//     node(){
//         endofword=false;
//     }
// };
// class trie{
//     node* root;
//     public:
//     trie(){
//         root=new node();
//     }
//     void insert(string key){
//         node* temp=root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if(temp->children.count(key[i])==0){
//                 temp->children[key[i]]=new node;
//             }
//             temp=temp->children[key[i]];
//         }
//         temp->endofword=true;
//     }

//     bool search(string key){
//         node* temp=root;
//         for (int i = 0; i < key.size(); i++)
//         {
//            if (temp->children.count(key[i]))
//            {
//              temp=temp->children[key[i]];
//            }
//            else{
//               return false;
//            }
//         }
//       return temp->endofword;  
//     }
// };

// bool helper(trie &trie,string key){
//     if (key.size()==0)
//     {
//        return true;
//     }
//     for (int i = 0; i < key.size(); i++)
//     {
//         string first=key.substr(0,i+1);
//         string second=key.substr(i+1);

//         if (trie.search(first)&&helper(trie,second))
//         {
//             return true;
//         }
        
//     }
//     return false;
// }


// bool wordbreak(vector<string>dict,string key){
//     trie trie;
//     for (int i = 0; i <dict.size(); i++)
//     {
//        trie.insert(dict[i]);
//     }
//     return helper(trie,key);
// }
// int main(){
//     // vector<string>words={"the","a","there","their","any","thee"};
//     // trie trie;
//     // for (int i = 0; i < words.size(); i++)
//     // {
//     //    trie.insert(words[i]);
//     // }
//     // cout<<trie.search("there");
//     vector<string>dict={"i","like","sam","samsung","mobile","ice"};
//     cout<<wordbreak(dict,"ilikesamsung")<<endl;
// }


// #include<iostream>
// #include<unordered_map>
// #include<string>
// #include<vector>
// using namespace std;
// class node{
//     public:
//     unordered_map<char,node*>children;
//     bool endofword;
//     node(){
//         endofword=false;
//     }
// };
// class trie{
//     node* root;
//     public:
//     trie(){
//         root=new node();
//     }
//     void insert(string key){
//         node* temp=root;

//         for (int i = 0; i < key.size(); i++)
//         {
//             if(temp->children.count(key[i])==0){
//                 temp->children[key[i]]=new node;
//             }
//             temp=temp->children[key[i]];
//         }
//         temp->endofword=true;
//     }

//     bool search(string key){
//         node* temp=root;
//         for (int i = 0; i < key.size(); i++)
//         {
//            if (temp->children.count(key[i]))
//            {
//              temp=temp->children[key[i]];
//            }
//            else{
//               return false;
//            }
//         }
//       return temp->endofword;  
//     }

//     bool startwith(string prefix){
//         node* temp=root;
//         for (int i = 0; i < prefix.size(); i++)
//         {
//             if (temp->children[prefix[i]])
//             {
//                 temp=temp->children[prefix[i]];
//             }
//             else{
//                 return false;
//             }
//         }
//         return true;
//     }
// };
// int main(){
//     vector<string>words={"apple","app","mango","man","woman"};
//     trie trie;
//     for (int i = 0; i < words.size(); i++)
//     {
//         trie.insert(words[i]);
//     }
    
//     cout<<trie.startwith("wo");
// }


//count unique substring
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    unordered_map<char,node*>children;
    bool endofword;
    node(){
        endofword=false;
    }
};
class trie{
    node* root;
    public:
    trie(){
        root=new node();
    }
    void insert(string key){
        node* temp=root;

        for (int i = 0; i < key.size(); i++)
        {
            if(temp->children.count(key[i])==0){
                temp->children[key[i]]=new node;
            }
            temp=temp->children[key[i]];
        }
        temp->endofword=true;
    }

    bool search(string key){
        node* temp=root;
        for (int i = 0; i < key.size(); i++)
        {
           if (temp->children.count(key[i]))
           {
             temp=temp->children[key[i]];
           }
           else{
              return false;
           }
        }
      return temp->endofword;  
    }

    int counthelper(node* root){
        int ans=0;
        for(pair<char,node*>child:root->children){
            ans+=counthelper(child.second);
        }
        return ans+1;
    }

    int countnodes(){
        return counthelper(root);
    }
};

int countuniquesubstr(string str){
    trie trie;
    for (int i = 0; i < str.size(); i++)
    {
        string suffix=str.substr(i);
        trie.insert(suffix);
    }
    return trie.countnodes();
}
int main(){
    string str="ababa";
    cout<<countuniquesubstr(str);
}

