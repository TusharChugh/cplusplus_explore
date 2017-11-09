# String class similar to std::string

## Key points
### 1. Rule of big three (and a half)
If we have to manage resources like char pointer in this lib - we need to create our own copy constructor, destructor and an assignment operator. For assignment operator we need a swap function (that's why three and a half).
Details:   
https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three)

### 2. Swap Function:
There are various ways of writing the swap function (even std::vector has criticism for it's swap function before c++ 14)
Read more about Argument Dependent Look-up(ADL) for the friend function choice of swap
Other things to keep in mind:  
a. self-assignment should work (can't deleted the given reference and having if to check is wasting the computation time for most of the cases)     
b. Swap is a non-throwing function  
c. For a strong exception guarantee we need to copy the string before deleting it (because creating a new string can result in an exception)  
d. This required extra memory and rather than allocating the memory inside the function we let the compiler do it by passing it as the value  

Details:  
Copy and swap idiom (https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom) 

### 3. Reset and alloc_str:
Reset and alloc_str functions are used by a lot of other functions. Do not repeat yourself (DRY)

### 4. Gtest is used as the testing framework

### 5. Gcov provides the code coverage

Create issues to report any bugs or give the suggestions to improve the code


credits: The code has been inspired from LinkedIn Learning course by Bill Wienman (http:://bw.org) 
