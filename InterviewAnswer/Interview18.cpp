#include <stdio.h>

int main() {
    int *ptr = NULL;  // ptr is a null pointer
    
    if (ptr == NULL) {
        printf("The pointer is null\n");
    } else {
        // Safe to dereference ptr here if it's not NULL
        printf("Value: %d\n", *ptr);
    }
    
    return 0;
}
