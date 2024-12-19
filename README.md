Definition of Map Data Structure -: 

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





