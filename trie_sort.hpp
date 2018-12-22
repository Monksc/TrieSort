//
//  trie_sort.hpp
//  TrieSort
//
//  Created by Cameron Monks on 12/20/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#ifndef trie_sort_hpp
#define trie_sort_hpp

//#include <stdio.h>
//#include <vector>

// T must implement
// unsigned maxIndex()
// unsigned hash(int index);
// void add(unsigned index);
// unsigned size();

template <class T>
class TrieSortNode {
public:
    
    TrieSortNode() {}
    
    void foo();
};

/*
template <class T>
class TrieSortNode {
private:
    std::vector<TrieSortNode*> children;
    unsigned count;
    
public:
    
    TrieSortNode() : children(T().size()), count(0) {}
    
    void insert();
 
    operator std::vector<T>() const { return sort(); }
    std::vector<T> sort(T value) const;
    std::vector<T> sort() const { return sort(T()); }
 
//private:
    //void insert(const T &value, int index);
    //std::vector<T> sort(std::vector<T> &arr, T &value) const;
};
*/

#endif /* trie_sort_hpp */
