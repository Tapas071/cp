Queue
Implementation
queue<int> q;

q.push(10); // inserting the element 10 into the queue

int frontElement = q.front(); // getting the front element of the queue

int backElement = q.back(); // getting the last element of the queue

q.pop(); // removing the front element from the queue

q.empty(); // to check if the queue is empty or not: it will return true or false

queue<int> temp;
q.swap(temp); // now q is temp and temp is q

To traverse through the queue
while(!q.empty()){
    int frontElement = q.front();
    cout << frontElement << endl;
    q.pop();
    q.pop();
}   