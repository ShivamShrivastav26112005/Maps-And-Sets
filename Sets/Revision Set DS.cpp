Set Data Structure in C++

Definition

A set in C++ is a Standard Template Library (STL) container that stores unique elements in a specific order. It automatically arranges elements in ascending order (by default) and does not allow duplicates.

Key Characteristics

Unique Elements: Each value in a set is unique; duplicates are not allowed.

Ordered: Elements are always stored in a sorted manner.

Logarithmic Complexity: Insertion, deletion, and search operations have a time complexity of .

Underlying Structure: Internally implemented using a self-balancing binary search tree, typically a Red-Black Tree.

Header File

To use set, include the header file:

#include <set>

Common Operations

Insert an element:

set<int> s;
s.insert(5); // Adds 5 to the set

Erase an element:

s.erase(5); // Removes 5 from the set

Search for an element:

auto it = s.find(5); // Returns an iterator to 5, or s.end() if not found

Check size:

int size = s.size(); // Returns the number of elements

Iterate through the set:

for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
}

Types of Sets

set: Stores elements in ascending order.

multiset: Allows duplicate elements, but still keeps them ordered.

unordered_set: Stores elements in no particular order but provides faster average-time complexity (O(1)) for operations.

Example Usage

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate, will not be added

    // Iterate and print
    for (int x : s) {
        cout << x << " ";
    }
    // Output: 10 20

    // Check if an element exists
    if (s.find(20) != s.end()) {
        cout << "\n20 is in the set";
    }

    return 0;
}

Advantages

Ensures uniqueness of elements.

Provides fast insertion, deletion, and search operations.

Limitations

Cannot store duplicate elements (use multiset for that).

Higher overhead compared to unordered_set due to sorting.



// Sets , insert, display, erase, size, find ele in the set
// Set -> store only unique value 

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;

    // insert
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(4);
    s.insert(5);


    // display -> by using for eacch loop
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }

    for(auto ele : s){
        cout<<ele<<" ";
    }
    // cout<<endl;


    // size-: 
    // cout<<s.size()<<endl;


    // delete -: 
    // s.erase(3);
    // s.erase(1);
    // for(auto ele : s){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;
    // cout<<s.size()<<endl;


    // find ele in the set if these ele exists in the set then return true else false
    
    
    int target=30;
    if(s.find(target)!=s.end()){ // means exists
        cout<<" true ";
    }
    else cout<<" false ";


}
