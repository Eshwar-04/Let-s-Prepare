#include <bits/stdc++.h>
using namespace std;

class Dequeue {
private:
    int *arr;
    int capacity; // Maximum number of elements
    int size;     // Current number of elements
    int front;    // Front index
    int rear;     // Rear index

public:
    // Constructor
    Dequeue(int cap) {
        capacity = cap;
        arr = new int[capacity]; // Allocate memory for the array
        front = -1;
        rear = -1;
        size = 0;
    }

    // Destructor
    ~Dequeue() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void push_front(int val) {
        if (isFull()) {
            cout << "Dequeue is full, cannot push" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }
        arr[front] = val;
        size++;
    }

    void push_back(int val) {
        if (isFull()) {
            cout << "Dequeue is full, cannot push" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        arr[rear] = val;
        size++;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Dequeue is empty, cannot pop elements" << endl;
            return;
        }
        if (size == 1) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Dequeue is empty, cannot pop elements" << endl;
            return;
        }
        if (size == 1) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }
        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Dequeue is empty, cannot get front element" << endl;
            return -1;
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Dequeue is empty, cannot get back element" << endl;
            return -1;
        }
        return arr[rear];
    }
};

int main() {
    Dequeue dq(5);

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Back element: " << dq.getBack() << endl;   

    dq.pop_front();
    cout << "Front element after pop: " << dq.getFront() << endl; 

    dq.pop_back();
    cout << "Back element after pop: " << dq.getBack() << endl;

    return 0;
}
