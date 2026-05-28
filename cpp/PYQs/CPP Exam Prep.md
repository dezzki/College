
UNIT 1 & 2 – Introduction to C++ & Programming Fundamentals

**Topic 1 – Basic Syntax, Data Types & Identifiers**

**2 Marks**

- Which of the following are invalid identifiers in C++ ? (i) `A4#1` (ii) `1_Class` (iii) `Class` (iv) `Monthly_rate`. [Source: C++ 2025.pdf, Q1(b)]
- What is the type of following constants ? (i) `86392LU` (ii) `"2"` (iii) `7.7623465L` (iv) `-6.0f`. [Source: Qp-cpp-5.pdf, Q1(a)]

**3 Marks**

- Identify the errors in the following C++ statements : (i) `long float x = 3.5;` (ii) `int code = three;`. [Source: qp-C++2022-23.pdf, Q1(g)]

**5 Marks**

- State error(s) if any, in each of the following code segments: (i) `const double p1; int n; p1 = 3.141; n = 2;` (ii) `int myfun1(int x, y) { int myfun2(int x) { int t = x*2; return(t); } return y; }`. [Source: Cpp-qp-1.pdf, Q1(a)]

**Topic 2 – Operators and Expressions**

**2 Marks**

- What will be the value of z on execution of the following statement if `x = 4, y = 4`: `z = (x<y ? -2 : (x==y ? 0 : 2));`. [Source: Cpp-qp-1.pdf, Q1(e)]
- Consider four integer variables initialized as: `y = 5, z = 0` and `t = -4`. What is the value of the following expression on evaluation: `t || z < (y+5) && y`. [Source: Qp-cpp-3.pdf, Q2(b)(i)]

**3 Marks**

- What would be output produced on the execution of following C++ code? `int x = 5, y = 5, z; x = ++x; y = --y; z = (x<<2) + (y>>2); cout<<x<<y<<z;`. [Source: qp-C++2022-23.pdf, Q1(c)]
- Give the output produced upon execution of the following statements : (i) `cout<<(21<<2);` (ii) `cout<<(21^15);` (iii) `cout<<(5+9*8/4);`,. [Source: qp-C++2022-23.pdf, Q1(j)]
- Consider four integer variables initialized as: `y = 5, z = 0` and `t = -4`. What is the value of each of the following expressions on evaluation: (i) `3*y/4%5&y` (ii) `!(4+5*y>=z-4) && (z-2)`. [Source: Qp-cpp-3.pdf, Q2(b)]
- Find error(s) in the following code segment: `enum color { White, Blue, Pink, Red, Green}; color a, b, c, d; a = Green; b = blue; c = orange; d = Pink;`,. [Source: Qp-cpp-5.pdf, Q4(i)]

**4 Marks**

- If the value of `x = 3` and `y = 5`, what will be the values of x and y on evaluation of each of the following expressions independently? (i) `x++ + y` (ii) `++x + 4` (iii) `-x + y++` (iv) `--x + --y`,. [Source: Cpp-qp-1.pdf, Q1(g)]
- If `x = 5, y = 0`, and `z = -2`, what will be the value of the following expressions: (i) `x && y || z` (ii) `(x || y) && z`. [Source: Cpp-qp-1.pdf, Q1(h)]

**Topic 3 – Control Structures (Loops, Switch, If-Else) & Patterns**

**2 Marks**

- Draw flowchart for finding sum of first n natural numbers. [Source: C++ 2025.pdf, Q1(a)]
- Given `x = 0, y = 0, z = 1`, what are the values of x, y and z after executing the following code segment : `switch(x) { case 0: x = 1; y = x+y; z = 8; case 1: x = 4+z; default: y = 3; x = y; z = 1; }`. [Source: C++ 2025.pdf, Q6(a)]
- Assuming that the required header files have been included, what will be the output produced on execution of the following code segments: `double z1; double y = 56.7; int x = 34; if(x) { z1 = y++; cout<<z1<<"\n"<<y; } else { z1 = y+x/2; cout<<z1<<y; }`. [Source: Qp-cpp-3.pdf, Q1(b)(i)]
- Output of code: `int x = 4, y = 3; for(int i=1; i<=x; i++) { for(int j=y; j>=1; j--) cout<<(i*j); cout<<"\n"; }`. [Source: Qp-cpp-3.pdf, Q1(b)(ii)]

