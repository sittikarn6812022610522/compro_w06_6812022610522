#include <stdio.h>

int main() {
    int a = 5; 
    int b = 17;
    float c = 8.5; 
    float d = 4.0;

// ตัวเเปร
printf("a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);

// d + a = 4.0 + 5 = 9.0
printf("d + a = %.1f\n", d + a);  

// a - b = 5 - 17 = -12
printf("a - b = %d\n", a - b);     

// c * d = 8.5 * 4.0 = 34.0
printf("c * d = %.1f\n", c * d);   

// a * c = 5 * 8.5 = 42.5
printf("a * c = %.1f\n", a * c);   

// c / d = 8.5 / 4.0 = 2.125
printf("c / d = %.2f\n", c / d);   

// b / c = 17 / 8.5 = 2.00
printf("b / c = %.2f\n", b / c);   

// a % b = 5 % 17 = 5
printf("a %% b = %d\n", a % b);    

// c % a - error เพราะ % ใช้กับจำนวนเต็มอย่างเดียว
// printf("c %% a = %.1f\n", c % a); // ERROR // แปลง c เป็น int ก่อน
 printf("((int)c) %% a = %d\n", ((int)c) % a); // 8 % 5 = 3

// c % d - error เพราะ % ใช้กับจำนวนเต็มอย่างเดียว
// printf("c %% d = %.1f\n", c % d); // ERROR // แปลงทั้งคู่เป็น int ก่อน
 printf("((int)c) %% ((int)d) = %d\n", ((int)c) % ((int)d)); // 8 % 4 = 0


 return 0;

}