//
//  sort_int_node.hpp
//  TrieSort
//
//  Created by Cameron Monks on 12/26/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#ifndef sort_int_node_hpp
#define sort_int_node_hpp

#include <stdio.h>

class SortIntNode {
public:
    SortIntNode() : value(0) {}
    SortIntNode(unsigned v) : value(v) {}
    
    // Either the bit can be off or on
    unsigned size() const { return 16; } // 2 for one bit at a time
    
    // Last index of a bit
    unsigned maxIndex() const { return 3; } // 15 for one bit at a time
    
    unsigned hash(int index) const;
    void add(unsigned index);
    
    operator unsigned() const { return value; }
    
private:
    unsigned value;
};

#endif /* sort_int_node_hpp */
