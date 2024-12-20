// Map -> it is used to store key, value pair.
// pair class -> C++ built-in class hota h 
// with the help of pair class we insert/store/add key,value in the map DS



#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    // unordered_map<int,int>m;

    // // Method -1: insertion 
    // // pair class and insertion in map DS
    // pair<int,int>p1;
    // p1.first=34;
    // p1.second=33;
    // m.insert(p1);


    // pair<int,int>p2;
    // p2.first=45;
    // p2.second=55;
    // m.insert(p2);


    // pair<int,int>p3;
    // p3.first=85;
    // p3.second=85;
    // m.insert(p3);

    // // // display 
    // // cout<<p1.first<<" "<<p1.second<<endl;
    // // cout<<p2.first<<" "<<p2.second;

    // // display whole map -> by using for each loop
    // for(pair<int,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // // Or

    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }


    // Method-2: Insertion -> Best version for insertion in the map 
    unordered_map<string,int> m;
    m["Shivam"]=98;
    m["Aman"]=97;
    m["Ram"]=56;

    // we want to print only value of the one key 
    cout<<m["Shivam"];
    cout<<endl;

    // display 
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;


    // deletion -> always delete key only when key is delete then there value is automatic deleted 
    m.erase("Shivam");
    m.erase("Aman");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }



}
