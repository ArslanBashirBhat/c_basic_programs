/*If the marks obtained by a student is five different subjects are inputs through the keyboard, find out the aggregate makrs and
percentage marks obtained by the student.Assume that the maximum marks that can be obtained by a student in each subject is 100. */

#include <stdio.h>
#define total_marks 500

int main()
{
    float marks_obtained, percentage;
    float maths, english, science, urdu, history;

    printf("Enter the marks obtained in Maths, English, Science, Urdu & History: ");
    scanf("%f %f %f %f %f", &maths, &english, &science, &urdu, &history);

    marks_obtained = maths + english + science + urdu + history;
    printf("Total Marks Obtained: %.2f\n", marks_obtained);

    percentage = (marks_obtained / total_marks) * 100;
    printf("Percentage: %.2f%%", percentage);

    return 0;
}
