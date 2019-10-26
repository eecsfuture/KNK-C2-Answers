#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
  char domain[] = "knking.com";
  char index_url[50];
  
  build_index_url(domain, index_url);
  printf("%s\n", domain);
  printf("%s\n", index_url);

  return 0;
}


void build_index_url(const char *domain, char *index_url) {
  //char s1[] = "http://www.";  //运行程序会报栈溢出错误，因为s1[]存储空间不足，Stack Smashing here is actually caused due to a protection mechanism used by gcc to detect buffer overflow errors
  char s1[50] = "http://www.";
  char s2[] = "/index.html";
  strcat(s1, domain);
  strcat(s1, s2);
  strcpy(index_url, s1); 
}
