// we make our own tree -> using construct tree fun. by using BFS
// by using level order traversal we display/print our own tree (nth level se printing hogi)
// we also display our tree by using queue.

// construct binary tree and display by using level order traversal (BFS).


// Display -> Top Veiw Of Binary Tree by using queue,hashmap

#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* construct(int arr[], int n){ // construct BT by using queue
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);

    int i=1;
    int j=2;

    while(q.size()>0 && i<n){
        Node* temp=q.front(); 
        q.pop();
        Node* l;
        Node* r;

        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;

        temp->left=l;
        temp->right=r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

int levels(Node* root){ // find levels of the BT 
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void nthlevel(Node* root, int curr, int level){ // goes nth (1st,2nd,3rd...) level step by step and display BT
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return ;
    }
    nthlevel(root->left,curr+1, level);
    nthlevel(root->right,curr+1,level);
}

void levelorder(Node* root) // by using level order traversal we display our BT
{
    int level=levels(root);
    for(int i=1; i<=level; i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}





// this is my main function -: 
void topview(Node* root){ // used -> map,queue
    unordered_map<int,int> m; // <level,root->value>
    // we also make a queue as a pair 
    queue<pair<Node*,int>> q; // <node,level>

    pair<Node*,int> r;
    r.first=root; // node
    r.second=0; // value 
    q.push(r); // here we push pair in the queue
  
    // BFS 
    while(q.size()>0){

        // we take Node/root and value/level from the queue 
        Node* temp = (q.front()).first; // becoz q ka front ek pair h so we use q.front().first => first is root so here we store root
        int level = (q.front()).second; // find -> level of the front ele.
        q.pop();

        // now we check if these level present in the map before or not 
        if(m.find(level)==m.end()){ // means not present level before in the map then we insert level from the queue 
            m[level]=temp->val; // we always push value of the queue in the map
        }


        // if not present then check left and right

        // by this our hashmap is fullfilled with unique levels 
        if(temp->left!=NULL){ // then we push pair from the queue in the map
        pair<Node*, int> p;
        p.first=temp->left;
        p.second=level-1; // left me level ek kam ho jata h 
        q.push(p); // pair p push in the map 
        }

        if(temp->right!=NULL){ 
        pair<Node*, int> p; // then we make a pair becoz in map always insert a pair 
        p.first=temp->right;
        p.second=level+1; // right me level ek jada ho jata h 
        q.push(p); // pair push in the map 
        }
    }


    // now we find our lowest vertical levels and highest vertical levels from the map
    
    int minlevel=INT_MAX;
    int maxlevel=INT_MIN;
    for(auto x : m){ // travel in the map 
        int level=x.first; // x.fist is the level inserted in map
        minlevel=min(minlevel,level);
        maxlevel=max(maxlevel,level); 
    }

    // travel from minlevel to maxlevel(left to right) in the map and display nodes 
    for(int i=minlevel; i<=maxlevel; i++){
        cout<<m[i]<<" "; // return nodes'val
    }
    cout<<endl;

}


int main()
{
    // by using array'ele.s construct binary tree.
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node* root=construct(arr,n);

// not used here, this is for printing purpose only 
// printing ele.s in level wise 1st print 0th level ele.s , 2nd print 1st level ele.s ...
    levelorder(root);

// O/P-> level wise printing of the tree. 
// 1 
// 2 3
// 4 5 6
// 7 8


// top view of the binary tree -> display 
    topview(root);


// // Output-:
// // constructed binary tree displayed
// 1 
// 2 3
// 4 5 6
// 7 8
// // top view displayed
// 4 2 1 3 6


}

