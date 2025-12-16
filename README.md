This project has been created as part of the 42 curriculum by tadeyelu.

# Description
The goal of this project is to recode the printf() function from libc. Our recoded version must be able to handle these conversions:
1. Char 
2. String
3. Pointers (unsinged long datatype that are later converted to hexadecimals)
4. Decimals and Integers
5. Unsinged Integers
6. Unsigned Integers to Hexadecimals with the letters in either capital (X) or small (x) letters

The function should also obe able to return the total number of chars the function returned in the file descriptor.

# Instructons
To compile the library, simply run: ``` make ```<br>
To clean object files: ``` make clean ``` <br>
To clean all generated files ```make fclean ``` <br>
To rebuild from scratch: ```make re ``` <br>

## How to use the library
Include the ft_printf.h header in your source file, then compile and link:
```
cc -Wall -Wextra -Werror main.c libftprintf.a
./a.out
```


# Resources
Here are some resources i used to understand the concept of variadic functions in C: [Link 1](https://wiki.sei.cmu.edu/confluence/display/c/MSC39-C.+Do+not+call+va_arg%28%29+on+a+va_list+that+has+an+indeterminate+value), [Link 2](https://www.geeksforgeeks.org/c/variadic-functions-in-c/), [Link 3](https://hackernoon.com/what-is-va_list-in-c-exploring-the-secrets-of-ft_printf).