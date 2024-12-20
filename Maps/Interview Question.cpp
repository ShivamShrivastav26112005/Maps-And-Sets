1. Frequency of Elements in an Array -: 

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

Output:
1: 1  
2: 2  
3: 3
Explanation: This program calculates the frequency of each element in the array using a map.




  
2. Find First Non-Repeating Character in a String -: 

#include <iostream>
#include <map>
using namespace std;

char firstNonRepeating(string s) {
    map<char, int> freq;
    for (char c : s) freq[c]++;
    for (char c : s) {
        if (freq[c] == 1) return c;
    }
    return '_';
}

int main() {
    string s = "swiss";
    cout << "First non-repeating character: " << firstNonRepeating(s) << endl;
    return 0;
}

Output:
First non-repeating character: w
Explanation: The first character that occurs only once in the string is found using a map.



  
3. Check if Two Strings are Anagrams -: 

Definition:
An anagram is a word or phrase formed by rearranging the letters of another, such as "listen" and "silent."
  

#include <iostream>
#include <map>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    map<char, int> freq;
    for (char c : s1) freq[c]++;
    for (char c : s2) {
        if (--freq[c] < 0) return false;
    }
    return true;
}

int main() {
    string s1 = "listen", s2 = "silent";
    cout << (areAnagrams(s1, s2) ? "Anagrams" : "Not Anagrams") << endl;
    return 0;
}

Output:
Anagrams
Explanation: This checks if two strings are rearrangements of each other using a frequency map.


  
  
4. Group Elements by Frequency -: 

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    map<int, vector<int>> freqMap;

    for (int num : arr) freqMap[num].push_back(num);

    for (auto &pair : freqMap) {
        cout << pair.first << ": ";
        for (int num : pair.second) cout << num << " ";
        cout << endl;
    }
    return 0;
}

Output:
1: 1  
2: 2 2  
3: 3 3 3
Explanation: Groups array elements by their frequency.


  
  
5. Sort a Map by Values -: 

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> marks = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 80}};
    vector<pair<string, int>> v(marks.begin(), marks.end());

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
      
    for (auto pair : v) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

Output:
Bob: 90  
Alice: 85  
Charlie: 80
  
Explanation: The map is sorted by values in descending order.



  
  // Uses a "lambda" function to define a "custom comparator" for sorting.
      // Purpose: The lambda function compares two elements, a and b, of type pair<string, int> 
      // (or a similar structure like pair<Key, Value> in general) based on their second value 
      // (i.e., b.second and a.second) in descending order.
        
      // Structur -: 
      // [](auto &a, auto &b):
      // []: Indicates that the lambda does not capture any variables from the surrounding scope.
      // auto &a, auto &b: Takes two references a and b of elements to be compared.
      // return a.second > b.second;:
      // Compares the second values of a and b.
      // If a.second > b.second, it places a before b, ensuring a descending order by values.

      
      // Alternate Way: If not using a lambda, you could define a separate comparator function:
      // bool customComparator(pair<string, int> &a, pair<string, int> &b) {
      //     return a.second > b.second;
      // }
      // // Use the custom comparator:
      // sort(vec.begin(), vec.end(), customComparator);




    // Imporatnt for customComparator -: 

    // Question -: To sort the std::vector<int> array arr = {3, 2, 4, 1, 5} using a custom comparator. 

  
    #include <iostream>
    #include <vector>
    #include <algorithm> // For std::sort
    using namespace std;

    
      // Custom comparator function for ascending order -: 
      // just like bubble sort esme bhi pass chalti hai -: pass-1, pass-2, pass-3... 
  
      // If a < b is true, the comparator returns true (no swap), 
      // and if a >= b is true, it returns false (swap is needed).
  
      bool customComparator(int a, int b) {
      // Returns true if a is less than b -: 
      return a < b; // if a < b condi. is true then no swap (a&b) else swap 
  }
    
  int main() {
      vector<int> arr = {3, 2, 4, 1, 5};
    
      // Sort using the custom comparator function
      sort(arr.begin(), arr.end(), customComparator);
    
      // Print the sorted array
       for (int num : arr) {
          cout << num << " ";
      }
    
       return 0;
   }
   // Output -: 1 2 3 4 5





  
