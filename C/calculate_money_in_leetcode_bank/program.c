#include <stdio.h>

int totalMoney(int n) {
    // count weeks 
      // use int value 
      // week 0 = 0 - 6 days 
      // week 1 = 7 - 13 days... 

    int weeks = n / 7; 
    

    // count extra days in a week with mod 
      // 10 % 7 = 3 extra days 
    
    int extraDays = n % 7; 
    int offset = 0; 

    // enter for loop 
    for (int i = 0; i < weeks; i++) {
        offset += (7+i)*(7+i+1)/2 - i*(i+1)/2; 
    }

    offset += (extraDays+weeks)*(extraDays+weeks+1)/2 - weeks*(weeks+1)/2;
    return offset; 

}

int main() {
    return 0; 
}
