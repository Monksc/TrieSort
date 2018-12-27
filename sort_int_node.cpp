//
//  sort_int_node.cpp
//  TrieSort
//
//  Created by Cameron Monks on 12/26/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#include "sort_int_node.hpp"
#include <iostream>
unsigned SortIntNode::hash(int index) const {
    //return ((value & (1 << (maxIndex() - index))) > 0) ? 1 : 0; // one bit at a time
    
    index = (maxIndex() - index) * 4;
    
    int value1 = ((value & (1 << (index))) > 0) ? 1 : 0;
    int value2 = ((value & (1 << (index + 1))) > 0) ? 1 : 0;
    int value3 = ((value & (1 << (index + 2))) > 0) ? 1 : 0;
    int value4 = ((value & (1 << (index + 3))) > 0) ? 1 : 0;
    
    return (((((value4 << 1) + value3) << 1) + value2) << 1) + value1;
}

void SortIntNode::add(unsigned index) {
    //value = (value << 1) + index; // one bit at a time
    value = (value << 4) + index;
}
