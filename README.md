# Introduction-to-Dynamic-Memory-Allocation-in-CPP
In this Segment I have included the key concept of Dynamic Memory Allocation like, how to create a dynamic variable, a dynamic array and why dynamic memory allocation is required in coding. I have attached some codes and explanations for it for better understanding of new learners

Dynamic Memory Allocation is used to allocate memory at run time from the heap memory.
The size of dynamically allocated memory can be decided and changed during program execution.
Unlike static (normal) variables, dynamically allocated memory is not automatically deallocated when a function ends.
Therefore, we must explicitly free the memory using delete (or delete[]), otherwise memory leakage occurs.

Because heap memory persists beyond function scope, the allocated memory can be accessed using pointers even after the function returns.

FORMAT TO CREATE A DYNAMIC VARIABLE: 
data_type *variable-name = new data_type

FORMAT TO CREATE A DYNAMIC Array:
data_type *variable-name[] = new data_type[size of the aray]
