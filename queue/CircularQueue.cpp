#include <iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, cap;
    int f, r;

public:  // <-- Constructor must be public
    CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        f = 0;
        r = -1;
        currSize = 0;  // ✅ Initialize current size
    }

    void push(int data) {
        if (currSize == cap) {
            cout << "Queue is full\n";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    int front() {
        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[f];
    }

    bool empty() {
        return currSize == 0;  // ✅ Correct way to check emptiness
    }

    ~CircularQueue() {
        delete[] arr;  // Free memory
    }
};

int main() {
    CircularQueue q(3);
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.push(40);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
