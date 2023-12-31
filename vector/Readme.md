
# Vector

- Vector is a basic dynamic arrays that have the ability to change size whenever elements are added/deleted from them. 
- Vector elements can be easily accessed and traversed using iterators. 
- A vector stores elements in contiguous memory locations.

#### Syntax:
```
vector<object_type> variable_name;
```
### Member Functions:

#### push_back(const T& value): 
````
Appends the element value at the end of the vector. It accepts an argument of the type held by the container and creates a copy of that argument, adding the copy to the end of the container.
````
#### emplace_back(const T& value): 
````
It is used to construct an element in-place at the end of the container. It accepts constructor arguments for the type held by the container and constructs an element directly at the end of the container without making an additional copy.
````
#### pop_back():
````
Removes the last element from the vector.
````
#### size():
````
Returns the number of elements in the vector.
````
#### empty():
````
Returns true if the vector is empty; otherwise, returns false.
````
#### clear():
````
Removes all elements from the vector.
````
#### front():
````
Returns a reference to the first element in the vector.
````
#### back():
````
Returns a reference to the last element in the vector.
````

#### begin() and end():
````
Return iterators pointing to the first and one past the last element of the vector, respectively.
````
#### erase(iterator pos):
````
Removes the element at the specified position.
````

#### erase(iterator first, iterator last):
````
Removes elements in the range [first, last).
````

### Compile the cpp file 
````
g++ -std=c++11 vector.cpp -o vector
````
