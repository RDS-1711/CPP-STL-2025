# CPP-STL-2025

# Vector Key Points
> 1. vector.begin() returns iterator. we can't dircetclty print it. 
> But we can access the data in vector, it is pointing to by using *.
> 2. Accessing object return by begin() on empty vector gives crash. 

# Vector Methods
- **push_back()** :  add element to the end
- **insert()** : Insert element at desire position
- **at()** : safe out of bound access
- **emplace_back()** and **emplace()** : allow for dircet construction of object
   inside vector. other method like push and insert create temp object. 
- **remove()** : move the element to the end not completely removing it.
- **remove_if()** : take lamda perdicate as a removing criterea. 
- **erase()**: this remove element physically from container. 
- **erase()** and **erase_if()** : non member functios are the modern way to erase
  or remove element form vector.
