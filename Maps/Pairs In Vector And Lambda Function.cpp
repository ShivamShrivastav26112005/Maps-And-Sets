// Pair in the vector -: 

// 1. Structure of std::pair -: 

// A "pair" is a utility in the C++ Standard Library that groups "two values" together. 
// The two values can be of the same or different types.

// Syntax -: 
// pair<Type1, Type2> pairName(value1, value2); // Type like string, int, boolean etc. 

// ex -: pair<string, int> -: Combines a string and an integer.
// ex -: pair<string, int> p("Alice", 85);




// 2. Vector of pair -: 
// A vector is a dynamic array that can store multiple elements of the same type.

// The type of the elements in the vector is pair<string, int>.
// The vector is initialized with three pairs: {"Alice", 85}, {"Bob", 90}, and {"Charlie", 80}.

// syntax -: 
// vector<pair<string, int>> vec = {pair1, pair2, pair3};





// 3. How It Works in Memory:
// The vector stores the pairs sequentially in memory:

// Index 0: Pair {"Alice", 85}
// Index 1: Pair {"Bob", 90}
// Index 2: Pair {"Charlie", 80}

// Each pair consists of -: 

// A string as the first element (pair.first).
// An int as the second element (pair.second).




// 4-: Accessing elements -: 
// You can access and manipulate the elements of the 
// vector using typical std::vector methods or iterators.




// // Ex of Vector of pairs -: 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // pair -: store -: {Name,Age}
//     vector<pair<string, int>> v={{"Shivam",23}, {"Aman",21}, {"Shivam",22}};

//     // // vector v ke 0th idx, ki first value and 0th idx ki second value
//     // cout<<v[0].first<<endl;
//     // cout<<v[0].second<<endl;

//     cout<<endl;

//     // Access Ele.s Using Loop -: 
//     for(auto &pair:v){
//         cout<<pair.first<<" "<<pair.second<<endl;
//     }
// }

// // Shivam 23
// // Aman 21
// // Shivam 22







// 2. Using a Lambda Function -: 



// To "sort" a "vector" of "pairs" using a "custom comparator", 
// you can either use a "lambda" function or "custom" function. 

// 1. Problem Statement -:

// We have the following std::vector of std::pair<string, int>:



// vector<pair<string, int>> vec = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 80}};

// We want to sort this vector based on the "second" element (int) in descending order.

// 2. Using a Lambda Function
// The sort function allows you to provide a custom comparator.
// A lambda function is a concise way to define the comparator.





// // Question-1-:  Sort the given array / vector using custom comparator -: 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool customComparator(int a, int b){
//     return a<b; 
// }

// int main(){
//     int arr[]={3,2,4,1,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" "; 
//     // }
//     // cout<<endl;

//     // for(int i=n-1; i>=0; i--){
//     //     cout<<arr[i]<<" "; 
//     // }
//     // cout<<endl;

//     // convert array to vector -: 
//     vector<int>v(arr, arr+n); 
//     // for(auto &ele:v){
//     //     cout<<ele<<" "; 
//     // }

//     // sorting function to sort the given above array / vector in increasing order -: 

//     sort(v.begin(), v.end(), customComparator); 

//     for(auto &ele:v){
//         cout<<ele<<" "; 
//     }
// }
// // Output -: 
// // 1 2 3 4 5 








// Question-2-: Sorting -: Even Numbers First, Then Odd Numbers
// This sorts the array such that even numbers appear before odd numbers.
// Within even and odd groups, the numbers are sorted in ascending order.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool customComparator(int a, int b){
    if(a%2==0 && b%2!=0) return true; 
    if(a%2!=0 && b%2==0) return false; 
    return a<b; 
}

int main() {
    vector<int> arr={3, 2, 4, 1, 5};

    sort(arr.begin(), arr.end(), customComparator); 

    // Print the sorted array
    for(auto &num:arr){
        cout<<num<<" ";
    }
}

// Output -:
// 2 4 1 3 5



// Done -: 22-12-2024 Time -: 05:30PM 
