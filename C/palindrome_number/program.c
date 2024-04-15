// Instructions: Given an integer x, return true if x is a palindrome, and false otherwise.


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x) {

    char numstr[10]; 
    char forward[10]; 

    int stringSize = 0; 

    // convert input to string 
    sprintf(numstr, "%d", x);  

    // get string length 
    stringSize = strlen(numstr); 
    
    // read string forward 
    for (int i = 0; i < stringSize; i++) {
        forward[i] = numstr[i]; 
    }

    // read string backward
    for (int i = 0, j = stringSize - 1; i <= j; i++, j--) {
        if (forward[i] != forward[j]) {
            return false; 
        }
    }
    return true; 
}

int main() {

    int x; 
    printf("Enter a number: "); 
    scanf("%d", &x);

    isPalindrome(x);  

    return 0; 
}