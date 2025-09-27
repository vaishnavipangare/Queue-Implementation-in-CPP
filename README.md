# 📦 Queue in C++

## 🎯 Aim  
To study and implement **Queue operations in C++**, including insertion (enqueue), deletion (dequeue), and traversal, and to understand how queues differ from stacks and arrays in terms of memory allocation, order of processing, and efficiency.

---

## 📚 Theory  

A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. The element inserted first is the one removed first, similar to a real-life queue at a ticket counter.  

A queue has two primary pointers:  
1. **Front** → points to the first element in the queue.  
2. **Rear** → points to the last element in the queue.  

### 🔑 Characteristics of Queues  
- **FIFO Order**: First element inserted is the first to be removed.  
- **Linear Structure**: Elements are arranged sequentially.  
- **Restricted Access**: Insertion happens at the rear, deletion happens at the front.  
- **Overflow/Underflow**: Overflow occurs when the queue is full; underflow occurs when the queue is empty.  

### 🔄 Types of Queues  
- **Simple (Linear) Queue** → Basic FIFO structure.  
- **Circular Queue** → Reuses empty spaces by connecting rear to front.  
- **Double-Ended Queue (Deque)** → Insertion and deletion allowed at both ends.  
- **Priority Queue** → Elements dequeued based on priority, not order.  

---

## 📋 Algorithm

1. **Start**  
2. Initialize `front = -1`, `rear = -1`, and define an array `arr[SIZE]`.  
3. Display the **menu** with options:  
   - 1 → Enqueue  
   - 2 → Dequeue  
   - 3 → Display  
   - 4 → Peek  
   - 5 → Check if Empty  
   - 6 → Check if Full  
   - 7 → Size  
   - 8 → Clear  
   - 9 → Exit  

4. **Repeat until choice = 9**:  
   - Read user’s `choice`.  

   **Case 1: Enqueue**  
   - If `rear == SIZE - 1` → print *Queue Overflow*.  
   - Else:  
     - If `front == -1`, set `front = 0`.  
     - Increment `rear`.  
     - Insert element at `arr[rear]`.  
     - Print confirmation.  

   **Case 2: Dequeue**  
   - If `front == -1 OR front > rear` → print *Queue Underflow*.  
   - Else:  
     - Print element at `arr[front]`.  
     - If `front == rear`, reset `front = rear = -1`.  
     - Else increment `front`.  

   **Case 3: Display**  
   - If queue empty → print *Queue is empty*.  
   - Else traverse from `front` to `rear` and print elements.  

   **Case 4: Peek**  
   - If queue empty → print *Queue is empty*.  
   - Else print element at `arr[front]`.  

   **Case 5: Check if Empty**  
   - If `front == -1 OR front > rear` → print *Queue is empty*.  
   - Else print *Queue is not empty*.  

   **Case 6: Check if Full**  
   - If `rear == SIZE - 1` → print *Queue is full*.  
   - Else print *Queue is not full*.  

   **Case 7: Size**  
   - If queue empty → size = 0.  
   - Else size = `rear - front + 1`.  
   - Print size.  

   **Case 8: Clear**  
   - Reset `front = rear = -1`.  
   - Print *Queue cleared*.  

   **Case 9: Exit**  
   - Print *Exiting...* and terminate program.  

   **Default**  
   - Print *Invalid choice*.  

5. **End**

---

## 🚀 Applications of Queues  

- **CPU scheduling** (Round Robin, FCFS).  
- **Disk scheduling**.  
- **Data buffering** (IO Buffers, Print Queue, Keyboard Buffer).  
- **Breadth-First Search (BFS)** in graphs.  
- **Order processing systems** (ticket booking, call centers).  
- **Resource management** in operating systems.  

---

## 🧠 Conclusion  

- Queues are essential for managing data in **FIFO order**.  
- They provide efficient handling of sequential processes like scheduling and buffering.  
- The experiment demonstrated:  
  - Enqueue (insertion at rear).  
  - Dequeue (deletion from front).  
  - Traversal and utility functions (peek, size, isEmpty, isFull, clear).  
- This forms the **foundation for advanced queue structures** such as circular queues, deques, and priority queues.  
- Mastering queues is crucial for solving **real-world scheduling, resource allocation, and graph traversal problems**.  
