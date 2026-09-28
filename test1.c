// #include <stdio.h>
 #ifdef _WIN32
  #include <windows.h>
  #endif
// int main(){
  // #ifdef _WIN32
  //   SetConsoleOutputCP(65001);
  //   #endif


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


// #include<stdio.h> 
// int main(){
//   int year = 0;
//   int month = 0;
//   scanf("%d%d",&year,&month);
//   switch(month){
//     case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//     printf("31\n");
//     break;
//     case 4: case 6: case 9: case 11:
//     printf("30\n");
//     break;
//     case 2:
//     if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
//       printf("29\n");
//     }
//     else {
//       printf("28\n");
//     }
//     break;  
//   }
//   return 0;
// }


// #include<stdio.h>
// int main(){
//   int a = 0;
//   scanf("%d",&a);
//   int ge = a % 10;
//   int shi = a / 10 % 10;
//   int bai = a / 100;
//   if(ge * ge * ge + shi * shi *shi + bai * bai * bai == a){
//     printf("yes\n");
//   }
//   else{
//     printf("no\n");
//   }
//   return 0;
// }



// #include<stdio.h> //输入 n，输出 1~n 的和
// int main(){     
//   int sum = 0;  //数更大时要用 long long sum = 0;
//   int n = 0;
//   scanf("%d",&n);
//   for(int i = 1; i <= n; i++){
//     sum = sum + i;
//   }
//   printf("%d\n",sum);
//   return 0;
// }



// #include<stdio.h>   //输入 n，输出 n!（n 的阶乘）
// int main(){
//   int num = 1;
//   int n = 0;
//   scanf("%d",&n);
//   for(int i = 1; i <= n; i++){
//     num = num * i;
//   }
//   printf("%d\n",num);
//   return 0;
// }


// #include<stdio.h>  //输入 n，输出 1~n 中所有偶数
// int main(){
//   int n = 0;
//   scanf("%d",&n);
//   for(int i = 2; i <= n; i += 2){
//     printf("%d\n",i);
//   }
//   return 0;
// }



// #include<stdio.h>  //输入 n，统计 1~n 中有多少个数能被 3 整除
// int main(){
//   int cnt = 0;  //这里cnt是指counter，计数器
//   int n = 0;
//   scanf("%d",&n);
//   for(int i = 1; i <= n; i++){
//     if(i % 3 == 0){
//       cnt += 1;
//     }
//   }
//   printf("%d\n",cnt);
//   return 0;
// }



// #include<stdio.h>  //输入 n，判断是不是素数
// int main(){
//   int n = 0;
//   scanf("%d",&n);
//   if(n < 2){
//     printf("no\n");
//     return 0;
//   }
//     int su = 1;
//     for(int i = 2; i < n; i++){
//       if(n % i == 0){
//         su = 0;
//         break;
//       }
//     }
//     if(su == 1){
//       printf("yes\n");
//     }
//     else{
//       printf("no\n");
//     }
//   return 0; 
// }



// #include<stdio.h>   //输入一个正整数，把它倒过来逐个输出
// int main(){
//   int num = 0;
//   scanf("%d",&num);
//   while(num > 0){
//     int a = num % 10;
//     printf("%d  ", a);
//     num = num / 10;
//   }
//   return 0;
// }


// #include<stdio.h>   //输入一个正整数，把它正过来逐个输出
// int main(){
//   int num = 0;
//   scanf("%d",&num);
//   int p = 1;
//   while(num / p >= 10){
//     p *= 10;
//   }
//   while(p > 0){
//     printf("%d ",num / p % 10);
//     p /= 10;
//   }
//   return  0; 
// }



// #include<stdio.h>   //星号三角形（输入 n，第 i 行打 i 个 *）
// int main(){
//   int num = 0;
//   scanf("%d",&num);
//   for(int i = 1; i <= num; i++){
//     for(int j = 1; j <= i; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>    //输出九九乘法表。第 i 行有 i 个算式
// int main(){
//   for(int a = 1; a <= 9; a++){
//     for(int b = 1; b <= a; b++){
//       int c = a * b;
//       printf("  %d*%d=%d", a, b, c);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// #include<stdio.h>   //	输入 n 和 n 个数，输出它们的和，以及平均数（保留 2 位小数）
// int main(){
//     // #ifdef _WIN32
//     // SetConsoleOutputCP(65001);
//     // #endif
//   int n = 0;
//   // printf("请输入数字个数 n: ");
//   scanf("%d",&n);
//   int a[1005];
//   int sum = 0;
//   // printf("请输入 %d 个数字: ", n); 
//   for(int i = 0; i < n; i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i = 0; i < n; i++){
//     sum = sum + a[i];
//   }
//     printf("%d\n", sum);
//     double mean = (double)sum / n;
//     printf("%.2f\n", mean);    
//   return 0; 
// }



// #include<stdio.h>   //	输入 n 和 n 个数，输出最大值和最小值
// int main(){
//   int n = 0;
//   scanf("%d",&n);
//   int a[1005];
//   for(int i = 0; i < n; i++){
//     scanf("%d",&a[i]);
//   }
//   int max = a[0];
//   int min = a[0];
//   for(int i = 0; i < n; i++){
//     if(a[i] > max){
//       max = a[i];
//     }
//     if(a[i] < min){
//       min = a[i];
//     }                                                                           
//   }
//     printf("%d\n", max);
//     printf("%d\n", min);
//   return 0;
// }



// #include<stdio.h>   // 	输入 n 和 n 个数，倒序输出（用下标控制）	反向遍历
// int main(){
//   int n = 0;
//   scanf("%d", &n);

//   int a[1005];
//   for(int i = 0; i < n; i++){
//     scanf("%d", &a[i]);
//   }
//   for(int i = n - 1; i >= 0; i--){
//     printf("%d\n", a[i]);
//   }
//   return 0;
// }


// #include<stdio.h>  // 	输入 n 和 n 个数，统计有多少个数大于平均数	两个循环
// int main(){
//   int n = 0;
//   scanf( "%d",&n);
//   int a[1005];
//   for(int i = 0; i < n; i++){
//     scanf("%d", &a[i]);
//   }
//   int cnt = 0;
//   int sum = 0;
//   for(int i = 0; i < n; i++){
//     sum += a[i];
//   }
//   double mean = (double)sum / n;
//   for(int i = 0; i < n; i++){
//     if(a[i] > mean){
//       cnt += 1;
//     }
//   }
//   printf("%d\n", cnt);
//   return 0;
// }


// #include<stdio.h>   //冒泡排序
// int main(){
//   int n = 0;
//   scanf("%d",&n);
//   int a[1005];
//   for(int i = 0; i < n; i++){
//     scanf("%d", &a[i]);}
//   for(int i = 0; i < n; i++){
//     for(int j = 0; j < n - 1 - i; j++){
//       if(a[j] > a[j + 1]){
//         int k = a[j];
//         a[j] = a[j + 1];
//         a[j + 1] = k;
//       }
//     }
//   }
//   for(int i = 0; i < n; i++){
//     printf("%d", a[i]);
//   }
//   return 0;
// }



