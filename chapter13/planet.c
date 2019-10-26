/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

void capitalize(char low[], char up[]);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  char s[10], p[10];
  int i, j;

  for (i = 1; i < argc; i++) {
    capitalize(argv[i], s);
    //printf("s is %s\n", s);
    for (j = 0; j < NUM_PLANETS; j++) {
      capitalize(planets[j], p);
      //printf("p is %s\n", p);
      if (strcmp(s, p) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

void capitalize(char low[], char up[]) {
  int i = 0;
  while (low[i]) {
    up[i] = low[i];  // 先复制，再将新数组中的小写字母转换为大写字母
    if (isalpha(up[i]))
      up[i] = toupper(up[i]);
    i++;
  }
  up[i] = '\0';  // 添加末尾的空字符
}

// 官网答案
/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int string_equal(const char *s, const char *t);

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (string_equal(argv[i], planets[j])) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

int string_equal(const char *s, const char *t)
{
  int i;

  for (i = 0; toupper(s[i]) == toupper(t[i]); i++)
    if (s[i] == '\0')
      return 1;

  return 0;
}
*/
