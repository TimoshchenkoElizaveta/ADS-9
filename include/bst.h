// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_

#include <string>

template <typename T>
struct Node {
    T data;
    int count; // Счетчик частоты слова
    Node* left;
    Node* right;

    Node(const T& data) : data(data), count(1), left(nullptr), right(nullptr) {}
};

template <typename T>
class BST {
public:
    Node<T>* root;

    BST() : root(nullptr) {}

    ~BST() {
        clear(root);
    }

    void insert(const T& data);
    void clear(Node<T>* node);

    // Функция для частотного анализа (в alg.cpp)
    void analyze(const std::string& filename);

private:
    Node<T>* insert(Node<T>* node, const T& data);
    Node<T>* find(Node<T>* node, const T& data);
};
#endif  // INCLUDE_BST_H_
