#include <stdio.h>

#define NUM_QUIZZES  5
#define NUM_STUDENTS 5

int main(void)
{
  int grades[NUM_STUDENTS][NUM_QUIZZES];
  int high, low, quiz, student, total;
  int counter[5] = {0};

  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("Enter grades for student %d: ", student + 1);
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      //printf("读取的数据为%d\n", grades[student][quiz]);      
      scanf("%d", &grades[student][quiz]);
      //if (student == 0)
        counter[quiz] = grades[student][quiz];
      
  }
  int i = 0;
  while (i < 5) {
    printf("%d ", counter[i++]);  // 输出值为0 0 0 0 0，即初始值，说明scanf后的语句没有赋值成功，根本就没有执行
  }

  printf("\nStudent  Total  Average\n");
  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("%4d      ", student + 1);
    total = 0;
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      total += grades[student][quiz];
    printf("%3d     %3d\n", total, total / NUM_QUIZZES);
  }

  printf("\nQuiz  Average  High  Low\n");
  for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
    printf("%3d     ", quiz + 1);
    total = 0;
    high = 0;
    low = 100;
    for (student = 0; student < NUM_STUDENTS; student++) {
      total += grades[student][quiz];
      if (grades[student][quiz] > high)
        high = grades[student][quiz];
      if (grades[student][quiz] < low)
        low = grades[student][quiz];
    }
    printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, low);
  }

  return 0;
}

