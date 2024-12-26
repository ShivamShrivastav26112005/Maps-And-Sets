// Introduction To Sets -: 

// set store unique ele.s means if we insert/add same ele. multiple times then set store only unique ele.s not duplicate ele.

#include<iostream>
#include<unordered_set> 
using namespace std;
int main(){

    // stack<int>st;
    // queue<int>q;
    // vector<int>v;

    unordered_set<int>s;

    // // 1-> values are added in the set s
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // // these values store in the set in randomly order. Set is basically a bag.
    // // ele.s not stored in a particular order 


    // // For displaying/printing these ele.s we use for each loop
    
    // // for each loop 
    // for(int ele : s){  // ele. (:)->(in) the (set)s
    //     cout<<ele<<" "; // ye ek-ek ele. ko pick kar ke print karta rahega set s me se 
    // }

    // // O/P - 5 1 2 3 4 (display in random order)




    // // 2-> set store only unique elements not store duplicate ele.

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // cout<<s.size()<<endl; // 5 -> becoz it stores only unique ele
    // // Display our set
    // for(int ele : s){  
    //     cout<<ele<<" "; // 5 1 2 3 4
    // }
    // cout<<endl;
    // cout<<s.size()<<endl; // 5

    // // 5
    // // 5 1 2 3 4
    // // 5



    // // 3-> Delete ele from the set 

    // // before delete ele from the set
    // // 5 1 2 3 4

    // s.erase(2);
    // for(int ele : s){ 
    //     cout<<ele<<" ";
    // }
    // // 5 1 3 4 
    // cout<<endl;

    // // Delete ele. 3 from the set 
    // s.erase(3);
    // for(int ele : s){ 
    //     cout<<ele<<" ";
    // }
    // // 5 1 4

    // cout<<endl;
    // cout<<s.size(); // 3 -> after deleting two ele.s size is 3 



    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    // 4-> check/search/find if the given ele. present/exists in the set or not 
    
    
    int target=4; // ele exists
    // int target=40; // ele does not exists

    // for(s.find(target)!=s.end()) // means target exists in the set 
    // for(s.find(target)==s.end()) // means target does not exists in the set 
    // s.end() -> is the last ele. of the set 
    // s.find() -> 2 kaam. 1)- it searches ele in the set. 2)- and if not found then it returns s.end() (last ele of the set)

    if(s.find(target)!=s.end()){ // means those target/ele. exists/present in the set 
        cout<<"ele exists";
    }
    else{
        cout<<"ele does not exists";
    }



}
