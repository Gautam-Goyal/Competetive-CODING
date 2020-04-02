/*TASK:-You are given an array of integers,marks, denoting the marks scored by students in a class. The
       alternating elements ,marks0,marks2,marks4and so on are the marks of boys whereas ,marks1,marks3,marks5,and so on are the
       marks of girls. The array name,marls, works as a pointer which stores the base address of that array. In other words,marks
       contains the address where marks0 is stored in the memory.
       For example, let marks= [3, 2, 5] and marks= 3000. Then, 3000 is the memory address of marks0.

       Complete the function, marks_summation(int* marks, char gender, int number_of_students) which returns the total sum of:
       marks of boys if gender=b
       marks of girls if gender=g

INPUT:-The first line contains number_of_students , denoting the number of students in the class, hence
       the number of elements in marks .
       Each of the number_of_students subsequent lines contains marksi.
       The next line contains gender
OUTPUT:-The output should contain the sum of all the aternate elements in marks as explained above.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender)
{
    int s=0,j,b,g;
        if(gender=='b') //write- 'b' not b
        {
            for(j=0 ;j<number_of_students ; j+=2)
            {
                s=s+*(marks+j);
            }
            return s;
        }
        else if(gender=='g')
        {
            for(j=1;j<number_of_students;j+=2)
            {
                s=s+*(marks+j);
            }
            return s;
        }
        else
            exit (0);

}
/*OR:-int marks_summation(int* marks, int number_of_students, char gender) {
       int sum = 0;
      for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2)
        sum += *(marks + i);

      return sum;
    }*/
int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
