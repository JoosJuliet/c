#include <stdio.h>

int main(void) {
  char a[4][10] = {"HaHa","han yang ","cheese"," Iphone"};
  char *(pc[4]) = {a[0],a[1],a[2],a[3]};
  char **ppc = pc;

  printf("%c\n", *(*(pc+3)+1));
  printf("%s\n", *(ppc+1)+4);
  // 겉3 안4
  return 0;
  // hanyang cse 출력
}
