#include <stdio.h>
int main()
{
    int answer, score = 0;

    printf("--- GSoC Quiz Application ---\n\n");

    printf("Q1. What does GSoC stand for?\n");
    printf("1. Google Summer of Code\n2. Global Software Coding\n3. Google Software Competition\n4. General Summer Course\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;


    printf("\nQ2. GSoC is organized by which company?\n");
    printf("1. Microsoft\n2. Google\n3. Apple\n4. Amazon\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;


    printf("\nQ3. GSoC mainly focuses on?\n");
    printf("1. Gaming\n2. Open-source software development\n3. Hardware design\n4. Marketing\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;


    printf("\nQ4. What do students submit for GSoC selection?\n");
    printf("1. Project Proposal\n2. Game Score\n3. Attendance Sheet\n4. Exam Paper\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;


    printf("\nQ5. GSoC helps students improve?\n");
    printf("1. Coding skills and real-world experience\n2. Only marks\n3. Driving skills\n4. Sports skills\n");

    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;


    printf("\n--- Quiz Result ---\n");
    printf("Your Score: %d/5\n", score);

    if(score == 5)
        printf("Excellent! You know about GSoC.\n");
    else if(score >= 3)
        printf("Good! Keep learning about open source.\n");
    else
        printf("Need more knowledge about GSoC.\n");

    return 0;
}