#include <stdio.h>

// Step 1: Declare a function that will be pointed to.
void greet() {
    printf("Hello, world!\n");
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Step 2: Declare function pointers
    void (*greet_ptr)(); // A pointer to a function with no parameters and no return type
    int (*add_ptr)(int, int); // A pointer to a function that takes two ints and returns an int

    // Step 3: Assign functions to the pointers
    greet_ptr = greet;
    add_ptr = add;

    // Step 4: Call the functions via pointers
    greet_ptr(); // Calls greet() through the function pointer

    int result = add_ptr(5, 3); // Calls add(5, 3) through the function pointer
    printf("Result of addition: %d\n", result);

    return 0;
}
