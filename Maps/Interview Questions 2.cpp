6. Find Intersection of Two Arrays -: 

#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> findIntersection(vector<int> &arr1, vector<int> &arr2) {
    map<int,int>freq;
    vector<int>result;

    for(int num : arr1) freq[num]++;
    for (int num : arr2) {
        if (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }
    return result;
}

int main() {
    vector<int>arr1={1, 2, 2, 3};
    vector<int>arr2={2, 2, 3, 4};
    vector<int> intersection = findIntersection(arr1, arr2);

    for(int num : intersection) cout << num << " ";
    return 0;
}

Output -: 
2 2 3
Explanation: Finds common elements between two arrays.







7. Find Elements with More than N/K Occurrences -: 

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> moreThanNKOccurrences(vector<int> &arr, int k) {
    map<int, int> freq;
    vector<int> result;

    for (int num : arr) freq[num]++;
    for (auto &pair : freq) {
        if (pair.second > arr.size() / k) result.push_back(pair.first);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    int k = 2;
    vector<int> result = moreThanNKOccurrences(arr, k);

    for (int num : result) cout << num << " ";
    return 0;
}

Output:
2 3
Explanation: Finds elements appearing more than N/K times.





  
8. Find Common Elements in Three Arrays -: 

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> findCommon(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    map<int, int> freq;
    vector<int> result;

    for (int num : arr1) freq[num]++;
    for (int num : arr2) freq[num]++;
    for (int num : arr3) {
        if (++freq[num] == 3) result.push_back(num);
    }
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {2, 3, 4};
    vector<int> arr3 = {3, 4, 5};
    vector<int> common = findCommon(arr1, arr2, arr3);

    for (int num : common) cout << num << " ";
    return 0;
}


Output:
3
Explanation: Finds elements common in three arrays.






9. Find Top K Frequent Elements -: 

#include <iostream>
#include <map>
#include <vector>
#include <queue>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
    map<int, int> freq;
    for (int num : nums) freq[num]++;

    priority_queue<pair<int, int>> pq;
    for (auto &pair : freq) pq.push({pair.second, pair.first});

    vector<int> result;
    while (k-- && !pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);

    for (int num : result) cout << num << " ";
    return 0;
}


Output:
1 2
Explanation: Finds the k most frequent elements.