**3 Marks**

- Rewrite the following while statement as an equivalent for statement: `int x = 0; while (x<10) { cout<<x<<endl; x++; }`,. [Source: Qp-cpp-3.pdf, Q1(e)]
- Identify an error in the following code and give reasons for the same: `do { int ctr=0; cout<<ctr; ctr++; } while(ctr!=10);`. [Source: Qp-cpp-3.pdf, Q7(a)(ii)]
- What would be output produced on the execution of following C++ code segments? `int x = 1; switch (x) { case 1: cout<< "Monday"; case 2: cout<< "Tuesday"; break; default: cout<<"Weekend"; }`. [Source: qp-C++2022-23.pdf, Q1(e)(i)]
- What would be output produced on the execution of following C++ code segments? `int n, k = 5; for (n=0; n<4; n++); cout<<"\nn = "<<n<<" k = "<<k;`. [Source: qp-C++2022-23.pdf, Q1(e)(ii)]

**4 Marks**

- Give the output that will be produced on execution of the following program segment: `int x = 3, y = 4, z = 5; if (x < y++) || (z++ > 0) cout << x << " " << y << " " << z;`. [Source: Cpp-qp-1.pdf, Q1(b)(iii)]
- Give the output that will be produced on execution of the following program segment: `for (int i = 0; i < 8; i++) { if (i%2 == 0) cout << i+1 << endl; else if (i%3 == 0) continue; else if (i%5 == 0) break; cout << " end of loop" << endl; } cout << "end of prog" << endl;`,. [Source: Cpp-qp-1.pdf, Q1(b)(iv)]
- Assuming x1, x2, x3 are integer variables, give the output in each of the following two cases: `if (x1) if (x2) if (x3) x2=3; else x3=3; cout<<x1<<" "<<x2<<" "<<x3;` Case 1: x1=0, x2=1, x3=0. Case 2: x1=1, x2=0, x3=1. [Source: Cpp-qp-1.pdf, Q1(b)(v)]

**5 Marks**

- Rewrite the following code using switch case construct: `if(number == 1 || number == 2) cout<< "One or Two"; else if(number == 3) cout<<"Three"; else cout<<"Some other number";`. [Source: qp-C++2022-23.pdf, Q1(h)]
- Write a program to find the Least Common Multiple (L.C.D) of two numbers, say, a and b, taken as input from the user. [Source: qp-C++2022-23.pdf, Q5(a)]
- Write a program to print the following pattern taking number of lines as input from the user (Pyramid of stars). [Source: qp-C++2022-23.pdf, Q5(b)]

**6 Marks**

- Find errors in the following C++ code segments and write the correct code: `switch (n) { case 1.1: cout << n * 1.1; break; case 5.6: cout << n * 5.6; break; default: cout << n; }`. [Source: Qp-cpp-5.pdf, Q1(b)]

**Topic 4 – Input/Output and Formatting**

**3 Marks**

- Write output of the following program: `int x = 987; cout.width(10); cout << x << "\n"; cout.setf(ios::right, ios::adjustfield); ... cout.fill('0');`. [Source: Qp-cpp-5.pdf, Q2(a)]

**4 Marks**

- Write C++ statements to illustrate how input output stream flags can be used to produce the output that is: (i) left justified (ii) right justified. [Source: Cpp-qp-1.pdf, Q1(f)]
- Assuming that the required header files have been included, what will be the output produced on execution of the following code segment: `int i = 890; double x = 4.678; cout<<setw(5)<<i<<"\n"; cout<<fixed; cout<<setprecision(6); cout<<"x="<<x<<"\n"; cout<<oct<<"Octal="<<i;`. [Source: Qp-cpp-3.pdf, Q1(b)(v)]

**Topic 5 – Arrays (1D, 2D) & Strings**

**2 Marks**

- Output of code: `int i; int b[]={101,120,130,-340,-112,-114}; for (i = 0; b[i]>0; i++); cout <<i;`. [Source: Qp-cpp-3.pdf, Q1(b)(iv)]

**3 Marks**

