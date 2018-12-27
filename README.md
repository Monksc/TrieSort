# TrieSort
This is my implementation of a Trie Sort. A Trie Sort is when you put all of your elements into a trie and then remove them into an array. 
<br />
# Inserting Elements
Before you insert you must view your data as an array. A string can be an array of characters. An integer can be an array of bits. Then when you go to insert it, lets say we are inserting the word car. Each node will have an array size 26 of pointers to other Nodes. It will also have a count variable. We will then start with the head node then go to the 2nd ('c') index node. Then that node's 'a' first index and finally go to the 'r' index node. Then increment the count by 1 on just the last node.
<br />
# Sorting Elements
The elements by default are already sorted. You just need to pull them out. To do this recursively, you start with the head node. You then create a new default string object if your sorting strings or 0 for ints. Then for strings you go to the first index ('a') and add an a to the object. Then add in this object of just a string of 'a' to the array the count given times. Eventually it will become sorted.
<br />
# O Notation
It can sort in O(N * D) where N is the size of the array and D is the depth of the Trie. If it were to sort words in a dictionary the N would be the amount of words and the D would be the average size of each word. It sorts it in linear time for unsigned int of 16 bit values because N is the size of the array and D will be a constant 16.
<br />
# Comparing my trie sort to C++ std::sort
When word size is 1.<br />
<span>
Words Count           My method (seconds) 	   C++ method (seconds)<br />
      10000 	                0.00445 	                0.00495<br />
     100000 	                 0.0343 	                  0.038<br />
    1000000 	                  0.305 	                  0.401<br />
   10000000 	                    3.8 	                   3.87<br />
  100000000 	                   37.1 	                   41.2<br />
</span>
<br />
When word size is 2.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                0.00422 	                0.00787<br />
     100000 	                 0.0328 	                  0.071<br />
    1000000 	                  0.311 	                  0.708<br />
   10000000 	                   4.17 	                   7.14<br />
  100000000 	                     39 	                   70.3<br />
<br />
When word size is 3.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0102 	                0.00892<br /> 
     100000 	                 0.0489 	                  0.104<br /> 
    1000000 	                  0.367 	                   1.03<br /> 
   10000000 	                   4.44 	                   10.2<br /> 
  100000000 	                     45 	                    103<br /> 
<br />
When word size is 4.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0171 	                0.00898<br /> 
     100000 	                  0.127 	                  0.111<br /> 
    1000000 	                  0.859 	                   1.31<br /> 
   10000000 	                   6.74 	                   13.8<br /> 
  100000000 	                   63.5 	                    134<br /> 
<br />
When word size is 5.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0241 	                0.00889<br /> 
     100000 	                  0.193 	                   0.11<br /> 
    1000000 	                    1.6 	                   1.33<br /> 
   10000000 	                   14.2 	                   15.6<br /> 
  100000000 	                    104 	                    175<br /> 
<br />
When word size is 6.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0294 	                0.00899<br /> 
     100000 	                  0.257 	                  0.113<br />
    1000000 	                   2.35 	                    1.4<br />
   10000000 	                   21.7 	                   16.2<br />
  100000000 	                    688 	                    190<br />
<br />
When word size is 7.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0369 	                0.00894<br /> 
     100000 	                  0.338 	                  0.112<br />
    1000000 	                   3.07 	                   1.34<br />
   10000000 	                   32.6 	                   16.5<br />
  100000000 	               1.49e+03 	                    187<br />
<br />
When word size is 8.<br />
Words Count 	    My method (seconds) 	   C++ method (seconds)<br />
      10000 	                 0.0533 	                 0.0116<br />
     100000 	                  0.442 	                  0.111<br />
    1000000 	                    3.8 	                   1.34<br />
   10000000 	                   41.4 	                   15.9<br />
