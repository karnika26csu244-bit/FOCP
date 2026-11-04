
#include <stdio.h>

int main()
{
    int n, i;
    float marks[100], sum = 0, average;
    float highest, lowest;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for (i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = sum / n;

    printf("Average marks = %.2f\n", average);
    printf("Highest marks = %.2f\n", highest);
    printf("Lowest marks = %.2f\n", lowest);

    return 0;
}