- Write a program to count the number of vowels in a string entered as command line argument. [Source: Qp-cpp-3.pdf, Q2(a)]
- Write a program to check if a given string is palindrome or not. [Source: qp-C++2022-23.pdf, Q1(i)]

**4 Marks**

- Give the output that will be produced on execution of the following program segment: `string str1 = "Delhi "; string str2 = "Delhi1"; int i = str1.compare(0,3,str2,0,3); cout << i << endl;`. [Source: Cpp-qp-1.pdf, Q1(b)(i)]
- If str1 and str3 are C++ strings, write C++ statements for the following: (i) to obtain the substring str3 comprising the first four characters of str1 (ii) to find the position of the first occurrence of str3 in the string str1 (iii) to find the second occurrence of the string str3 in str1,. [Source: Cpp-qp-1.pdf, Q6(a)]
- Write a C++ function that takes an array of characters to convert all lowercase characters to uppercase (without using built-in functions) and return type is void,. [Source: Qp-cpp-3.pdf, Q2(c)]
- Output of code segment: `int arr[]={12,34,56,89}; int temp; int size = 4; for(int i=0, j=size-1; i<j; i++, j--) { temp = arr[i]; arr[i] = arr[j]; arr[j] = temp; } for(int i=0; i<size; i++) cout<<arr[i]<<"\n";`,. [Source: Qp-cpp-3.pdf, Q5(a)]

**5 Marks**

- Define a function `omit (string W)` which takes a string W as an argument and returns the word omitting all vowels from W. [Source: C++ 2025.pdf, Q1(e)]
- Write a function to remove duplicate element from one dimensional integer array A of size n. [Source: Qp-cpp-3.pdf, Q1(d)]
- Write a function `UpperTriangular()` that accept a matrix A of order n*n as an input argument as well as its order. The function should convert matrix A to uppertriangular matrix by assigning 0 to all elements below principal diagonal,. [Source: Qp-cpp-3.pdf, Q3(b)]
- Write a function to sort an array using any algorithm. [Source: Qp-cpp-5.pdf, Q2(ii)]

**6 Marks**

- Write a function `checkSorted` that accepts two parameters (i) Size of an integer array (ii) An array of integers. The function should return true if input array is sorted in descending order and false otherwise. [Source: Cpp-qp-1.pdf, Q4(a)]

**9 Marks**

- Write a program that multiplies two 2D matrices A and B entered by the user. The program should prompt dimensions, check if multiplication is possible, perform it, and display the result or an appropriate error message. [Source: C++ 2025.pdf, Q4(b)]

**Topic 6 – Functions (Types, Parameter Passing, Inline, Recursion)**

**3 Marks**

- Give the output that will be produced on execution of the following code segment : `void f(int x, int &y) { x+=10; y+=x; } int main() { int num1=12, num2=5; f(num1,num2); ... }`. [Source: C++ 2025.pdf, Q1(d)(i)]
- What is an inline function? What are the advantages of declaring functions as inline?. [Source: qp-C++2022-23.pdf, Q1(b)]
- What is the difference between call by value and call by reference?. [Source: qp-C++2022-23.pdf, Q1(d)(i)]
- Write a function that takes an input parameter and changes its value by incrementing it by 10. The changed value must be reflected in the main function. [Source: qp-C++2022-23.pdf, Q1(d)(ii)]

**4 Marks**

- Write a recursive function to calculate GCD (Greatest Common Divisor) of two numbers. [Source: Qp-cpp-5.pdf, Q5(i)]

**5 Marks**

- Write a function in C++ that takes a number 'n' as input and returns its factorial if 'n' is an odd, else the function should return 0,. [Source: qp-C++2022-23.pdf, Q7(c)]

**6 Marks**

- Write recursive function `fact (int x)` for finding the factorial of n. Use this function to find `C(n,r)` where `C(n,r)= n! / r!*(n-r)!`. [Source: C++ 2025.pdf, Q2(b)]

--------------------------------------------------------------------------------

UNIT 3 – Object Oriented Programming

**Topic 1 – Classes, Objects & Access Specifiers**

**2 Marks**

- What for do we use key word `const` at the end of a function header?. [Source: Cpp-qp-1.pdf, Q1(d)]

**4 Marks**

