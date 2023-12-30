# C++ STL
This page will give the basic understanding about the STL

## What is the STL ?
STL (stranded Template library) is the poweful and essential component of the C++ language. It povides the collection of template classes and functions.        

The key components of the STL include: 

- `Containers:` Containers are the objects used to store multiple elements of the same date type or different data type.
   - #### Different types of container.
     ```
        * Sequence containers (array, vector, list)
        * Associative containers (set, map, multimap, multiset)
        * Unordered Associative container(unordered_set, unordered_map, unordered_multiset,unordered_multimap)
        * Container Adapters (stack, queue, deque, priority queue)
     ```
- `Algorithms:` These are functions that perform operations on data structures, such as searching, sorting, and manipulating elements.

   ```
    * Sorting Algorithms : 
        1. sort: Sorts the contents in the given range.
            # sort(start_iterator, end_iterator ) : This API stors the value in ascending order [1,2,3]. 
            # sort(start_iterator, end_iterator, compare_function) : This API sorts the given range but sorting should be done by compare_function. compare_function will be define by user, this function return type must in bool date type.

        2. is_sorted: This API is return TRUE if the given range is sorted else return FALSE.
            # is_sorted(start_iterator, end_iterator) : Checks the range defined by iterators start_iterator and end_iterator in ascending order. [1,2,3] output :: TRUE, [1, 4, 3] output :: FALSE.
            # is_sorted(start_iterator, end_iterator, compare_function) : It also checks the given range but user need to define how the sorting must be done.

        3. partial_sort: This API sort the content partially. Mean that till mid range sort the values and remaining half will be same as initially Eg: [9,8,7,6,5,4,3,2,1] output :: [9,8,7,6,5,4,3,2,1]
            # partial_sort(start, middle, end ) : sorts the range from start to end in such a way that the elements before middle are in ascending order and are the smallest elements in the range
            # partial_sort(start, middle, end, compare_function) : sorts the range from start to end in such a way that the elements before middle are sorted with the help of compare_function and are the smallest elements in the range.

    * Search algorithms: 
        1. binary_search : This function returns Boolean true if the element is present in the given range, else Boolean false is returned
            # binary_search(first, last, value)
            # binary_search(first, last, value,compare_function)
            Note : make sure that the element in sorted otherwise returns the wrong put.
      
        2. equal_range : It is used to find the range of elements that match a certain value in a sorted range. It returns a pair of iterators that represent the lower and upper bounds of the range containing all elements that are equivalent to the specified value.
            # equal_range(first, last, value)
            # equal_range(first, last, value, compare_function)
        
        3. upper_bound : It is used to find the iterator pointing to the first element in the range that is greater than a specified value. It is commonly used with sorted ranges.
            # upper_bound(first, last, value)

        4. lower_bound : It is used to find the iterator pointing to the first element in a sorted range that is not less than a specified value. It is commonly used with sorted ranges.
            # lower_bound(first, last, value)

    * Non modifying algorithms:
        1. count : This API returns the number of elements in the given range that are equal to given value. Ex: [1,1,2,3,5,6] output : 2 : cout (start address, end address, 1)
            # count(first ,last ,value) 

        2. equal : This API return the Boolean TRUE if all the elements in one range compare equal to the corresponding elements in other range. other wise return Boolean FALSE.
            # equal(first1, last1, first2)
            # equal(first1 ,last1 ,first2 ,cmp_function) 

        3. mismatch : It is used to find the first pair of elements that differ in two sequences. It returns a pair of iterators representing the position of the first mismatch in each sequence.
            # mismatch(first1, last1, first2)
            # mismatch(first1, last1, first2, cmp_function)

        4. search :This function is used to find the first occurrence of a subsequence within a specified range.
            # search(first1 ,last1 ,first2 ,last2)
            # search(first1 ,last1 ,first2 ,last2, cmp_function) 

        5. search_n :This function is used to find the first occurrence of a subsequence of a specified number of consecutive elements in a given range. 
            # search_n(first1, last1, count, value)
            # search_n(first1, last1, count, value, cmp_function)

    * Modifying algorithms
    1 . copy and copy_n:
        # copy: Copies elements from a source range to a destination range.
        # copy_n: Copies a specified number of elements from a source range to a destination range.

    2 . fill and fill_n:
        # fill: Assigns a specified value to all elements in a range.
        # fill_n: Assigns a specified value to the first n elements in a range.
    
    3 . move: Moves elements from one range to another. It is used for efficient element transfer between containers.
    
    4 . transform: Applies a specified operation to each element in a range and stores the result in another range.
    
    5 . generate: Fills a range with generated values by calling a generator function.
    
    6 . swap: Swaps the values of two objects.

    7 . swap_ranges:Swaps the values of corresponding elements in two ranges.
    
    8 . reverse and reverse_copy:
        # reverse: Reverses the order of elements in a range.
        # reverse_copy: Reverses the order of elements in a range and copies them to another range.

    9 . rotate: Rotates the elements in a range, moving a specified position to the beginning.

    10. unique and unique_copy:
        # unique: Removes consecutive duplicate elements from a range.
        # unique_copy: Copies the unique elements from a range to another range.

    * Numeric algorithms :
        1. iota: This function is used to fill a range with a sequence of increasing values.

        2. accumulate: This function calculates the sum of all elements in a range.

        3. partial_sum: This function calculates the partial sums of a sequence and stores the results in another range.

    * Minimum and Maximum operations:
        1. max: Returns the greater of two values
        
        2. max_element: Finds the maximum element in a range.
        
        3. min: Returns the smaller of two values.
        
        4. min_element: Finds the minimum element in a range.
        
        5. minmax: Returns a pair with the smallest and largest of two values.
       
        6. minmax_element: Returns a pair of iterators pointing to the smallest and largest elements in a range.
        
        7. lexicographically_compare: Compares two ranges lexicographically.
      
        8. next_permutation: Rearranges elements into the next lexicographically greater permutation.
       
        9. prev_permutation: Rearranges elements into the next lexicographically smaller permutation.
   ```

- `Iterators:` It provide a uniform way to access elements in a sequence, whether it's an array, a container, or any other data structure. Iterators act as a bridge between algorithms and data structures, allowing generic algorithms to operate on different types of sequences.

    - Different types of Iterators:
    ```
        1. Input Iterators: Supports reading values from the pointed-to element. Can only be incremented (read-only).
        
        2. Output Iterators: Supports writing values to the pointed-to element. Can only be incremented (write-only).
        
        3. Forward Iterators: Combines both input and output iterator capabilities. Supports multiple passes through the data. Can be incremented and dereferenced.
        
        4. Bidirectional Iterators: Extends forward iterator capabilities. Supports moving both forward and backward. Can be incremented and decremented.
        
        5. Random Access Iterators: Extends bidirectional iterator capabilities. Supports direct access to any element in the sequence. Supports arithmetic operations like +, -, +=, -=, etc.
    ```

