// Aditya Bhagwan Jadhav
// 24070123005

#include<iostream>
using namespace std;
#define SIZE 5

class Queue {
    int front, rear;
    int arr[SIZE];
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value){
        if (rear == SIZE - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            if (front == -1) front = 0;
            rear++;
            arr[rear] = value;
            cout << value << " enqueued to queue" << endl;
        }
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
        } else {
            cout << arr[front] << " dequeued from queue" << endl;
            front++;
        }
    }
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }
    bool isEmpty() {
        return (front == -1 || front > rear);
    }
    bool isFull() {
        return (rear == SIZE - 1);
    }
    int size() {
        if (front == -1 || front > rear) {
            return 0;
        } else {
            return rear - front + 1;
        }
    }
    void clear() {
        front = -1;
        rear = -1;
        cout << "Queue cleared" << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Check if Empty\n";
        cout << "6. Check if Full\n";
        cout << "7. Size\n";
        cout << "8. Clear\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                value = q.peek();
                if (value != -1) {
                    cout << "Front element is: " << value << endl;
                }
                break;
            case 5:
                if (q.isEmpty()) {
                    cout << "Queue is empty" << endl;
                } else {
                    cout << "Queue is not empty" << endl;
                }
                break;
            case 6:
                if (q.isFull()) {
                    cout << "Queue is full" << endl;
                } else {
                    cout << "Queue is not full" << endl;
                }
                break;
            case 7:
                cout << "Queue size: " << q.size() << endl;
                break;
            case 8:
                q.clear();
                break;
            case 9:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 9);

    return 0;
}

// OUTPUT
// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Peek
// 5. Check if Empty
// 6. Check if Full
// 7. Size
// 8. Clear
// 9. Exit
// Enter your choice: 1
// Enter value to enqueue: 11
// 11 enqueued to queue

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Peek
// 5. Check if Empty
// 6. Check if Full
// 7. Size
// 8. Clear
// 9. Exit
// Enter your choice: 1
// Enter value to enqueue: 30
// 30 enqueued to queue

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Peek
// 5. Check if Empty
// 6. Check if Full
// 7. Size
// 8. Clear
// 9. Exit
// Enter your choice: 3
// Queue elements: 11 30 

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Peek
// 5. Check if Empty
// 6. Check if Full
// 7. Size
// 8. Clear
// 9. Exit
// Enter your choice: 2
// 11 dequeued from queue

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Peek
// 5. Check if Empty
// 6. Check if Full
// 7. Size
// 8. Clear
// 9. Exit
// Enter your choice: 9
// Exiting...