- Write a method, `Matrix transpose();` of a class Matrix, which returns the transpose of the calling Matrix object. Assume the Matrix class consisting of 2-dimensional array and a constructor that accepts size of the matrix (row and columns). [Source: Qp-cpp-5.pdf, Q3(g)]

**6 Marks**

- Write a program to create a class called Person having the following data members: (i) Aadhar No, Name, birth_year. Write a following function to: (i) create an object for a person using parameterized constructor. (ii) calculate_age which accepts as input parameter the current year and calculates the person's age in years. (iii) display to print all the details for a given object of the class along with the calculated age. [Source: Cpp-qp-1.pdf, Q6(b)]

**9 Marks**

- Consider the following class `Ratio { private: int numerator; int denominator; public: ... }`. Define all functions and write `main()` to compute the equation `Result = 2/3 + 4/5` by calling these functions using appropriate class Ratio objects. [Source: C++ 2025.pdf, Q3(b)]

**Topic 2 – Constructors & Destructors**

**3 Marks**

- Write a copy constructor for the fraction class. Use the copy constructor in `main()` function. [Source: Qp-cpp-5.pdf, Q4(iii)]
- Assuming that the required header files have been included, find out the error / output in the following code fragments: `class Base { public: Base() { cout<<"Inside Base\n"; } }; class Derived1: public Base { ... }; ...`. [Source: Qp-cpp-3.pdf, Q1(b)(vii)]

**4 Marks**

- In the following code, point out the statements in which copy constructor will be called: `class Rational { ... Rational(const Rational& r) { cout << "COPY CONSTRUCTOR CALLED\n"; } ... };`,. [Source: Cpp-qp-1.pdf, Q2(a)]

**5 Marks**

- State error(s) if any, in the following code segments: `class fun { public: ~fun(int x); };`. [Source: Cpp-qp-1.pdf, Q1(a)(ii)]
- Consider the following class definition: `class circle { float radius; };`. Define the following member functions: (i) A default constructor that initializes radius to zero. (ii) A parameterized constructor that assigns the input value sent to radius. (iii) A function `areaofcircle()` for computing the area of a circle. Create an object and call functions. [Source: qp-C++2022-23.pdf, Q3(b)]
- Can constructors be overloaded? Write four important properties of constructor functions. [Source: qp-C++2022-23.pdf, Q3(c)]

**Topic 3 – Static Members & Friend Functions**

**3 Marks**

- Give the output that will be produced on execution of the following code segment: `class Test { static int count; public: Test & fun(); }; int Test::count = 0; Test & Test::fun() { Test::count++; cout << Test::count; return *this; } ...`. [Source: C++ 2025.pdf, Q1(d)(ii)]

**4 Marks**

- Give the output on the execution of the following code: `class myClass { friend int sum (myClass ob1) ... }`. [Source: Cpp-qp-1.pdf, Q7(b)]

**5 Marks**

- Write a program to keep a count of number of objects of a class, created and destroyed using static data members. Also, write a static member function to print the count. Call this function from main() to show the usage. [Source: Qp-cpp-5.pdf, Q7(i)]
- What is the purpose of declaring data members of a class as static? How are static variables of a class initialized?. [Source: qp-C++2022-23.pdf, Q2(b)]

**6 Marks**

- Give the output on the execution of the following code: `class demo { public: static int objectcount; demo(int k) { a = k; cout << ++objectcount << a; } ... }; int demo::objectcount = 0; ...`,. [Source: Cpp-qp-1.pdf, Q7(a)]

**8 Marks**

- Find error(s) and give output that will be produced after correction in the following code segment: `class Sample { int value; static int counter; public: void setValue(int v) { value = v; } static void countCall() { counter++; cout<<"Function called "<<counter<<"times"<<"Value is: "<<value<<endl; } }; ...`,. [Source: C++ 2025.pdf, Q7(b)]

**Topic 4 – Operator Overloading**

**5 Marks**

- Write a function to overload `+=` operator for a fraction class using 'this' pointer. Write the fraction class definition consisting of data members, numerator, denominator, and member function `print()` to display the fraction. [Source: Qp-cpp-5.pdf, Q4(ii)]
- Write a friend function to overload `*` operator that multiplies two complex numbers and returns the result as a complex number. [Source: Qp-cpp-5.pdf, Q7(ii)]

**6 Marks**

