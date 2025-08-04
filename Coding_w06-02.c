#include <stdio.h>

/*int main() {  // w06-02-01
    int i, j, k; 

    i = 1;
    j = 2;
    k = 0; 
    //เริ่มต้น
    printf("start : i = %d, j = %d, k = %d\n", i, j, k);

    // บรรทัดที่ 2
    k = i + j;
    printf("after : k = i + j;: i = %d, j = %d, k = %d\n", i, j, k);

    // บรรทัดที่ 3
    i = i + (k * j);
    printf("after : i = i + (k * j);: i = %d, j = %d, k = %d\n", i, j, k);

    // บรรทัดที่ 4 
    j = i / 2;
    printf("after : j = i / 2;: i = %d, j = %d, k = %d\n", i, j, k);

    // บรรทัดที่ 5
    k = i % 2;
    printf("after : k = i %% 2;: i = %d, j = %d, k = %d\n", i, j, k);

    // บรรทัดที่ 6
    i = (j + k) * 3;
    printf("after : i = (j + k) * 3;: i = %d, j = %d, k = %d\n", i, j, k);

    printf("\n");
    return 0;   
} */


int main() { // w06-02-02
    double x, y, z; 

    
    x = 1.0;  y = 2.0; z = 0.0; 
    // เริ่มต้น
    printf("start : x = %.2f, y = %.2f, z = %.2f\n", x, y, z);


    // บรรทัดที่ 2
    x = y + 5.0;
    printf("after : y = x + 5.0;: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);


    // บรรทัดที่ 3
    y = x / 2.0;
    printf("after : y = x / 2.0;: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);


    // บรรทัดที่ 4:
    y = (x * 3.0) + 4.0;
    printf("after : y = (x * 3.0) + 4.0;: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);

    
    // บรรทัดที่ 5
    x = -0.5 - y;
    printf("after : x = -0.5 - y;: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);


    // บรรทัดที่ 6
    z = x + y;
    printf("after : z = x + y;: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);

    printf("\n");

    return 0; 
} 