#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);  
    s.push(4);

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Top element of stack: "<<s.top()<<endl;
    cout<<"Is stack empty: "<<s.empty()<<endl;

    for (int i=1; i<s.size(); i++) {
        cout<<i<<" ";
    }
    cout<<endl;
}   





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