//
//  sort_string_node.hpp
//  TrieSort
//
//  Created by Cameron Monks on 12/21/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#ifndef sort_string_node_hpp
#define sort_string_node_hpp

#include <stdio.h>
#include <string>

class SortStringNode {
public:
    
    SortStringNode() {}
    SortStringNode(const std::string &s) : str(s) {}
    
    unsigned size() const;
    unsigned maxIndex() const;
    unsigned hash(int index) const;
    void add(unsigned index);

    operator std::string() const { return str; }
    
private:
    std::string str;
};

#endif /* sort_string_node_hpp */
