Development Environment
Language: C
Compiler: gcc (GNU Compiler Collection)

How to Compile and Run
Open a terminal
Navigate to the directory containing the source code file
Run the following command to compile the code  gcc -o output_file_name filename.c
To execute the program run ./output_file_name

The provided code implements a Fibonacci sequence generator using dynamic programming and custom data structures. The program performs arithmetic operations such as addition, multiplication, and subtraction on user-defined nodes, and then calculates the Fibonacci sequence based on the generated values.

Custom Node structure: Represents arithmetic operations with two arguments and a specified operation type.
makeFunc function: Creates a new Node with the specified operation type.
calc function: Performs the specified operation based on the Node type and arguments.
fib function: Calculates the Fibonacci sequence using dynamic programming.
