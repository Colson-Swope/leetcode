#include <stdio.h>

char* intToRoman(int d) {

    int i = 0;
    char s[10];

    while(*d != '\0') {
        switch(*d) 
        {
        case 1:
            if (*(d + 1) == 5 || *(d + 1) == 10)
                s[i] == ;
            else 
                s[i] == ;
            break; 
        }
    }
}

int main() { 

    int d; 

    printf("Enter a number: ");
    scanf("%d", &d);

    printf("Output: %d", intToRoman(&d));

    return 0;

}