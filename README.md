# Low-Level Data Structures in C++

A collection of data structures implemented from scratch in C++, with a focus on understanding how they work internally rather than relying on the Standard Template Library (STL).

## 🎯 Project Objective

The goal of this project is to build a strong understanding of data structures by implementing them at a low level.

Instead of directly using STL containers like `vector`, `list`, `stack`, or `queue`, I'll implement their underlying logic myself.

The primary focus is on:

- Pointers and pointer manipulation
- Dynamic memory allocation and deallocation
- Heap memory management using `malloc()`, `realloc()`, and `free()`
- Understanding memory layouts
- Managing size and capacity
- Implementing operations and understanding their time complexity
- Handling edge cases, memory leaks, and dangling pointers

## 🛠️ Tech Stack

- **Language:** C++
- **Memory Management:** `malloc()`, `realloc()`, `free()`
- **Compiler:** GCC / G++
- **Version Control:** Git and GitHub

## 📚 Data Structures Roadmap

### 1. Linear Data Structures

- [x] Dynamic Array (Vector)
- [ ] Singly Linked List
- [ ] Doubly Linked List
- [ ] Circular Linked List
- [ ] Stack
- [ ] Queue
- [ ] Circular Queue
- [ ] Deque

### 2. Non-Linear Data Structures

- [ ] Binary Tree
- [ ] Binary Search Tree (BST)
- [ ] AVL Tree
- [ ] Red-Black Tree
- [ ] Heap (Min Heap / Max Heap)
- [ ] Trie
- [ ] Graph (Adjacency List)
- [ ] Graph (Adjacency Matrix)

### 3. Hash-Based Data Structures

- [ ] Hash Table
- [ ] Hash Map
- [ ] Hash Set
- [ ] Collision Handling (Chaining)
- [ ] Collision Handling (Open Addressing)

### 4. Advanced Data Structures

- [ ] Disjoint Set Union (DSU)
- [ ] Segment Tree
- [ ] Fenwick Tree (Binary Indexed Tree)
- [ ] Sparse Table
- [ ] B-Tree
- [ ] Skip List

## ⚙️ Implementation Philosophy

Each data structure will be implemented from scratch, following these principles:

1. Avoid using STL containers to implement the underlying data structure.
2. Prefer manual memory management wherever appropriate.
3. Use pointers to understand how data is stored and connected.
4. Implement constructors and destructors to manage object lifetimes.
5. Handle memory allocation and deallocation carefully.
6. Implement boundary checks and handle edge cases.
7. Document the time and space complexity of each operation.

## 📁 Planned Repository Structure

```text
Low-Level-Data-Structures/
│
├── Linear/
│   ├── DynamicArray/
│   │   ├── MyVector.cpp
│   │   └── README.md
│   │
│   ├── LinkedList/
│   │   ├── SinglyLinkedList.cpp
│   │   ├── DoublyLinkedList.cpp
│   │   └── README.md
│   │
│   ├── Stack/
│   ├── Queue/
│   └── Deque/
│
├── NonLinear/
│   ├── BinaryTree/
│   ├── BST/
│   ├── AVLTree/
│   ├── Heap/
│   ├── Trie/
│   └── Graph/
│
├── HashBased/
│   ├── HashTable/
│   ├── HashMap/
│   └── HashSet/
│
├── Advanced/
│   ├── DSU/
│   ├── SegmentTree/
│   ├── FenwickTree/
│   └── SkipList/
│
└── README.md
```

## 📈 Complexity Analysis

Each implementation will include an analysis of its operations.

For example, the Dynamic Array:

| Operation | Time Complexity |
|---|---|
| Access by index | O(1) |
| Add element (amortized) | O(1) |
| Add element (resize) | O(n) |
| Delete last element | O(1) |
| Resize | O(n) |

## 🧠 Learning Goals

By the end of this project, I aim to:

- Understand how common STL data structures work internally.
- Become comfortable with pointers and dynamic memory management.
- Understand the difference between stack and heap memory.
- Learn how allocation, reallocation, and deallocation work.
- Understand the trade-offs between different data structures.
- Develop a deeper understanding of time and space complexity.
- Become better at designing and implementing efficient data structures.

## 🚀 Progress

This is an ongoing learning project. I'll keep adding implementations as I explore more data structures and improve my understanding of C++ memory management.

**The idea is simple: Don't just use data structures. Understand how to build them.**