- Define a class fraction having data members numerator and denominator. Write member functions to do the following: (i) create an object fr1 for the fraction 5/7 (ii) increment the fraction using postfix operator `++` (using operator overloading),. [Source: Cpp-qp-1.pdf, Q5(a)]
- Consider the class `Rationalnumber`. The above class is designed to define a rational number with numerator p and denominator q. Write the definitions of the following member functions: (i) Parameterized constructor (ii) Overload `+` operator to add two rational numbers (iii) Display function. Write suitable statements to store sum in third object. [Source: Qp-cpp-3.pdf, Q4(a)]

**Topic 5 – Inheritance**

**5 Marks**

- Give the output of the following code segment: `class sample { protected: int count; public: void initialize() ... }; class newsample : protected sample { ... };`,. [Source: C++ 2025.pdf, Q1(f)]
- Consider the following class definition: `class base { int p1; protected: int p2; public: int p3; };`. What will be the visibility mode of p1, p2, p3 in class derived in the following cases: (i) class derived: private base (ii) class derived: protected base (iii) can p1 be accessed in derived class?. [Source: qp-C++2022-23.pdf, Q5(c)]

**6 Marks**

- Find and explain the error(s) from the following code segment: `class Base { private: int a; protected: int b; public: int c; ... }; class Derived : protected Base { ... }; class MoreDerived : public Derived { ... };`. [Source: C++ 2025.pdf, Q6(b)]
- Given a following code segment. Write statements to call function display in Line 1-3 using object d of class Derived in main function to generate the following output: `Output: Derived: display() Intermediate: display() Base: display()`. [Source: C++ 2025.pdf, Q2(c)]
- Create a class Employee having a protected, integer id, a default constructor, and a constructor with an argument (for id). Create a derived class SalaryEmp to make the inheritance protected. The SalaryEmp class has a private data member - salary. Write the appropriate inherited constructors to handle all possibilities. [Source: Qp-cpp-5.pdf, Q3(ii)]

**Topic 6 – Polymorphism (Virtual Functions, Overriding, Abstract Classes, Binding)**

**2 Marks**

- What is the difference between a virtual function and a pure virtual function ?. [Source: Qp-cpp-5.pdf, Q6(iii)]

**3 Marks**

- What is an Abstract class ? Explain the concept with the help of an example. [Source: Qp-cpp-5.pdf, Q6(ii)]
- What is function overriding in C++ ? Explain with example. [Source: Qp-cpp-5.pdf, Q2(e)]

**4 Marks**

- How is function overloading different from function overriding? Give an example of each. [Source: Cpp-qp-1.pdf, Q3(a)]
- What will be the output on execution of the following program: `class Compute { virtual int add(int a, int b) { return a+b; } int add(int a, int b, int c) ... }; class Simple: public Compute { virtual int add(int a, int b) { return a+b+2; } }; ...`,. [Source: Cpp-qp-1.pdf, Q4(b)]

**5 Marks**

- State error(s) if any, in the following code segments: `class A { ... }; class B { virtual void myfunction() = 0; }; throw B();` (Instantiation of abstract class B). [Source: Cpp-qp-1.pdf, Q1(a)(v)]
- What is polymorphism? Explain early binding and late binding in the context of polymorphism. [Source: qp-C++2022-23.pdf, Q6(c)]
- Consider the following program segments: `class BC { public: void show() ... }; class DC : public BC { public: void show() ... };` (i) What would be output produced upon the execution of the code `ptr->show();` where ptr is base class pointer pointing to derived object? (ii) What would you change in the above program to call the show() method of the derived class instead of the base class?,. [Source: qp-C++2022-23.pdf, Q7(b)]

**6 Marks**

- Give the output that will be produced on execution of the following code segment: `class Student { public: virtual void calculateGrade() ... }; class ScienceStudent : public Student { ... }; ... student* topper = &students; topper->calculateGrade();`,. [Source: C++ 2025.pdf, Q4(a)]
- What are abstract classes ? Illustrate the use of abstract classes with an example. [Source: Cpp-qp-1.pdf, Q2(b)]
- Consider a following class : `class X { virtual void display() ... }; class Y : public X { ... }; class Z : public Y { ... };` Replace ellipses by appropriate C++ code to override method display() in class Y and Z. Use Runtime polymorphism to display the content of objects of class X, Y and Z. [Source: Qp-cpp-3.pdf, Q5(b)]

