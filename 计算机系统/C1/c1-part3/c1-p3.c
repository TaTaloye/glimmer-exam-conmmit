#include <stdio.h>
int pf(int x){ // 平方函数
    return x * x;
}
int p(int a1, int a2, int a3){  // 平均函数
    return (a1 + a2 + a3) / 3;
    }
int f(int b1, int b2, int b3){  // 方差函数
    int avg = p(b1, b2, b3);
    return (pf(avg - b1) + pf(avg - b2) + pf(avg - b3)) / 3;
    }
int zh(int c1, int c2, int c3){  // 综合成绩函数
    return 3 * p(c1, c2, c3) - f(c1, c2, c3) / 3;
    }
void print(int zh1, int zh2, int zh3){ // if函数
     if (zh1 >= zh2 && zh2 >= zh3) {
      printf("小明 > 小强 > 小林");
  } else if (zh1 >= zh3 && zh3 >= zh2) {
      printf("小明 > 小林 > 小强");
  } else if (zh2 >= zh1 && zh1 >= zh3) {
      printf("小强 > 小明 > 小林");
  } else if (zh2 >= zh3 && zh3 >= zh1) {
      printf("小强 > 小林 > 小明");
  } else if (zh3 >= zh1 && zh1 >= zh2) {
      printf("小林 > 小明 > 小强");
  } else { // zh3 >= zh2 && zh2 >= zh1
      printf("小林 > 小强 > 小明");
  }
}
int main(){
  int m1, m2, m3;
  int q1, q2, q3;
  int l1, l2, l3;

  printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &m1, &m2, &m3);
  printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &q1, &q2, &q3);
  printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &l1, &l2, &l3);

  int zh1 = zh(m1, m2, m3);
  int zh2 = zh(q1, q2, q3);
  int zh3 = zh(l1, l2, l3);

  print(zh1, zh2, zh3);

  return 0;
}
/*
VS CODE 的自动填写还是太超模了
*/