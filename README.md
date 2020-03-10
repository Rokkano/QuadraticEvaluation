# QuadraticEvaluation

<img align="right" src="https://zupimages.net/up/20/11/nzge.png">

This project is a tiny bit of code in C, that can produce a .obj file that represents the complex values of a quadratic equation. For example, this is the output, after compiling, and execution with the following arguments:

`./output 1 0 0 5 -5 0.5`

This represents the values for x², from -5 to 5 with a step of .5f.

`./output (double a) (double b) (output c) [int upperbound] [int lowerbound] [float step] `

## Warning

As the program is representing values as cube and it is exponential, the program can quickly get slowed, especially after [-15;15] so be careful.