**9 Marks**

- Write a program to demonstrate runtime polymorphism using an Employee base class and derived classes (FullTimeEmployee, PartTimeEmployee) for different employee types. Write `calculateSalary()` for both the derived classes and `main()` to show runtime polymorphism by calling `calculateSalary()` through the pointers to appropriate objects. [Source: C++ 2025.pdf, Q5(b)]

**Topic 7 – Templates**

**5 Marks**

- Write a function template `minimum (T arr, int size)` where T is the generic type of array arr to find minimum from the array. Use this function for finding minimum from integer, character and floating-point number array. [Source: C++ 2025.pdf, Q1(g)]
- Write a program that defines a function template that does the following : (i) Accepts one int and one char type argument (ii) Accepts one int and one float type argument (iii) Accepts two float type arguments,. [Source: qp-C++2022-23.pdf, Q6(a)]

**6 Marks**

- Give the output after execution of the following code segment. Explain which display() function is executed with a reason for each line 1-6 : `template <class T> void display(T value) ... void display(int value) ... display(10); display('A'); display(15.67);`,. [Source: C++ 2025.pdf, Q5(a)]

--------------------------------------------------------------------------------

UNIT 4 – Pointers and References

**Topic 1 – Pointer Basics & Types (Void, This)**

**1 Mark**

- What is pointer variable?. [Source: qp-C++2022-23.pdf, Q1(a)(i)]

**2 Marks**

- Consider the following declaration statements: `float f; int *b = &f;` Identify an error in the following code and give reasons for the same. [Source: Qp-cpp-3.pdf, Q1(a)]
- What is the difference between the operators `*` and `&` in the context of pointers?. [Source: qp-C++2022-23.pdf, Q1(b)]
- Consider the declarations: `int i = 10; int *j = &i;` (Contextual questions/Outputs). [Source: qp-C++2022-23.pdf, Q1(a)(ii)]

**5 Marks**

- What is the use of following pointers? (i) this pointer (ii) void pointer. [Source: qp-C++2022-23.pdf, Q7(a)]

**Topic 2 – Pointers with Arrays/Functions & Pointer Arithmetic**

**2 Marks**

- Write output of the following code segments: `int func(int *a, int *b) { return (*a++ + *b++); } void main() { int x, y; cout << func(&x, &y); }`. [Source: Qp-cpp-5.pdf, Q1(c)]

**3 Marks**

- Write function `cube()` which computes the cube of an integer passed as a pointer in the following program and give the output. [Source: C++ 2025.pdf, Q1(c)]
- Assuming that the required header files have been included where required, Find out the error in the following code fragments: `void f(int *p) { int a; *p = a; *a = *a+1; return a; }`. [Source: Qp-cpp-3.pdf, Q1(c)]
- Write a function to swap the value of two numbers using pointers. [Source: qp-C++2022-23.pdf, Q1(f)]

**4 Marks**

- Give the output on execution of the following program segment: `int a = 5; int b = 8; int c; int* p1= &b; int* p2; int * p3; p2 = p1; p3 = &c; p1 = &a; *p2 = 8; *p3 = *p1; *p3 = a + *p2 + *(&c); cout << *p1 << " " << *p2 << " " << *p3 << *p1 + *p2 << endl;`,. [Source: Cpp-qp-1.pdf, Q1(c)]
- Write C++ declarations for the following : (i) A function that accepts an array of integers, a character variable and returning a pointer to an integer. (ii) print integer x with field width as 10 and fill character as '*'. [Source: Qp-cpp-3.pdf, Q7(b)]

**5 Marks**

- What would be printed from the following block ? `void main() { char* a = {"One", "Two", "Three", "Four", "Five"}; cout << a << "\n"; cout << *(a+3) << "\n"; cout << *(a+2) << "\n"; cout << *(*(a + 2)+ 2) << "\n"; cout << **a << "\n"; }`. [Source: Qp-cpp-5.pdf, Q6(i)]
- What would be the output produced on the execution of the following code segment: `int x = 0, i; int a[] = {1, 4, 6, 8}; int *p = a; for(i = 0; i < 5; i++) { x = 2 * x + i; cout<<*p; *p++; cout<<*p; }`. [Source: qp-C++2022-23.pdf, Q3(c)]

