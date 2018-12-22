//
//  sort_string_node.cpp
//  TrieSort
//
//  Created by Cameron Monks on 12/21/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#include "sort_string_node.hpp"

unsigned SortStringNode::size() const { return 26; }

unsigned SortStringNode::maxIndex() const {
    return (unsigned) str.size() - 1;
}

unsigned SortStringNode::hash(int index) const {
    char c = str[index];
    
    if (c >= 'a' && c <= 'z') {
        return c - 'a';
    }
    
    throw "ERROR: SortStringNode only accepts lowercase letters";
}

void SortStringNode::add(unsigned index) {
    str += 'a' + index;
}
