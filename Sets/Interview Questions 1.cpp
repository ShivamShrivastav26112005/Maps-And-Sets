# Set Data Structure: Basics -: 
1-: A Set is a data structure used to store unique elements in a specific order 
(sorted order for std::set) or in an unordered manner (std::unordered_set). 
Sets do not allow duplicate elements, making them ideal for operations requiring uniqueness, 
such as finding distinct elements.

# Key Properties -: 
1-: Unique Elements: A set automatically eliminates duplicates.
2-: Efficient Operations: Insertion, deletion, and search operations in std::set have O(logn) complexity due to 
the underlying balanced binary search tree (usually a Red-Black Tree).
In std::unordered_set, these operations have O(1) average time complexity due to hash table implementation.
3-: Iterators: Sets provide bidirectional iterators for std::set and forward iterators for std::unordered_set.



# Set Types in C++ STL -:
1-: std::set: Stores elements in sorted order.
2-: std::unordered_set: Stores elements in no particular order.
3-: std::multiset: Allows duplicate elements and stores them in sorted order.


  
# Common STL Functions for std::set
1. Insertion -: 
Syntax: set.insert(value);
Inserts a new element into the set. If the element already exists, the set remains unchanged.

  
2. Deletion -:
Syntax:
set.erase(value); (Deletes the element with the given value.)
set.erase(iterator); (Deletes the element at the given iterator.)
set.clear(); (Removes all elements from the set.)

  
3. Search -:
Syntax: set.find(value);
Returns an iterator pointing to the element if found, or set.end() if not found.

  
4. Count -:
Syntax: set.count(value);
Returns 1 if the element exists, 0 otherwise.

  
5. Size and Capacity -:
Syntax:
set.size(); (Returns the number of elements in the set.)
set.empty(); (Returns true if the set is empty, false otherwise.)

  
6. Iteration -:
Syntax:
for (auto it = set.begin(); it != set.end(); ++it) { /* access *it */ }
for (auto x : set) { /* access x */ }


7. Lower and Upper Bound -:
Syntax:
set.lower_bound(value); (Returns an iterator pointing to the first element not less than value.)
set.upper_bound(value); (Returns an iterator pointing to the first element greater than value.)

  
8. Swap -: 
Syntax: set1.swap(set2);
Swaps the contents of two sets.

  
9. Merge -: 
Syntax: set1.merge(set2);
Merges elements of set2 into set1. Duplicates are removed.


10. Emplace -: 
Syntax: set.emplace(value);
Constructs and inserts an element in-place.



Example -: Usage of std::set -: 

#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate ignored
    s.insert(30);

    // Search for an element
    cout << "Is 20 in the set? " << (s.count(20) ? "Yes" : "No") << endl;

    // Delete an element
    s.erase(20);

    // Check size
    cout << "Size of the set: " << s.size() << endl;

    // Iterating over the set
    cout << "Elements in the set: ";
    for (int x : s) cout << x << " ";

    // Lower and upper bounds
    auto lb = s.lower_bound(15);
    auto ub = s.upper_bound(10);
    cout << "\nLower bound of 15: " << (lb != s.end() ? to_string(*lb) : "None");
    cout << "\nUpper bound of 10: " << (ub != s.end() ? to_string(*ub) : "None");

    return 0;
}

Output -: 
Is 20 in the set? Yes
Size of the set: 2
Elements in the set: 10 30
Lower bound of 15: 30
Upper bound of 10: 30


# Common STL Functions for std::unordered_set
Similar to std::set but without the order-related operations (e.g., no lower_bound, upper_bound).

Key Differences Between set and unordered_set
Order -: 
set: Maintains sorted order.
unordered_set: Does not maintain any order.

Performance -: 
set: O(logn) for insert, delete, and search.
unordered_set: O(1) average for insert, delete, and search.




1. Insert, Delete, and Search in a Set -: 


#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    // Insert elements
    s.insert(5);
    s.insert(10);
    s.insert(15);
    // Search for an element
    cout<<"Is 10 in the set"<<(s.count(10) ? "Yes" : "No")<<endl;

    // Delete an element
    s.erase(10);
    cout<<"Is 10 in the set after deletion"<<(s.count(10) ? "Yes" : "No")<<endl;

    // Print all elements
    cout<<"Set elements: ";
    for(int x : s) cout<<x<<" ";
    return 0;
}

Is 10 in the set Yes
Is 10 in the set after deletion No
Set elements: 5 15



2. Count Distinct Elements in an Array -: 


#include <iostream>
#include <set>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 2, 1, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int>s(arr, arr+n);
    cout<<"Count of distinct elements: "<<s.size()<<endl;
}

Count of distinct elements: 5


  
3. Find the First Repeating Element in an Array -: 

#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int arr[]={1, 2, 3, 4, 3, 5, 1};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_set<int>seen;
    int firstRepeating=-1;
    for(int i=0; i<n; i++){
        if(seen.count(arr[i])){
            firstRepeating=arr[i];
            break;
        }
        seen.insert(arr[i]);
    }
    cout << "First repeating ele: "<<(firstRepeating == -1 ? "None" : to_string(firstRepeating))<<endl;
    return 0;
}


First repeating element: 3


  
4. Union and Intersection of Two Arrays -: 


#include <iostream>
#include <set>
using namespace std;
int main() {
    int arr1[]={1, 2, 3, 4};
    int arr2[]={3, 4, 5, 6};
    set<int>s1(arr1, arr1+4);
    set<int>s2(arr2, arr2+4);

    set<int> unionSet;
    set<int>intersectionSet;
    for(int x:s1){
      unionSet.insert(x);
    }
    for(int x:s2){
        unionSet.insert(x);
        if(s1.count(x)){
           intersectionSet.insert(x);
        }
    }

    cout<<"Union: ";
    for(int x:unionSet){
      cout<<x<<" ";
    }
    cout<<"\nIntersection: ";
    for(int x:intersectionSet){
      cout << x << " ";
    }
    return 0;
}


Union: 1 2 3 4 5 6 
Intersection: 3 4


  
5. Find Pair with Given Sum -: 

#include<iostream>
#include<unordered_set>
using namespace std;
bool hasPairWithSum(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.count(sum-arr[i])){
          return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main(){
    int arr[]={10, 15, 3, 7};
    int sum=17;

    cout<<(hasPairWithSum(arr, 4, sum) ? "Yes" : "No") << endl;
    return 0;
}

Yes




6. Check for Subset -: 


#include <iostream>
#include <set>
using namespace std;
bool isSubset(int arr1[], int n1, int arr2[], int n2) {
    set<int> s(arr1, arr1+n1);
    for(int i=0; i<n2; i++){
        if(!s.count(arr2[i])){
          return false;
        }
    }
    return true;
}

int main(){
    int arr1[]={1, 2, 3, 4, 5};
    int arr2[]={2, 3, 5};

    cout<<(isSubset(arr1, 5, arr2, 3) ? "Yes" : "No") << endl;
    return 0;
}

Yes



7. Longest Consecutive Sequence -: 


#include<iostream>
#include<unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n){
    unordered_set<int>s(arr, arr+n);
    int maxLength=0;
    for(int x : s){
        if(!s.count(x-1)){ // Start of a sequence
            int currentNum=x;
            int count=1;

            while(s.count(currentNum+1)){
                currentNum++;
                count++;
            }
            maxLength=max(maxLength,count);
        }
    }
    return maxLength;
}

int main() {
    int arr[]={100, 4, 200, 1, 3, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Longest consecutive sequence length: "<<longestConsecutive(arr, n)<<endl;
    return 0;
}


Longest consecutive sequence length: 4







  

