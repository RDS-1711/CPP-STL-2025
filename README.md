# CPP-STL-2025

# Vector Key Points
> 1. vector.begin() returns iterator. we can't dircetclty print it. 
> But we can access the data in vector, it is pointing to by using *.
> 2. Accessing object return by begin() on empty vector gives crash. 

# Vector Methods
- **push_back()** :  Add element to the end
- **insert()** : Insert element at desire position
- **at()** : Safe out of bound access
- **emplace_back()** and **emplace()** : Allow for dircet construction of object
   inside vector. other method like push and insert create temp object. 
- **remove()** : Move the element to the end not completely removing it.
- **remove_if()** : Take lamda perdicate as a removing criterea. 
- **erase()**: This remove element physically from container. 
- **erase()** and **erase_if()** : Non member functios are the modern way to erase
  or remove element from vector.
- **capacity()** : Used to get the actual memory allocated to the vector.
- **clear()** : Clear elemenet and reset vector size to zero, but no effect on the capacity.
- **resize()** : To modify the memory allocated to the vector. 
- **reserve()** : To reserve the capacity/Memory to the vector
