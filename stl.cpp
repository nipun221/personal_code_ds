#include<bits/stdc++.h>
using namespace std;


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