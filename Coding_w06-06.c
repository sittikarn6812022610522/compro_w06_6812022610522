#include <stdio.h>

int main() {
    // กำหนดค่าตัวแปรเริ่มต้น
    int a = 5;    
    int b = 2;    
    float x = 3.0f; 
    float y = 4.5f; 

    int r1;
    int r2;
    float r3;
    float r4;

    printf("Initial values: a = %d, b = %d, x = %.1f, y = %.1f\n\n", a, b, x, y); // แสดงค่าตัวแปรเริ่มต้น

    // นิพจน์ที่ 1: int r1 = a++ * b + (int)y % 3;
    
    r1 = a++ * b + (int)y % 3;
    printf("1. int r1 = a++ * b + (int)y %% 3;\n"); // ใช้ %% เพื่อพิมพ์เครื่องหมาย %
    printf("   r1 = %d (a after: %d)\n", r1, a); // ผลลัพธ์: r1 = 11, a = 6

    // นิพจน์ที่ 2: int r2 = (a > b) && ((int)x / b < 2);
    
    r2 = (a > b) && ((int)x / b < 2);
    printf("2. int r2 = (a > b) && ((int)x / b < 2);\n"); // ใช้ %% เพื่อพิมพ์เครื่องหมาย %
    printf("   r2 = %d\n", r2); // ผลลัพธ์: r2 = 1

    // นิพจน์ที่ 3: float r3 = ++x * y - a / 2;
    
    r3 = ++x * y - a / 2;
    printf("3. float r3 = ++x * y - a / 2;\n"); // ใช้ %% เพื่อพิมพ์เครื่องหมาย %
    printf("   r3 = %.2f (x after: %.2f)\n", r3, x); // ผลลัพธ์: r3 = 15.00, x = 4.00

    // นิพจน์ที่ 4: float r4 = (((x += 1.5) > y) || (b --> 0));
    
    r4 = (((x += 1.5f) > y) || (b-- > 0)); // ใช้ 1.5f เพื่อให้เป็น float literal
    printf("4. float r4 = (((x += 1.5) > y) || (b --> 0));\n"); // ใช้ %% เพื่อพิมพ์เครื่องหมาย %
    printf("   r4 = %.2f (x after: %.2f, b after: %d)\n", r4, x, b); // ผลลัพธ์: r4 = 1.00, x = 5.50, b = 1

    return 0; // สิ้นสุดโปรแกรม
}