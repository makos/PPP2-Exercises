# Chapter 5 "Errors" review
1. Name four major types of errors and briefly define each one.
- compile-time errors - found by the compiler, easiest to fix, spilt into type 
errors and syntax errors 
- link-time errors - found by the linker, occurs when there are multiple 
definitions of functions or declarations don't match
- run-time errors - errors found by checks (asserts) during execution. Can be 
split further into:
    - found by computer (hardware and system)
    - found by library
    - found by the program itself
- logic errors - hardest errors to find, because the program compiles and runs 
but gives erroneus results. They require the most time to find and fix.
2. What kinds of errors can we ignore in student programs?
We can ignore hardware errors and system software errors.
3. What guarantees should every completed project offer?
It should produce desired results for all legal inputs. It should provide error 
messages for illegal inputs.
4. List three approaches we can take to eliminate errors in programs and produce 
acceptable software.
- organize software to minimize errors
- eliminiate most errors we made through debugging and testing
- make sure the remaining errors are not serious
5. Why do we hate debugging?
It is time-consuming and extremely hard task.
6. What is a syntax error? Give five examples.
Not closing curly braces, not providing a return type when declaring a function, 
not closing parentheses, ommitting a semicolon after a statement, not closing
quotes on a string, wrong capitalization (Int instead of int).
7. What is a type error? Give five examples.
Trying to assign wrong values to a variable, calling undeclared variables or 
functions, calling functions with wrong types of arguments, calling functions
with wrong amount of arguments.
8. What is a linker error? Give three examples.
Multiple definitions of a function, undeclared functions, including files
multiple times.
9. What is a logic error? Give three examples.
Off-by-one error (accessing a vector with v[v.size()]), semicolon directly
after an if statement (the body gets executed every time), wrong comparison
operators (<= instead of <).
10. List four potential sources of program errors discussed in the text.
- incomplete programs
- unexpected arguments
- unexpected input
- logical errors
11. How do you know if a result is plausible? What techniques do you have to 
answer such questions?
We must know what the result should look like (e.g. area can't be negative).
We can estimate "on the back of the napkin" if our result is sane.
12. Compare and contrast having the caller of a function handle a run-time error
vs. the called function’s handling the runtime error.
Caller needs to check values each time before calling the function.
Caller doesn't know exactly what happens in the called function.
Often the resulting code is ugly and error-prone

Called function can check sanity of passed in values, reducing amount of
checking code in caller functions. This provides encapsulation and cleaner code.
13. Why is using exceptions a better idea than returning an “error value”?
Caller needs to check for the "error value", adding more code. We can forget
to test, which can be a source of logic errors down the line. Exceptions are 
automatically caught in try-catch blocks.
14. How do you test if an input operation succeeded?
We can do if (cin).
15. Describe the process of how exceptions are thrown and caught.
Exceptions are thrown in functions, using "throw Object", which returns the
execution instead of normal "return". That "Object" is then "caught" by the
caller function, and usually contents of it are a string that is printed to
stderr.
16. Why, with a vector called v, is v[v.size()] a range error? What would be the
result of calling this?
Because size of v is <0, v.size()), so calling it that way tries to access an
area of memory that is outside of the vector's.
17. Define pre-condition and post-condition; give an example (that is not the area() function from this chapter), preferably
a computation that requires a loop.
Pre-condition is a test to check if passed in values are sane and within
required limits.
Post-condition is a test to check if the return value (before returning) is
sane.
18. When would you not test a pre-condition?
19. When would you not test a post-condition?
20. What are the steps in debugging a program?
- get the program to compile
- get the program to link
- get the desired outputs
21. Why does commenting help when debugging?
It provides explanations to parts of code that may not be obvious.
22. How does testing differ from debugging?
Testing tries to uncover errors in our program, debugging is fighting already
uncovered errors.
