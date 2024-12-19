// Introduction to maps 
// uses -> 1: maps are called (frequency set/array) -> becoz it store frequency of something
// 2: key , value/index -> key,value pairs ko store karne ke liye 

// insert,search,deletion => TC=O(1)

// here we study unordered map 
// map -> is used to store (key,value) pairs 

#include<iostream>
#include<unordered_map>
using namespace std;

// // pair class is our C++ built-in class but we can't need to make the pair class

// class pair{

//     public:
//     string first;
//     int second;

// };

int main(){

    // // it is pair class -> C++ built-in pair class otherwise we make a separate pair class as like Node class.
    // pair<int,int> p; // 2 size of vector but linked together in this pair class we give two values (first,second)
    
    // Display pair class (pair means ->two)

    // p.first=1;  // first value 
    // p.second=3; // second value 
    // cout<<p.first;  // 1


    // pair<string,char>p;
    // p.first="shivam"; // shivam
    // p.second='S'; // S

    // // Printing 
    // cout<<p.first<<endl;
    // cout<<p.second;



    // // unordered_map receives pair(key,value) string->key, int->value
    // unordered_map<string,int> m; 

    // // Method-1 : insertion ops in map DS -: 
    // // only pair insert in map 

    // pair<string,int> p1; 
    // p1.first="Shivam";
    // p1.second=5;
    // m.insert(p1); // in map we always insert pair only 

    // pair<string,int> p2;
    // p2.first="Aman";
    // p2.second=6;
    // m.insert(p2); // in map we always insert pair only 

    // pair<string,int> p3;
    // p3.first="Ram";
    // p3.second=7;
    // m.insert(p3); // in map we always insert pair only 


    // // Printing/Display maps -> by using for each loop 

    // //     for(pair<string,int> p : m){ // pair (of string and int) p in map m  
    // //         cout<<p.first<<" "<<p.second<<endl;
    // //     }

    // // // Randomly printing 
    // // // Aman 6
    // // // Ram 7
    // // // Shivam 5


    // // Display elements by using for each loop
    // // ************* for each loop -> best version **************
    // // use of (auto) keyword in place of (int) in for each loop

    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    // // Aman 6
    // // Ram 7
    // // Shivam 5



    // Method-2: insertion in map DS efficient 
    unordered_map<string,int> m;
    // string is a key and int is a value 


    // Method-1: 
    pair<string,int> p1;
    p1.first="Shivam";
    p1.second=25;
    m.insert(p1);


    // Method-2: Best method to insert key,value(pairs) in map DS.    
    m["Ram"]=55;
    m["Aman"]=4;


    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size(); // 3
    cout<<endl;

    // Aman 4
    // Ram 55
    // Shivam 25
    // 3


    // deletion -: 
    // delete key in the map DS 

    cout<<endl;

    m.erase("Shivam"); // only write key not write whole pair, after writing key their key and value both are removed fronm the map
    m.erase("Aman");
    m.erase("dev"); // does not delete becoz it does not exists in the map 

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl; // 1

    // Ram 55
    // 1


    cout<<m["Ram"]; // it gives value of the key 


// find() fun -> in map we find key not value.
// find means searching 

}