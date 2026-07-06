#include <stdio.h>
int main()
{
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 5 Subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%d", &m1);
    printf("Subject 2: ");
    scanf("%d", &m2);
    printf("Subject 3: ");
    scanf("%d", &m3);
    printf("Subject 4: ");
    scanf("%d", &m4);
    printf("Subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\n----- MARKSHEET -----\n");
    printf("Student Name : %s\n", name);
    printf("Total Marks  : %d / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33)
    {
        printf("Result       : FAIL\n");
    }
    else
    {
        printf("Result       : PASS\n");

        if (percentage >= 90)
            printf("Grade        : A+\n");
        else if (percentage >= 80)
            printf("Grade        : A\n");
        else if (percentage >= 70)
            printf("Grade        : B\n");
        else if (percentage >= 60)
            printf("Grade        : C\n");
        else if (percentage >= 50)
            printf("Grade        : D\n");
        else
            printf("Grade        : E\n");
    }

    return 0;
}