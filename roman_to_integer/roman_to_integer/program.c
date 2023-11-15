#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int romanToInt(char* s) {

	int numericValue = 0;

	while (*s != '\0') {
		switch (*s)
		{
		case 'I':
			if (*(s + 1) == 'V' || *(s + 1) == 'X')
				numericValue -= 1;
			else
				numericValue += 1;
			break;
		case 'V':
			numericValue += 5;
			break;
		case 'X':
			if (*(s + 1) == 'L' || *(s + 1) == 'C')
				numericValue -= 10;
			else
				numericValue += 10;
			break;
		case 'L':
			numericValue += 50;
			break;
		case 'C':
			if (*(s + 1) == 'D' || *(s + 1) == 'M')
				numericValue -= 100;
			else
				numericValue += 100;
			break;
		case 'D':
			numericValue += 500;
			break;
		case 'M':
			numericValue += 1000;
			break;
		default:
			break;
		}

		s++;
	}

	return numericValue;
	
}

int main() 
{
	char s[10];

	printf("Enter a roman numeral: ");
	scanf("%s", &s);
	
	printf("Output: %d", romanToInt(&s));

}