#include <stdio.h>
// กรณีที่ 1: ใช้ static variable
void countCallStatic() {
    static int counter = 0; 
    counter++;
    printf("[Static] Call Function: Counter = %d\n", counter);
}
// กรณีที่ 2: ไม่ใช้ static variable
void countCallNonStatic() {
    int counter = 0; 
    counter++;
    printf("[Non-Static] Call Function: Counter = %d\n", counter);
}
int main() {
    printf("Starting function calls...\n\n");

    printf("--- Non-Static Variable ---\n");
    countCallNonStatic();
    countCallNonStatic();
    countCallNonStatic();

    printf("\n--- Static Variable ---\n");
    countCallStatic();
    countCallStatic();
    countCallStatic();

    return 0;
}
/*------------------------------------------------------------
ผลลัพธ์ที่ได้ต่างกันอย่างไร เพราะเหตุใด?
- กรณี static: ค่าของ counter จะเพิ่มขึ้นเรื่อย ๆ เพราะไม่ถูกรีเซ็ต
- กรณี non-static: counter จะเริ่มที่ 0 ทุกครั้ง ทำให้แสดงผลเป็น 1 เสมอ
------------------------------------------------------------*/