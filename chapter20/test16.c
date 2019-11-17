#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD;

union {
  struct {
    DWORD eax, ebx, ecx, edx;
  } dword;
  struct {
    WORD ax, nonea, bx, noneb, cx, nonec, dx, noned;
  } word;
  struct {
    BYTE al, ah, nonea1, nonea2, bl, bh, noneb, noneb2, cl, ch, nonec1, nonec2, dl, dh, noned1, noned2;
  } byte;
} regs;

int main(void)
{
  DWORD i;
  printf("%d\n", (int) (sizeof(i)));
  WORD j;
  printf("%d\n", (int) (sizeof(j)));
  BYTE k;
  printf("%d\n", (int) (sizeof(k)));
  
  regs.byte.ah = 0x12;
  regs.byte.al = 0x34;
  printf("AX: %hx\n", regs.word.ax);
  printf("EAX: %hx\n", regs.dword.eax);

  return 0;
}
