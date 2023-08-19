
  **QUESTION 2**
"Implement the following piecewise recurrence relation in the 3 different ways.
§ Explain the differences (advantages, disadvantages) between the 3.
§ Must be written in C
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2. Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to write the function(s)."

In the files solution I have solve the problem in three different ways:
      1.Dynamic approach in file dynamic_approach.c
      2.Memoization approach in file memoization_approach.c
      3.Recursive approach in file recursive_approach.c

       **RECURSIVE APPROACH**
Recursion is a method that call itself.
      **Advantage**
This approach is simple to understand and write
      **Disadvantage**
It has exponential time complexity due to repeated calculations


     **MEMOIZATION**

     **Advantage**
 Memoization reduces redundant calculations, improving time complexity.
     **Disadvantage**
It requires additional memory for memoization array.

      **DYNAMIC APPROACH**

      **Advantages**
Tabulation avoids recursion and memoization overhead, typically leading to better performance.
      **Disadvantages**
It uses an array to store solutions, requiring additional memory.i

    **ENVIRONMENT**
    vi editor

    **How to run the programs**
cd to the directory you want to run i.e cd question2
to run the file us this command gcc -o program_output_name filename.c
to see the result run ./program_output_name
