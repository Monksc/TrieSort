//
//  main.cpp
//  TrieSort
//
//  Created by Cameron Monks on 12/20/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "trie_sort.hpp"
//#include "sort_string_node.hpp"




int main(int argc, char* argv[]) {
    
    TrieSortNode<int> head;
    
    std::string line;
    std::ifstream myfile("input.txt");
    if (!myfile.is_open()) {
        std::cerr << "Failed to open input.txt" << std::endl;
        return 1;
    }
    
    while (getline(myfile, line)) {
        //SortStringNode p(line);
        head.foo();
    }
    myfile.close();
    
    /*
    std::ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open output.txt" << std::endl;
    }
    
    std::vector<SortStringNode> arr = head;
    for (unsigned i = 0; i < arr.size(); i++) {
        outputFile << ((std::string)arr[i]) << std::endl;
    }
    
    outputFile.close();*/
    
    return 0;
}
