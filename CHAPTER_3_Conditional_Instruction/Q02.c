// write a program to find out whether a student
// is pass or fail, if it requires total 40% and
// atleast 33% in each subjects to pass. Assume 3
// subject and take marks as a input from user

#include <stdio.h>

int main()
{
    printf("this program help us to find percentage and result status of exam\n");
    // I assumed each subject is of 100 marks so total marks is 300

    // let 3 subjects to be physics chemistry and maths
    int physics, chemistry, maths;

    // taking input from user
    printf("Enter the marks of Physics\n");
    scanf("%d", &physics);

    // taking input from user
    printf("Enter the marks of Chemistry\n");
    scanf("%d", &chemistry);

    // taking input from user
    printf("Enter the marks of Maths\n");
    scanf("%d", &maths);

    // creating variable and calculating total percentage
    float toatal_marks_percentage;
    toatal_marks_percentage = ((physics + chemistry + maths) * 100) / 300;

    // cheacking the condition of passin the exam and printing the result status
    if ((physics >= 33) && (chemistry >= 33) && (maths >= 33) && (toatal_marks_percentage >= 40))
    {
        printf("You are passed the exam\n");
    }

    else
    {
        printf(" you failed in the exam\n");
    }

    // printing total percentage
    printf("your total percentage is %f", toatal_marks_percentage);

    return 0;
}