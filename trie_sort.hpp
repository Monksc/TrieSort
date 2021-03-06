//
//  trie_sort.hpp
//  TrieSort
//
//  Created by Cameron Monks on 12/20/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#ifndef trie_sort_hpp
#define trie_sort_hpp

#include <stdio.h>
#include <vector>

unsigned long long PRETAZALS = 0;

// T must implement
// unsigned maxIndex()
// unsigned hash(unsigned index);
// void add(unsigned index);
// unsigned size();

template <class T>
class TrieSortNode {
private:
    std::vector<TrieSortNode*> children;
    unsigned count;
    
public:
    
    TrieSortNode() : children(T().size()), count(0) {}
    ~TrieSortNode();
    
    void insert(const T &value);
 
    operator std::vector<T>() const { return sort(); }
    std::vector<T> sort(T value) const;
    std::vector<T> sort() const { return sort(T()); }
 
private:
    void insert(const T &value, unsigned index);
    void sort(std::vector<T> &arr, T &value) const;
};

template <class T, class K>
std::vector<K> convertTo(const std::vector<T> &arr);

template <class T, class K>
std::vector<T> sort(const std::vector<T> &arr);

#include "trie_sort.cpp"

#endif /* trie_sort_hpp */
