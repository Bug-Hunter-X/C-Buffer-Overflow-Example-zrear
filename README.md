# C Buffer Overflow Example

This repository demonstrates a common C programming error: a buffer overflow.  The `bug.c` file contains code that attempts to access memory beyond the allocated array bounds.  The `bugSolution.c` file provides a corrected version.  This example highlights the importance of careful memory management in C to prevent security vulnerabilities and program crashes.

**To compile and run:**

1.  Save the code in `bug.c` and `bugSolution.c`.
2.  Compile using a C compiler (like GCC): `gcc bug.c -o bug` and `gcc bugSolution.c -o bugSolution`
3.  Run the executables: `./bug` and `./bugSolution`

Observe the different behaviors. The `bug` executable may crash or produce unpredictable results, while `bugSolution` should work correctly.