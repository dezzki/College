### **UNIT 3: Object Oriented Programming (29 Questions)**

**Classes, Objects & Access Specifiers**
1. What for do we use key word `const` at the end of a function header?
2. Write a method, `Matrix transpose();` of a class Matrix, which returns the transpose of the calling Matrix object. 
3. Write a program to create a class called Person having the following data members: (i) Aadhar No, Name, birth_year. Write a following function to: (i) create an object for a person using parameterized constructor, (ii) calculate_age, (iii) display details.
4. Consider the following class `Ratio { private: int numerator; int denominator; public: ... }`. Define all functions and write `main()` to compute the equation `Result = 2/3 + 4/5` by calling these functions using appropriate class Ratio objects.

**Constructors & Destructors**
5. Write a copy constructor for the fraction class and use it in the `main()` function.
6. In the following code, point out the statements in which copy constructor will be called: `class Rational { ... }`.
7. Consider the following class definition: `class circle { float radius; };`. Define the following member functions: (i) A default constructor (ii) A parameterized constructor (iii) A function `areaofcircle()`.
8. Can constructors be overloaded? Write four important properties of constructor functions.

**Static Members & Friend Functions**
9. Give the output that will be produced on execution of the following code segment: `class Test { static int count; public: Test & fun(); }; ...`.
10. Write a program to keep a count of number of objects of a class, created and destroyed using static data members, and write a static member function to print the count.
11. What is the purpose of declaring data members of a class as static? How are static variables of a class initialized?.
12. Find error(s) and give output that will be produced after correction in the following code segment: `class Sample { int value; static int counter; ... }`.

**Operator Overloading**
13. Write a function to overload `+=` operator for a fraction class using the 'this' pointer.
14. Write a friend function to overload the `*` operator that multiplies two complex numbers and returns the result as a complex number.
15. Consider the class `Rationalnumber`. Write the definitions of the following member functions: (i) Parameterized constructor (ii) Overload `+` operator to add two rational numbers (iii) Display function,.
16. Define a class fraction having data members numerator and denominator and increment the fraction using postfix operator `++` (using operator overloading),.

**Inheritance**
17. Consider the following class definition: `class base { int p1; protected: int p2; public: int p3; };`. What will be the visibility mode of p1, p2, p3 in the derived class in different inheritance modes (private/protected)?.
18. Find and explain the error(s) from the following code segment: `class Base { private: int a; protected: int b; public: int c; ... }; class Derived : protected Base { ... }; class MoreDerived : public Derived { ... };`.
19. Given a code segment, write statements to call function display in Line 1-3 using object `d` of class Derived in main function to generate the following output: `Output: Derived: display() Intermediate: display() Base: display()`.
20. Create a class Employee having a protected integer id, a default constructor, and a constructor with an argument. Create a derived class SalaryEmp to make the inheritance protected.

**Polymorphism (Virtual Functions, Overriding, Abstract Classes)**
21. What is the difference between a virtual function and a pure virtual function?.
22. What is an Abstract class? Explain the concept with the help of an example.
23. What is function overriding in C++? Explain with an example.
24. How is function overloading different from function overriding? Give an example of each.
25. What is polymorphism? Explain early binding and late binding in the context of polymorphism.
26. Consider a following class: `class X { virtual void display() ... }; class Y : public X { ... }; class Z : public Y { ... };`. Replace ellipses by appropriate C++ code to override method display() using Runtime polymorphism.
27. Write a program to demonstrate runtime polymorphism using an Employee base class and derived classes (FullTimeEmployee, PartTimeEmployee) for different employee types.

**Templates**
28. Write a function template `minimum (T arr, int size)` where T is the generic type of array arr to find minimum from the array.
29. Write a program that defines a function template that does the following: (i) Accepts one int and one char type argument (ii) Accepts one int and one float type argument (iii) Accepts two float type arguments.

---

### **UNIT 4: Pointers and References (11 Questions)**

**Pointer Basics & Types**
30. What is a pointer variable?.
31. What is the difference between the operators `*` and `&` in the context of pointers?.
32. What is the use of following pointers? (i) this pointer (ii) void pointer.

**Pointers with Arrays/Functions & Pointer Arithmetic**
33. Write output of the following code segments: `int func(int *a, int *b) { return (*a++ + *b++); } void main() { int x, y; cout << func(&x, &y); }`.
34. Write a function to swap the value of two numbers using pointers.
35. Write function `cube()` which computes the cube of an integer passed as a pointer in the following program and give the output.
36. Give the output on execution of the following program segment: `int a = 5; int b = 8; int c; int* p1= &b; int* p2; int * p3; ...`,.
37. Write C++ declarations for a function that accepts an array of integers, a character variable and returning a pointer to an integer.
38. What would be printed from the following block? `void main() { char* a = {"One", "Two", "Three", "Four", "Five"}; cout << a << "\n"; ... }`.
39. Give the output that will be produced on execution of the following code segment: `int a[] = {2,9,7,21,46}; int *pa = a; int *pr = pa+2; ...`.

**Dynamic Memory Allocation**
40. What are the differences between the following two statements: `char *str1 = new char;` and `char str2;`?.

---

### **UNIT 5: Exception and File Handling (10 Questions)**

**Exception Handling**
41. Write a code to handle divide by zero exception using try-catch statements.
42. What is an exception? What are different types of exceptions in C++? Which type of exceptions are handled by a program?.
43. Write a program to read an integer n, followed by n integers. Compute the average of these numbers. The program should throw an exception for the following: (i) n is zero (ii) n is negative.
44. Write a program to calculate the square root of a number entered by the user. If the number is negative, the program should throw an exception indicating that square root of a negative number is not allowed.

**File Handling**
45. List and explain with examples, any two functions that determine the status of a file stream.
46. Write a C++ program that reads a text file f1.txt and creates another file f2.txt so that every sequence of consecutive blank spaces in f1.txt is replaced by a single character '@' in the output file f2.txt.
47. Write a program that reads a file and print the number of lines in it.
48. Write a program to copy a file, inserting a blank line after each line.
49. Write a program to count the number of digits and alphabets in a given file. Check for the file open and close errors also, in the program,.
50. Write a program to copy a text file A.txt to another file B.txt having all words in reverse order.