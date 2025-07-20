#include <stdio.h>
// Global constant
const int GLOBAL_RATE = 10;
void calculate() {
    // Local constant
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}
int main() {
    calculate();
    // GLOBAL_RATE เป็น global constant ใช้ใน main() ได้
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    // LOCAL_BONUS เป็น local constant ใช้ใน main() ไม่ได้ (จะเกิด compile-time error)
    // Uncomment บรรทัดด้านล่างเพื่อดู error
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);
    return 0;
}
//สรุปผลจากการทดลอง:
// GLOBAL_RATE ถูกประกาศเป็น global constant สามารถใช้งานได้ทุกที่ในโปรแกรม เช่นใน main() และฟังก์ชันอื่น ๆ
// LOCAL_BONUS ถูกประกาศเป็น local constant เฉพาะในฟังก์ชัน calculate() เท่านั้น
// หากเรียกใช้ LOCAL_BONUS ใน main() จะเกิดข้อผิดพลาดขณะคอมไพล์ เพราะอยู่นอกขอบเขตการมองเห็น (scope)
// การใช้ const ช่วยป้องกันการเปลี่ยนแปลงค่าคงที่โดยไม่ได้ตั้งใจ ทำให้โปรแกรมปลอดภัยและอ่านง่ายขึ้น