#include <stdio.h>
 #ifdef _WIN32
  #include <windows.h>
  #endif
int main(){
  #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif


    float f; //华氏温度
    float c; //摄氏温度

    printf("请输入华氏温度: ");
    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0; //华氏转摄氏公式: C = (F-32) × 5/9

    printf("%.2f华氏度 = %.2f摄氏度\n", f, c);
    return 0;
}
