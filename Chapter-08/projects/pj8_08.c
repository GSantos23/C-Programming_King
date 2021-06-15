/**
 * Modify Programming Project 7 so that it prompts for five quiz for each of 
 * five students, then computes the total score and average score for each 
 * student, and the average score, high score, and low score for each quiz
 * */

/*
Enter quiz 1: 90 90 90 90 90
Enter quiz 2: 85 85 90 76 99
Enter quiz 3: 100 100 100 85 100
Enter quiz 4: 25 40 75 88 100
Enter quiz 5: 89 85 88 87 80

Quiz average: 90.0 87.0 97.0 65.6 85.8 
Quiz high: 90 99 100 100 89 
Quiz Low: 90 76 85 25 80 

Student average: 77.8 80.0 88.6 85.2 93.8 
Total score: 389.0 400.0 443.0 426.0 469.0
*/

#include <stdio.h>

#define NUM_QUIZZES  5
#define NUM_STUDENTS 5

int main(void)
{
  int grades[NUM_STUDENTS][NUM_QUIZZES];
  int high, low, quiz, student, total;

  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("Enter grades for student %d: ", student + 1);
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      scanf("%d", &grades[student][quiz]);
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
