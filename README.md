1-: Definition of Map Data Structure -: 

A map is a data structure used to store elements in the form of key-value pairs. Each key in the map is unique,
while values can be duplicate. In C++, maps are part of the STL (Standard Template Library),
and they provide an efficient way to associate a unique key with a value.

There are two main types of maps in C++ -: 

Ordered Map (map) -: Stores elements in sorted order of keys.
Unordered Map (unordered_map): Uses a hash table for storing elements,
and the keys are not stored in any particular order.

Characteristics of Maps -: 
Key-Value Storage: Maps store data as pairs of keys and values.
Uniqueness: Keys must be unique, but values can be duplicated.
Operations: Common operations include insertion, searching, and deletion.

Time Complexity -: 
unordered_map: Average O(1) for insertion, search, and deletion.
map: Average O(log n) for insertion, search, and deletion.

Applications of Maps -: 
Maps are commonly used in problems where we need to:


Count frequencies -: 

Example: Counting occurrences of characters in a string.
Store and lookup data:

Example: Storing a dictionary where a word (key) maps to its meaning (value).
Index-based access:

Example: Associating unique IDs (keys) with names or objects.
Cache or Memoization:

Example: Implementing caching mechanisms in dynamic programming to store computed results.
Sorting by key:

Example: map can sort by key; unordered_map cannot.


Important Functions in Maps -:

Insert:
map[key] = value or map.insert(pair<key, value>).

Access:
map[key] to access or modify the value associated with a key.

Erase:
map.erase(key) to delete a key-value pair.

Find:
map.find(key) returns an iterator to the key-value pair if the key exists, or map.end() otherwise.

Size:
map.size() gives the number of elements in the map.





2-: Definition of Set Data Structure -: 
A set is a container that stores unique, sorted elements. The sorting is based on the 
container's comparison function (default is ascending order using std::less).

In C++, a set is a Standard Template Library (STL) container that stores unique elements 
in a specific order. It automatically arranges elements in ascending order (by default) and
does not allow duplicates. Internally, it uses a balanced binary search tree (like a Red-Black Tree) 
to maintain order and ensure logarithmic time complexity for insert, erase, and search operations.

Key Characteristics -: 

No duplicates: Each value in a set is unique.
Ordered: Elements are stored in a sorted order.
Logarithmic Time Complexity: Operations like insertion, deletion, 
and lookup are performed in O(logn) time.

Underlying Structure -: 
The set uses a self-balancing binary search tree 
(typically a Red-Black Tree) for efficient operations.

Header File -: 
To use set, include the header file:

#include <set>

Common Methods -: 

insert(): Adds an element.
erase(): Removes an element.
find(): Searches for an element.
size(): Returns the number of elements.
begin() and end(): Iterators to traverse the set.


