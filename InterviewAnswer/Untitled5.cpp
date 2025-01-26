"What is a C Preprocessor?
Explain the syntax of #define preprocessor."
#include <stdio.h>
// Define a macro for PI
#define PI 3.14159
int main() {
 double radius = 5.0;
 double area;
 // Using the PI macro to calculate the area of a circle
 area = PI * radius * radius;
 printf("Area of the circle with radius %.1f = %.2f\n", radius, area);
 return 0;
}
Explanation:
In this example, #define PI 3.14159 defines a macro named PI with 3.14159 as its 
replacement text.
The macro PI is then used in the main function to calculate the area of a circle 
with a given radius.
During preprocessing, every occurrence of PI in the code will be replaced by 
3.14159.
Benefits of #define:
Assignments C Programming
Code readability: Macros can make code more readable by providing meaningful 
names for constants or expressions.
Maintainability: Changing the value of a macro in one place updates all 
occurrences throughout the code, which can simplify maintenance.
Avoid magic numbers: Macros help avoid using magic numbers (hard-coded 
numeric constants) directly in the code, improving clarity and maintainability