#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
#define PRAGMA2(x) #x

int main(void)
{
  IDENT(foo);  // 用gcc -E test16.c命令可以看到预处理后的输出为：#pragma ident "foo"
  PRAGMA2(ident "foo");  // 预处理输出为："ident \"foo\"";
  PRAGMA2("foo");  // 预处理输出为："\"foo\"";
  return 0;
}

