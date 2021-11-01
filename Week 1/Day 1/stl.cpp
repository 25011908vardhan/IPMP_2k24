#include<bits/stdc++.h>
using namespace std;
void banner()
{
   cout<<endl;
   for(int i=0;i<20;i++) cout<<"* ";
   cout<<endl;
}
int main()
{
    banner();
    cout<<"2D Vector -> ";
    banner();
    // 2d Vector
    vector<vector<int>> v(3,vector<int>(4,1));
    for(auto &it:v)
    {
        cout<<endl;
        for(auto &it1:it)
        cout<<it1<<" ";
        cout<<endl;
    }
    cout<<"3nd element of 2nd row = "<<v[1][2]<<endl;
    banner();

    cout<<"3D Vector -> ";
    banner();
    // 3d Vector
    vector<vector<vector<int>>>a(2,vector<vector<int>>(4,vector<int>(5,2)));
    for(auto &it:a)
    {
        for(auto &it1:it)
        {
            for(auto &it2:it1)
            cout<<it2<<" ";
            cout<<endl;
        }
            cout<<endl;
    }
            cout<<endl;

    banner();
    cout<<"Maps";
    banner();
    map<int,int> m;
    // Mapping my roll no with numbers as keys and their positions as values
    m.insert({1,1});
    m.insert({0,2});
    m.insert(make_pair(6,3));
    m.insert({1,4});
    m.insert({2,5});
    m.insert({0,6});
    m.insert({0,7});
    m.insert({0,8});
    m[7]=9;
    for(auto &it:m) cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    auto it= m.find(6); auto it1=m.find(9);
    if(it!=m.end()) cout<<"6 is present in Map"<<endl;
    else cout<<"6 is not present in Map"<<endl;
    (it1!=m.end())? cout<<"9 is present in Map"<<endl: cout<<"9 is not present in Map"<<endl;
    m.erase(0);
    for(auto &it:m) cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    auto itr=m.lower_bound(0);
    if(itr!=m.end())
    cout<<"\nLower Bound of 6 is "<<(*itr).first<<" and it's Position is "<<(*itr).second<<endl;
    else
    cout<<"\nLower Bound of 6 is not present"<<endl;
    banner();
    cout<<"Unordered Maps";
    banner();
    // Mapping a number 919186532
    unordered_map<int,int> u;
    u[9]=1; u[1]=2; u[9]=3; u[1]=4; u[8]=5; u[6]=6; u[5]=7; u[3]=8; u[2]=9;
    for(auto &it:u) cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    
    banner();
    cout<<"Sets";
    banner();
    // Making a Set of characters in my name
    set<char> name;
    name.insert('y'); name.insert('a'); name.insert('s');
    name.insert('h'); name.insert('v'); name.insert('a');
    name.insert('r'); name.insert('d'); name.insert('h');
    name.insert('a'); name.insert('n');   
    name.erase('r');
    for(auto &it: name) cout<<it;
    cout<<"\nSize of Set is : "<<name.size();
    for(auto &it: name) cout<<it;
    
    banner();
    cout<<"Unordered Sets";
    banner();
    // Making an unordered set of my surname
    unordered_set<char> surname;
    surname.insert('a');surname.insert('g');surname.insert('n');
    surname.insert('i');surname.insert('h');surname.insert('o');
    surname.insert('t');surname.insert('r');surname.insert('i');
    for(auto &it: surname) cout<<it<<" ";
    
    banner();
    cout<<"Stacks";
    banner();
    // Reversing a Vector using Stack;
    vector<int> sam;
    for(int i=1;i<=10;i++) sam.push_back(i);
    reverse(sam.begin(),sam.end());
    stack<int> stk;
    for(auto &iterator:sam) 
    {cout<<iterator<<" ";
     stk.push(iterator);
    }
    cout<<"\nThe top element in Stack is: "<<stk.top()<<endl;
    for(auto &it:sam)
    {it=stk.top();
    stk.pop();}
    for(auto &it: sam) cout<<it<<" ";
    if(stk.empty()) cout<<"\nStack is Empty"<<endl;
    else cout<<"\nStack is not Empty"<<endl;
    cout<<"\nMinimum Element is: "<<*min_element(sam.begin(),sam.end())<<endl;
    cout<<"Maximum Element is : "<<*max_element(sam.begin(),sam.end())<<endl;
    
    banner();
    cout<<"Queues";
    banner();
    // Making a Queue for Feast with first come first serve constraint
    queue<string> q;
    q.push("Johnny");
    q.push("Rudolf");
    q.push("Lena");
    q.push("Amy");
    cout<<"First in the Queue is: "<<q.front()<<endl;
    q.emplace("Eva");
    cout<<"Last in the Queue is: "<<q.back()<<endl;
    cout<<"Time For The Feast! The order is: "<<endl;
    while(q.size())
    {
        cout<<q.front()<<" "<<endl;
        q.pop();
    }
    
    banner();
    cout<<"Priority Queues"; //By Default Max-Heap is created in C++
    banner();
    priority_queue<int> pq;
    pq.push(10);
    pq.push(8);
    pq.push(12);
    pq.push(11);
    pq.push(9);
    pq.emplace(1); 
    //I STILL DIDN'T UNDERSTAND THE DIFFERENCE BETWEEN EMPLACE AND PUSH
    cout<<"The Element with highest priority(max element in this case!) is -> "<<pq.top()<<endl;
    pq.pop(); //Pops the element with highest priority
    cout<<"The Element with highest priority(max element in this case!) is -> "<<pq.top()<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    //Bonus-> Implementing Min-Heap (i.e. Min element with highest priority)
    priority_queue<int,vector<int>,greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(9);
    minHeap.push(8);
    minHeap.push(7);
    minHeap.push(6);
    cout<<"The Element with highest priority(max element in this case!) is -> "<<minHeap.top()<<endl;
    while(!minHeap.empty())
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }

    banner();
    cout<<"Dequeues";
    banner();
    // Nothing but double ended queues, so we can insert/delete at both ends now which was only insert at end and delete from front in normal queue
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(4);
    dq.push_back(6);
    dq.push_front(9);
    dq.push_back(1);
    cout<<"Top of Dequeue is : "<<dq.front()<<endl;
    dq.pop_front();
    cout<<"Top of Dequeue is : "<<dq.front()<<endl;
    cout<<"Back of Dequeue is: "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"Back of Dequeue is: "<<dq.back()<<endl;
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_back();

    }
    return 0;
}
