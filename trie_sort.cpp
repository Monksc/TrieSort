//
//  trie_sort.cpp
//  TrieSort
//
//  Created by Cameron Monks on 12/20/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//  

#include "trie_sort.hpp"

template <class T>
TrieSortNode<T>::~TrieSortNode() {
    
    for (unsigned i = 0; i < children.size(); i++) {
        if (children[i] != NULL) {
            delete children[i];
        }
    }
}

template <class T>
void TrieSortNode<T>::insert(const T &value) {
    insert(value, 0);
}

template <class T>
void TrieSortNode<T>::insert(const T &value, unsigned index) {
    PRETAZALS++;
    if (index > value.maxIndex()) {
        count++;
        return;
    }
    
    unsigned i = value.hash(index);
    if (children[i] == NULL) {
        children[i] = new TrieSortNode();
    }
    
    children[i]->insert(value, index + 1);
}

template <class T>
std::vector<T> TrieSortNode<T>::sort(T value) const {
    
    std::vector<T> arr;

    sort(arr, value);
    
    return arr;
}

template <class T>
void TrieSortNode<T>::sort(std::vector<T> &arr, T &value) const {
    
    PRETAZALS+=count + 1;
    for (unsigned i = 0; i < count; i++) {
        arr.push_back(value);
    }

    
    for (unsigned i = 0; i < children.size(); i++) {
        if (children[i] != NULL) {
            T v = value;
            v.add(i);
            children[i]->sort(arr, v);
        }
    }

}


template <class T, class K>
std::vector<K> convertTo(const std::vector<T> &arr) {
    
    std::vector<K> rArr;
    
    for (unsigned i = 0; i < arr.size(); i++) {
        rArr.push_back(arr[i]);
    }
    
    return rArr;
}

template <class T, class K>
std::vector<T> sort(const std::vector<T> &arr) {
    
    std::vector<K> specialArray = convertTo<T, K>(arr);
    
    TrieSortNode<K> head;
    for (unsigned i = 0; i < arr.size(); i++) {
        head.insert(specialArray[i]);
    }
    
    specialArray = head;
    
    return convertTo<K, T>(specialArray);
}
