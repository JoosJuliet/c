#include <stdio.h>

int main(void)
{
  /* ASCII code of null is 0 */
  char null1 = NULL;
  char null2 = 0;
  char null3 = '\0';
  /* zero isn't null */
  char zero = '0';
  printf("%d,%d,%d,%d\n\n",null1,null2,null3,zero );

  /*usage of string*/
  char *str1 = "HYU";
  char ary_str1[4] = {'H','Y','U'};
  char ary_str2[] = {"HYU"};
  printf("%s,%s,%s\n\n",str1,ary_str1,ary_str2 );

  /*replacement of string */
  ary_str1[0] = 'A';
  ary_str2[0] = 'A';
  printf("%s,%S\n", ary_str1,ary_str2);
  /*error(why?)*/
  str1[0] = 'A';
}
