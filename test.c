 #include <stdio.h>
  #ifdef _WIN32
  #include <windows.h>
  #endif
// int main(){
//     printf("%c\n", 'X');
//     printf("%c\n", 88);
//      return 0;
//  }

// // #include <stdio.h>
// #include <stdbool.h>
// // int main(){
//     _Bool flag = true; //此处也可以填false,填false将打印不出变量 //_Bool也可以写成bool
//     if (flag)
//     printf("i like zhu\n");
//     // return 0;
// // }

// // int main(){
//     int a = 1;

//     printf("%d\n",(++a) + (++a) + (++a));//这个式子是有问题的

//     return 0;
// }


int main(){
    int score = 0;
    #ifdef _WIN32
    SetConsoleOutputCP(65001);
    #endif
    printf("请输入成绩：");
    scanf("%d", &score);  //& -- 取地址操作符，即输入值的变量地址
    printf("成绩是：%d\n",score);
    return 0;
}  