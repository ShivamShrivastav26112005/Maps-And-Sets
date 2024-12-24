// Unordered set/map are called hash set/hash map
// hearder file -> #include<unordered_set> , #include<unordered_map>
// declaration -> unordered_set<int> s; , unordered_map<string,int> m;

// insertion is same in both unordered/ordered set/map.
// ordered set->insertion/deletion/searching takes TC=O(logn)
// unordered set->insertion/deletion/searching takes TC=O(1)



// ordered set/normal set-: it prints ele.s in ascending order either you insert ele in any order

// #include<iostream>
// // hearder file of ordered set
// #include<set>
// using namespace std;
// int main(){

//     set<int>s;
//     s.insert(2);
//     s.insert(4);
//     s.insert(8);
//     s.insert(1);
//     s.insert(9);
//     // display ordered set -> by using for each loop
//     for(int ele : s){
//         cout<<ele<<" ";
//     }

// // 1 2 4 8 9 -> displayed ordered set in orderwise/ascending order/sorted order

// }



// unordered set-:

// #include<iostream>
// // hearder file of unordered set
// #include<unordered_set>
// using namespace std;
// int main(){

//     unordered_set<int>s;
//     s.insert(2);
//     s.insert(4);
//     s.insert(8);
//     s.insert(1);
//     s.insert(9);
//     // display ordered set -> by using for each loop
//     for(int ele : s){
//         cout<<ele<<" ";
//     }

// // 9 2 4 8 1 -> displayed unordered set in randomly order

// }





// // ordered map -: 

// #include<iostream>
// // hearder file of ordered map
// #include<map>
// using namespace std;
// int main(){

//     map<int,int>m; //  ordered map

//  // m[key]=value 
//  // insertion in ordered map-: 
//     m[1]=20; // we insert (1,20) in map m
//     m[3]=10; // (3,10)
//     m[2]=30; // (2,30)

//     // display ordered map -> by using for each loop
//     for(auto x : m){ // x=pair
//         // cout<<x.first<<" "; // 1 2 3 sorted but we insert 1,3,2 keys
//         cout<<x.second<<" ";  // 20 30 10  // sorting done on the basics of keys not value
    
//     }

// // sorting always done on the basics of keys not value 

// }







#include<iostream>
#include<map>
using namespace std;
int main(){

    map<string,int>m; // map is like name/rollno
    m["Shivam"]=10; 
    m["Aman"]=30;
    m["Ram"]=20;

    for(auto x : m){
        // cout<<x.second<<" "; // 30 20 10 unsorted 
        cout<<x.first<<" "; // Aman Ram Shivam 
        // strings are sorted in lexographical order/alphabetical order(A-Z)
    }
}
