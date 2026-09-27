// #include <stdio.h>
 #ifdef _WIN32
  #include <windows.h>
  #endif
// int main(){
//   #ifdef _WIN32
//     SetConsoleOutputCP(65001);
//     #endif


//     float f; //华氏温度
//     float c; //摄氏温度

//     printf("请输入华氏温度: ");
//     scanf("%f", &f);

//     c = (f - 32) * 5.0 / 9.0; //华氏转摄氏公式: C = (F-32) × 5/9

//     printf("%.2f华氏度 = %.2f摄氏度\n", f, c);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//   int num = 0;
//   scanf("%d",&num);
//   if(num % 400 == 0 || num % 4 == 0 && num % 100 != 0){
//     printf("yes\n");
//   } else{
//     printf("no\n");
//   }
//   return 0;
// }



// #include<stdio.h> //分支两道热身
// int main(){
//     int num = 0;
//     scanf("%d",&num);
//     if(num == 0){
//         printf("zero\n");
//     }
//     else if(num > 0){
//         printf("positive\n");
//     }
//     else{
//         printf("negative\n");
//     }
//     return 0;

// }



// #include<stdio.h>
// int main(){
//     int num1 = 0;
//     int num2 = 0;
//     int num3 = 0;
//     scanf("%d%d%d",&num1,&num2,&num3);
//     int max = num1;
//     if(num2 > num1){
//         max = num2;
//     }
//     if(num3 > max){
//         max = num3;
//     }
//     printf("%d\n", max);
//     return 0;
// }



// #include<stdio.h>        //分支三道主菜
// int main(){
//     int store = 0;
//     scanf("%d",&store);
//     if(store >= 90){
//         printf("A");
//     }
//     else if(store >= 80){
//         printf("B");
//     }
//     else if(store >= 70){
//         printf("C");
//     }
//     else if(store >= 60){
//         printf("D");
//     }
//     else if(store >= 0){
//         printf("E");
//     }    
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int x = 0;
//     int y = 0;
//     scanf("%d",&x);
//     if(x  < 0){
//         y = -x;
//     }
//     if(x < 10 && x >=0){
//         y = x * x;
//     }
//     if(x < 20 && x >= 10){
//         y = 2 * x + 1;
//     }
//     if(x >= 20){
//         y = 100;
//     }
//     printf("%d\n",y);//这个程序用 else if 更好
// }
    


// #include<stdio.h>
// int main(){
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d",&a,&b,&c);
//     if(a + b > c && a + c > b && b + c > a , a == b && b == c){
//         printf("equilateral\n");
//     }
//     if(a + b > c && a + c > b && b + c > a , a == b || a == c || b == c){ //这里用else if(a == b || a == c || b == c)且这里等腰必须写在等边前面，不改了
//         printf("isosceles\n");
//     }
//     if(a + b <= c || a + c <= b || b + c <= a){
//         printf("not a triangle\n");
//     }
//     else {
//         printf("scalene\n");
//     }
//     return 0; //这个先走非三角形再用else if会简洁很多
// }


// #include<stdio.h>  //分支三道挑战
// int main(){
//     int a = 0;
//     int b = 0;
//     char c;
//     scanf("%d %c%d",&a,&c,&b);
//     switch(c){
//       case '+': printf("%d\n", a + b); break;
//       case '-': printf("%d\n", a - b); break;
//       case '/': printf("%.2f\n", (double)a / b); break; //这里用了强制类型转换
//       case '*': printf("%d\n", a * b); break;
//       default: printf("运算符不认识\n"); break;  //这里防止出现别的符号无法输出
//     }
//     return 0;
// }


#include<stdio.h> 
int main(){
  int year = 0;
  int month = 0;
  scanf("%d%d",&year,&month);
  switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31\n");
    break;
    case 4: case 6: case 9: case 11:
    printf("30\n");
    break;
    case 2:
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
      printf("29\n");
    }
    else {
      printf("28\n");
    }
    break;  
  }
  return 0;
}

