// Reference must be initialized. Reference always needs to be initialized && a reference cannot be reseated i.e always refers to the same object.
// A pointer is a type that restores an adress and we can modify it at runtime. if we have to access the content of that address we need to dereference it.
int a(); // function that returns an int

std::vector<int> a(); // vfunction that returns a vector of int 

double my_dbl = 3.14; // double variable

int i((int)my_dbl); // function with an int paameter and int output
/* 
sometimes it is not possible to distinguish between function definitions and variable initilizations with ()
in these cases the compiler has to interpret the statement as a functoon! 
Examples as above */
/*
 These mistakes can be avoided by the use of uniform initialization, i,e use{} instead of () for initialization.
 This is called the most vexing parse.
 The most vexing parse is a situation in C++ where the compiler interprets a declaration as a function declaration instead of an object declaration.
  This can lead to unexpected behavior and errors in the code.
To avoid this, we can use uniform initialization with curly braces {} instead of parentheses ().
*/

