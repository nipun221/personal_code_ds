#include<bits/stdc++.h>
using namespace std;


// STL: Algorithms
int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(13);
    v.push_back(17);
    v.push_back(21);

    cout<<binary_search(v.begin(), v.end(), 21)<<endl;

    cout<<lower_bound(v.begin(), v.end(), 13)-v.begin()<<endl;
    cout<<upper_bound(v.begin(), v.end(), 13)-v.begin()<<endl;

    cout<<"GCD => "<<__gcd(10, 6)<<endl;
    cout<<"LCM => "<<(10*6)/__gcd(10, 6)<<endl;

    int a = 10;
    int b = 6;

    cout<<max(a, b)<<endl;
    cout<<min(a, b)<<endl;

    cout<<pow(2, 5)<<endl;

    cout<<"Before swap: "<<a<<" "<<b<<endl;

    swap(a, b);

    cout<<"After swap: "<<a<<" "<<b<<endl;

    string s = "abc";
    cout<<s<<endl;

    reverse(s.begin(), s.end());

    cout<<s<<endl;

    cout<<"Before rotate: "<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(), v.begin()+2, v.end());

    cout<<"After rotate: "<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"Before sort: "<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end());

    cout<<"After sort: "<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;
}




// STL: Map
/*
int main() {
    map<int, string> m;

    m[1] = "John";
    m[10] = "Tim";
    m[2] = "Bob";
    m[3] = "Alice";
    m.insert({4, "Harry"});

    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Find element: "<<m.count(5)<<endl;

    cout<<"Before erase: "<<endl;
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    m.erase(2);

    cout<<"After erase: "<<endl;

    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto itr = m.find(1);
    cout<<"Element found: "<<itr->second<<endl;

    for (auto it=itr; it!=m.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
*/



// STL: Set
/*
int main() {
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(1);

    for (int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(next(s.begin()));

    for (int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of set: "<<s.size()<<endl;
    cout<<"Is set empty: "<<s.empty()<<endl;
    cout<<"Element present or not: "<<s.count(2)<<endl;

    set<int>::iterator it = s.find(3);
    cout<<"Element found: "<<*it<<endl;

}
*/


// STL: Priority Queue
/*
int main() {
    // max heap
    priority_queue<int> max_pq;

    // min heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    max_pq.push(11);
    max_pq.push(47);
    max_pq.push(7);
    max_pq.push(107);
    max_pq.push(25);

    cout<<"Size of max heap: "<<max_pq.size()<<endl;
    cout<<"Top element of max heap: "<<max_pq.top()<<endl;
    cout<<"Is max heap empty: "<<max_pq.empty()<<endl;

    int n = max_pq.size();
    
    for (int i=0; i<n; i++) {
        cout<<max_pq.top()<<" ";
        max_pq.pop();
    }
    cout<<endl;
    
    cout<<"Is max heap empty: "<<max_pq.empty()<<endl;

    cout<<endl<<endl;

    min_pq.push(14);
    min_pq.push(10);
    min_pq.push(7);
    min_pq.push(19);

    cout<<"Size of min heap: "<<min_pq.size()<<endl;
    cout<<"Top element of min heap: "<<min_pq.top()<<endl;
    cout<<"Is min heap empty: "<<min_pq.empty()<<endl;

    int m = min_pq.size();

    for (int i=0; i<m; i++) {
        cout<<min_pq.top()<<" ";
        min_pq.pop();
    }
    cout<<endl;

    cout<<"Is min heap empty: "<<min_pq.empty()<<endl;
}
*/



// STL: Queue
/*
int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Front element of queue: "<<q.front()<<endl;
    cout<<"Back element of queue: "<<q.back()<<endl;
    cout<<"Is queue empty: "<<q.empty()<<endl;

    q.pop();

    cout<<"After pop:- "<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Front element of queue: "<<q.front()<<endl;
}
*/


// STL: Stack
/*
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);  
    s.push(4);

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Top element of stack: "<<s.top()<<endl;
    cout<<"Is stack empty: "<<s.empty()<<endl;
}   
*/


// STL: List
/*
int main() {
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(prev(l.end()));
    cout<<"After erase: "<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    int size = l.size();
    cout<<"Size of list: "<<size<<endl;

    list<int> l2(10, 5);

    cout<<"List 2: "<<endl;
    for (int i:l2) {
        cout<<i<<" ";
    }
    cout<<endl;
}
*/


// STL: Deque
/*
int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_back(5);
    dq.push_front(6);

    for(int i=0; i<dq.size(); i++) {
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    dq.pop_back();

    for(int i=0; i<dq.size(); i++) {
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at front: "<<dq.front()<<endl;
    cout<<"Element at back: "<<dq.back()<<endl;

    cout<<"Size of deque: "<<dq.size()<<endl;

    cout<<"Before erase "<<endl;
    for(int i=0; i<dq.size(); i++) {
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    dq.erase(dq.begin(), dq.begin()+2);

    cout<<"After erase "<<endl;
    for(int i=0; i<dq.size(); i++) {
        cout<<dq[i]<<" ";
    }
    cout<<endl;

    cout<<"Before clear "<<endl;
    cout<<"Size of deque: "<<dq.size()<<endl;

    dq.clear();

    cout<<"After clear "<<endl;
    cout<<"Size of deque: "<<dq.size()<<endl;

}
*/


// STL: Vector
/*
int main() {
    vector<int> v;
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    cout<<"Size of vector: "<<v.size()<<endl;

    cout<<"Element at front: "<<v.front()<<endl;
    cout<<"Element at back: "<<v.back()<<endl;

    cout<<"Before pop: "<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"After pop: "<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"Before clear: "<<endl;
    cout<<"Size of vector: "<<v.size()<<endl;

    v.clear();

    cout<<"After clear: "<<endl;
    cout<<"Size of vector: "<<v.size()<<endl;

    cout<<"Capacity of vector: "<<v.capacity()<<endl;
}
*/