/*
Suppose that high, low and middle are all pointers variables of the same type, 
and that low and high point to elements of an array. Why is the following 
statement illegal, and how could it be fixed

*/

//middle = (low + high)/2;

/*
From K. n. King answers:

The statement is illegal because pointers cannot be added. Here's a legal 
statement with the desired effect:

middle= low + (high - low) / 2

The value of (high - low)/2 is not a pointer, is an integer.So it can be added to
low

 */