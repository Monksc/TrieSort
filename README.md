# TrieSort

This is my implementation of a Trie Sort. A Trie Sort is when you put all of your elements into a trie and then remove them into an array. 

# Inserting Elements
Before you insert you must view your data as an array. A string can be an array of characters. An integer can be an array of bits. Then when you go to insert it, lets say we are inserting the word car. Each node will have an array size 26 of pointers to other Nodes. It will also have a count variable. We will then start with the head node then go to the 2nd ('c') index node. Then that node's 'a' first index and finally go to the 'r' index node. Then increment the count by 1 on just the last node.

# Sorting Elements
The elements by default are already sorted. 


It can sort an array in O(N * D) where N is the size of the array and D is the depth of the Trie. If it were to sort words in a dictionary the N would be the amount of words and the D would be the average size of each word. It sorts it in linear time for unsigned int of 16 bit values. 


When word size is 1.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                0.00445 	                0.00495 	 
     100000 	                 0.0343 	                  0.038 	 
    1000000 	                  0.305 	                  0.401 	 
   10000000 	                    3.8 	                   3.87 	 
  100000000 	                   37.1 	                   41.2 	 

When word size is 2.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                0.00422 	                0.00787 	 
     100000 	                 0.0328 	                  0.071 	 
    1000000 	                  0.311 	                  0.708 	 
   10000000 	                   4.17 	                   7.14 	 
  100000000 	                     39 	                   70.3 	 

When word size is 3.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0102 	                0.00892 	 
     100000 	                 0.0489 	                  0.104 	 
    1000000 	                  0.367 	                   1.03 	 
   10000000 	                   4.44 	                   10.2 	 
  100000000 	                     45 	                    103 	 

When word size is 4.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0171 	                0.00898 	 
     100000 	                  0.127 	                  0.111 	 
    1000000 	                  0.859 	                   1.31 	 
   10000000 	                   6.74 	                   13.8 	 
  100000000 	                   63.5 	                    134 	 

When word size is 5.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0241 	                0.00889 	 
     100000 	                  0.193 	                   0.11 	 
    1000000 	                    1.6 	                   1.33 	 
   10000000 	                   14.2 	                   15.6 	 
  100000000 	                    104 	                    175 	 

When word size is 6.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0294 	                0.00899 	 
     100000 	                  0.257 	                  0.113 	 
    1000000 	                   2.35 	                    1.4 	 
   10000000 	                   21.7 	                   16.2 	 
  100000000 	                    688 	                    190 	 

When word size is 7.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0369 	                0.00894 	 
     100000 	                  0.338 	                  0.112 	 
    1000000 	                   3.07 	                   1.34 	 
   10000000 	                   32.6 	                   16.5 	 
  100000000 	               1.49e+03 	                    187 	 

When word size is 8.
Words Count 	    My method (seconds) 	   C++ method (seconds) 	 
      10000 	                 0.0533 	                 0.0116 	 
     100000 	                  0.442 	                  0.111 	 
    1000000 	                    3.8 	                   1.34 	 
   10000000 	                   41.4 	                   15.9 
