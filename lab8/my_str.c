#include <stdio.h>

char *my_strcat(char *s1, const char *s2)
{
  // write my code
  char *tmp = s1;
  if(s1 == NULL || s2 == NULL) return NULL;

  while (*tmp) tmp++;
  while (*s2) *tmp++ = *s2++;
  *tmp = '\0';
  return s1;
}

int my_strcmp(const char *s1, const char *s2)
{
  int c;
  int i=0,j=0; //index접근 하기 위한 변수 선언
  while(s1[i]!='\0')
  {
    if(s1[i++] != s2[j++]) //한문자씩 비교
      break;
  }
  c = s1[i] - s2[j];
  //첫번째 문자열과 두번재 문자열을 같지 않으면 값을 빼줌
// write my code
  return c;
}

int main(void)
{
  char *str1 = "STARBUCKS";
  char str2[10] = "STAR";
  char *str3 = "BUCKS";
  my_strcat(str2,str3);
  if(my_strcmp(str1,str2) == 0)
    printf("Nailed it\n");
  else
    printf("my_strcmp(str1,str2): %d\n", my_strcmp(str1,str2));
  return 0;
}

size_t strlen(const char *s)
// size_t =
{
  size_t n;
  for (n=0; *s != '\0'; ++s)
    ++n;
  return n;
}

char *strcpy(char *s1, register const char *s2)
{
  register char *p = s1;
  while(*p++ = *s2++)
    ;
  return s1;
}
