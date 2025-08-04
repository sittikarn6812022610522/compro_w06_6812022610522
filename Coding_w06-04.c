/*

  เเบบเต็ม                                                         เเบบย่อ     
x = x - 4.0;	                                                 x -= 4.0;
x = 6.5 * x;	                                                 x *= 6.5;
x = x % (y + z * a);	                                         x %= (y + z * a);
x = x / (2.0 * x);	                                             x /= (2.0 * x);
total = total + (price * quantity - discount);	                 total += (price * quantity - discount);
x = x * (1 + rate / 100);	                                     x *= (1 + rate / 100);
score = score - (penalty * (mistake + 1));                       score -= (penalty * (mistake + 1));

*/

#include <stdio.h> 

int main() {        

    // กำหนดตัวเเปร
    double y = 7.0, z = 5.0, a = 2.0; // ตัวแปร y, z, a
    double price = 100.0, quantity = 3.0, discount = 10.0; // ราคา, จำนวน, ส่วนลด
    double penalty = 5.0; // ค่าปรับ
    int mistake = 2; // จำนวนความผิดพลาด
    

    // --- การเปรียบเทียบที่ 1: x = x - 4.0;  เปรียบเทียบกับ  x -= 4.0; 
    printf("1. x = x - 4.0; และ x -= 4.0;\n"); // การคำนวณนี้จะใช้กับตัวแปร x ที่เป็น double
    double x_val_case1_long = 10.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    x_val_case1_long = x_val_case1_long - 4.0; // การคำนวณรูปแบบเต็ม
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", x_val_case1_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double x_val_case1_short = 10.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    x_val_case1_short -= 4.0; // การคำนวณรูปแบบย่อ (Compound Assignment)
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", x_val_case1_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    // ตรวจสอบความเท่ากันของผลลัพธ์
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (x_val_case1_long == x_val_case1_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 2: x = 6.5 * x;  เปรียบเทียบกับ  x *= 6.5;
    printf("2. x = 6.5 * x; และ x *= 6.5;\n"); // การคำนวณนี้จะใช้กับตัวแปร x ที่เป็น double
    double x_val_case2_long = 5.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    x_val_case2_long = 6.5 * x_val_case2_long; // การคำนวณรูปแบบเต็ม 
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", x_val_case2_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double x_val_case2_short = 5.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    x_val_case2_short *= 6.5; // การคำนวณรูปแบบย่อ (Compound Assignment)
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", x_val_case2_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (x_val_case2_long == x_val_case2_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 3: x = x %% (y + z * a);  เปรียบเทียบกับ  x %%= (y + z * a);
    // ข้อควรระวัง: ตัวดำเนินการ Modulo (%) ในภาษา C รองรับเฉพาะประเภทข้อมูลจำนวนเต็ม (integer operands) เท่านั้น
    int ix_val_case3_long = 25; // x เป็น int เพื่อให้ใช้ % ได้
    int ix_val_case3_short = 25; // x เป็น int เพื่อให้ใช้ %= ได้
    int iy_int = 7, iz_int = 5, ia_int = 2; // ตัวแปรเสริมเป็น int

    printf("3. x = x %% (y + z * a); และ x %%= (y + z * a); (ใช้ int สำหรับ x, y, z, a)\n"); // การคำนวณนี้จะใช้กับตัวแปร x ที่เป็น int
    printf("   (ค่าตัวแปร: y=%d, z=%d, a=%d)\n", iy_int, iz_int, ia_int); // แสดงค่าตัวแปร y, z, a

    ix_val_case3_long = ix_val_case3_long % (iy_int + iz_int * ia_int); // รูปแบบเต็ม
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %d\n", ix_val_case3_long); // แสดงผลเป็นจำนวนเต็มด้วย %d

    ix_val_case3_short %= (iy_int + iz_int * ia_int); // รูปแบบย่อ
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %d\n", ix_val_case3_short); // แสดงผลเป็นจำนวนเต็มด้วย %d
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (ix_val_case3_long == ix_val_case3_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 4: x = x / (2.0 * x);  เทียบกับ  x /= (2.0 * x); 
    printf("4. x = x / (2.0 * x); และ x /= (2.0 * x);\n"); // การคำนวณนี้จะใช้กับตัวแปร x ที่เป็น double
    double x_val_case4_long = 20.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    x_val_case4_long = x_val_case4_long / (2.0 * x_val_case4_long); // การคำนวณรูปแบบเต็ม
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", x_val_case4_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double x_val_case4_short = 20.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    x_val_case4_short /= (2.0 * x_val_case4_short); // การคำนวณรูปแบบย่อ (Compound Assignment)
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", x_val_case4_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (x_val_case4_long == x_val_case4_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 5: total = total + (price * quantity - discount);  เทียบกับ  total += ...;
    printf("5. total = total + (price * quantity - discount); และ total += ...;\n"); // การคำนวณนี้จะใช้กับตัวแปร total ที่เป็น double
    printf("   (ค่าตัวแปร: price=%.1f, quantity=%.1f, discount=%.1f)\n", price, quantity, discount); // แสดงค่าตัวแปร price, quantity, discount

    double total_val_case5_long = 50.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    total_val_case5_long = total_val_case5_long + (price * quantity - discount); // การคำนวณรูปแบบเต็ม
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", total_val_case5_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double total_val_case5_short = 50.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    total_val_case5_short += (price * quantity - discount); // การคำนวณรูปแบบย่อ (Compound Assignment)
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", total_val_case5_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (total_val_case5_long == total_val_case5_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 6: x = x * (1 + rate / 100);  เทียบกับ  x *= (1 + rate / 100); 
    double rate = 10.0; // อัตราดอกเบี้ยหรือการเพิ่มขึ้น
    printf("6. x = x * (1 + rate / 100); และ x *= (1 + rate / 100);\n"); // การคำนวณนี้จะใช้กับตัวแปร x ที่เป็น double
    printf("   (ค่าตัวแปร: rate=%.1f)\n", rate); // แสดงค่าตัวแปร rate

    double x_val_case6_long = 100.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    x_val_case6_long = x_val_case6_long * (1 + rate / 100.0); // ใช้ 100.0 เพื่อให้แน่ใจว่าเป็น Floating-point division
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", x_val_case6_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double x_val_case6_short = 100.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    x_val_case6_short *= (1 + rate / 100.0); // ใช้ 100.0 เพื่อให้แน่ใจว่าเป็น Floating-point division
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", x_val_case6_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (x_val_case6_long == x_val_case6_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    // --- การเปรียบเทียบที่ 7: score = score - (penalty * (mistake + 1));  เทียบกับ  score -= (penalty * (mistake + 1)); ---
    printf("7. score = score - (penalty * (mistake + 1)); และ score -= ...;\n"); // การคำนวณนี้จะใช้กับตัวแปร score ที่เป็น double
    printf("   (ค่าตัวแปร: penalty=%.1f, mistake=%d)\n", penalty, mistake); // แสดงค่าตัวแปร penalty, mistake

    double score_val_case7_long = 500.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันเต็ม
    score_val_case7_long = score_val_case7_long - (penalty * (mistake + 1)); // การคำนวณรูปแบบเต็ม
    printf("   ผลลัพธ์ (รูปแบบเต็ม) : %.2f\n", score_val_case7_long); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f

    double score_val_case7_short = 500.0; // กำหนดค่าเริ่มต้นสำหรับเวอร์ชันย่อ
    score_val_case7_short -= (penalty * (mistake + 1)); // การคำนวณรูปแบบย่อ (Compound Assignment)
    printf("   ผลลัพธ์ (รูปแบบย่อ)  : %.2f\n", score_val_case7_short); // แสดงผลเป็นจำนวนทศนิยมด้วย %.2f
    printf("   ผลลัพธ์ตรงกัน: %s\n\n", (score_val_case7_long == score_val_case7_short) ? "YES" : "NO"); // ใช้เงื่อนไขเพื่อแสดงผลว่าเท่ากันหรือไม่


    return 0; // คืนค่า 0 เพื่อระบุว่าโปรแกรมทำงานเสร็จสมบูรณ์

}