#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
private:
    // Custom comparator for min-heap with pairs of integers
    struct customComparator
    {
        bool operator()(const pair<int, int> &a, const pair<int, int> &b)
        {
            return a.first > b.first; // Min-heap based on the first element of the pair
        }
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, customComparator> pq;

public:
    // Function to add elements to the heap
    void addElements(const vector<pair<int, int>> &arr)
    {
        for (auto x : arr)
            pq.push(x);
    }

    // Function to display and remove all elements from the heap
    void displayAndRemoveAll()
    {
        while (!pq.empty())
        {
            pair<int, int> top = pq.top();
            cout << "(" << top.first << ", " << top.second << ") ";
            pq.pop();
        }
    }
};

int main()
{
    MinHeap heap;
    vector<pair<int, int>> arr = {{10, 1}, {12, 2}, {8, 3}, {14, 4}, {5, 5}, {8, 6}};
    heap.addElements(arr);
    heap.displayAndRemoveAll();
    return 0;
}

// to run the code : g++ fileName.cpp
// ./a.out

// output : (5, 5) (8, 3) (8, 6) (10, 1) (12, 2) (14, 4)