**6 Marks**

- Give the output that will be produced on execution of the following code segment : `int a[] = {2,9,7,21,46}; int *pa = a; int *pr = pa+2; cout<< *pr << endl; cout<< *pr-- << endl; pr+=2; cout<< *pr << endl; pr-=2; cout<< *pr << endl; cout<< *pr + *pa << endl;`. [Source: C++ 2025.pdf, Q3(a)]

**Topic 3 – Dynamic Memory Allocation**

**4 Marks**

- What are the differences between the following two statements : `char *str1 = new char;` `char str2;`,. [Source: Qp-cpp-5.pdf, Q3(i)]

--------------------------------------------------------------------------------

UNIT 5 – Exception and File Handling

**Topic 1 – Exception Handling**

**3 Marks**

- Give the output that will be produced on execution of the following code segments : `try { throw "The product is zero. Provide non-zero values.\n"; } catch (const char* e) { cout<<e; }`. [Source: C++ 2025.pdf, Q1(d)(iii)]

**4 Marks**

- Write a code to handle divide by zero exception using try-catch statements,. [Source: Qp-cpp-5.pdf, Q4(ii)]

**5 Marks**

- State error(s) if any, in each of the following code segments: `void myfunction() throw(A) { throw B(); }`. [Source: Cpp-qp-1.pdf, Q1(a)(iv)]
- Write the output on execution of the following code : `try { int n = 5; int m = -6; if (n<0) throw myexception("Negative number"); cout<<n<<endl; if (m<0) throw myexception("Negative number"); cout<<m; } catch(myexception o1) { o1.display(); }`. [Source: Qp-cpp-3.pdf, Q6(b)]
- What is an exception? What are different types of exceptions in C++? Which type of exceptions are handled by a program?. [Source: qp-C++2022-23.pdf, Q4(c)]
- What will be the output if: `try { if (x != 0) cout<<"\n"<<a/x; else throw(x); } catch(int i) { cout<<"\nException-Division by zero"; }` (i) a = 20, b = 15? (ii) a = 10, b = 10?. [Source: qp-C++2022-23.pdf, Q2(a)]

**6 Marks**

- Write a program to read an integer n, followed by n integers. Compute the average of these numbers. The program should throw an exception for the following: (i) n is zero (ii) n is negative. The program should be able to handle any other exception thrown. [Source: Cpp-qp-1.pdf, Q3(b)]

**7 Marks**

- Write a program to calculate the square root of a number entered by the user. The program should follow these requirements : (i) Prompt the user to enter a number. (ii) If the number is negative, the program should throw an exception indicating that square root of a negative number is not allowed. (iii) Use a try-catch block to catch the exception and display an appropriate error message. [Source: C++ 2025.pdf, Q6(c)]

**Topic 2 – File Handling**

**3 Marks**

- List and explain with examples, any two functions that determine the status of a file stream. [Source: Qp-cpp-5.pdf, Q3(i)]

**4 Marks**

- Write a C++ program that reads a text file f1.txt and creates another file f2.txt so that every sequence of consecutive blank spaces in f1.txt is replaced by a single character '@' in the output file f2.txt. [Source: Cpp-qp-1.pdf, Q5(b)]
- Write a program that reads a file and print the number of lines in it. [Source: Qp-cpp-3.pdf, Q4(b)]

**5 Marks**

- Write a program to copy a file, inserting a blank line after each line. [Source: Qp-cpp-5.pdf, Q2(i)]
- Write a program that does the following : (i) Creates a file File1 and write the following lines to it : "The biggest adventure is to live a life of your dreams." (ii) Count the number of characters in File1 and print this value,. [Source: qp-C++2022-23.pdf, Q4(b)]

**6 Marks**

- Write a program to count the number of digits and alphabets in a given file. Check for the file open and close errors also, in the program,. [Source: Qp-cpp-5.pdf, Q6(i)]

**7 Marks**

- Write a program to copy a text file A.txt to another file B.txt having all words in reverse order. For example: A.txt: This is the original file. B.txt: sihT si eht lanigiro elif. [Source: C++ 2025.pdf, Q7(a)]