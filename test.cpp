//
//  main.cpp
//  TestAll
//
//  Created by Cameron Monks on 12/26/18.
//  Copyright © 2018 Cameron Monks. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>

#include "../TrieSort/trie_sort.hpp"
#include "../TrieSort/sort_string_node.hpp"
#include "../TrieSort/sort_int_node.hpp"

// MARK: RANDOM WORDS GENERATOR

char randomChar() {
    return rand() % 26 + 'a';
}

std::string generateWord(unsigned wordSize) {
    std::string str = "";
    
    for (unsigned i = 0; i < wordSize; i++) {
        str += randomChar();
    }
    
    return str;
}

std::vector<std::string> generateRandomVector(unsigned count, unsigned wordSize) {
    
    std::vector<std::string> words;
    
    for (unsigned i = 0; i < count; i++) {
        words.push_back(generateWord(wordSize));
    }
    
    return words;
}


// MARK: random int generator

std::vector<unsigned> generateRandomNumbers(unsigned count) {
    
    std::vector<unsigned> arr;
    
    for (unsigned i = 0; i < count; i++) {
        arr.push_back(rand() % 65536);
    }
    
    return arr;
}

int main(int argc, const char * argv[]) {
    
    unsigned intSize[] = {10000, 100000, 1000000, 10000000, 100000000 };
    
    std::cout << std::setw(11) << std::right << "Int Count \t " <<
        std::setw(22) << "My method (seconds)" << " \t " <<
        std::setw(22) << "C++ method (seconds)" << " \t " << std::endl;
    // TEST INTS
    for (unsigned i = 0; i < 5; i++) {
        
        // generate intSize[i] random numbers
        std::vector<unsigned> randNumbs = generateRandomNumbers(intSize[i]);
        
        std::clock_t start;
        double myDuration;
        double cDuration;
        
        // time my algorithem
        start = std::clock();
        std::vector<unsigned> myOrdered = sort<unsigned, SortIntNode>(randNumbs);
        myDuration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        
        // time c++ algorithem
        start = std::clock();
        std::sort(randNumbs.begin(), randNumbs.end());
        cDuration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
        
        // check for correctness
        if (randNumbs.size() != myOrdered.size() || myOrdered.size() != intSize[i]) {
            std::cerr << "The sizes of the array are not even the same. Huge error!" << std::endl;
            return 1;
        }
        for (unsigned i = 0; i < myOrdered.size(); i++) {
            if (randNumbs[i] != myOrdered[i]) {
                std::cerr << randNumbs[i] << " != " << myOrdered[i] << std::endl;
                return 1;
            }
        }
        
        // print out results
        std::cout << std::setw(11) << std::right << intSize[i] << " \t " <<
            std::setw(22) << std::setprecision(3) << std::right << myDuration << " \t " <<
            std::setw(22) << std::setprecision(3) << std::right << cDuration << " \t " << std::endl;
    }
    
    // TEST STRINGS
    unsigned wordSizes[] = {10000, 100000, 1000000, 10000000, 100000000};
    
    for (unsigned j = 1; j <= 10; j++) {
        
        std::cout << "When word size is " << j << "." << std::endl;
        
        std::cout << std::setw(11) << std::right << "Words Count \t " <<
                std::setw(22) << "My method (seconds)" << " \t " <<
                std::setw(22) << "C++ method (seconds)" << " \t " << std::endl;
        for (unsigned i = 0; i < 5; i++) {
            
            std::vector<std::string> randomWords = generateRandomVector(wordSizes[i], j);
            
            std::clock_t start;
            double myDuration;
            double cDuration;
            
            start = std::clock();

            std::vector<std::string> myWords = sort<std::string, SortStringNode>(randomWords);
            
            myDuration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
            
            start = std::clock();
            
            std::sort(randomWords.begin(), randomWords.end());
            
            cDuration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
            
            if (randomWords.size() != myWords.size() || myWords.size() != wordSizes[i]) {
                std::cerr << "The sizes of the array are not even the same. Huge error!" << std::endl;
                return 1;
            }
            for (unsigned i = 0; i < randomWords.size(); i++) {
                if (randomWords[i] != myWords[i]) {
                    std::cerr << randomWords[i] << " != " << myWords[i] << std::endl;
                    return 1;
                }
            }
            
            std::cout << std::setw(11) << std::right << wordSizes[i] << " \t " <<
                std::setw(22) << std::setprecision(3) << std::right << myDuration << " \t " <<
                std::setw(22) << std::setprecision(3) << std::right << cDuration << " \t " << std::endl;
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}

