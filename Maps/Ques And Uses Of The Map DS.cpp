Common Use Cases in Questions -: 

1-: Frequency Count:

unordered_map<char, int> freq;
string str = "aabbcc";
for(char ch : str) {
    freq[ch]++;
}

2-: Finding Unique Elements:

unordered_map<int, bool> seen;
vector<int> arr = {1, 2, 3, 2};
for(int num : arr) {
    if(seen[num]) continue;
    seen[num] = true;
    cout << num << " ";
}

3-: Find First Non-Repeating Character:

unordered_map<char, int> freq;
string str = "swiss";
for(char ch : str) freq[ch]++;
for(char ch : str) {
    if(freq[ch] == 1) {
        cout << ch << endl;
        break;
    }
}

4-: Counting Word Occurrences:

unordered_map<string, int> wordCount;
vector<string> words = {"apple", "banana", "apple"};
for(string word : words) {
    wordCount[word]++;
}

5-: Adjacency List in Graphs:

unordered_map<int, vector<int>> graph;
graph[1].push_back(2);
graph[2].push_back(3);
