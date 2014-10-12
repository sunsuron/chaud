#include <stdio.h>

void set(int m[], int c)
{
    int i;

    for (i = 0; i < c; i++)
    {
        printf("Mark: "); scanf("%d", &m[i]); // fill the student's mark into the array
    }
}

void get(int m[], int c)
{
    int i, total = 0, min = m[0], max = m[0]; // declare and initialize our total, min & max

    for (i = 0; i < c; i++)
    {
        total = total + m[i]; // total marks

        if (min > m[i]) min = m[i]; // minimum value

        if (max < m[i]) max = m[i]; // maximum value
    }

    printf("\nTotal: %d, Average: %.2f, Min: %d, Max: %d", total, (float)total/c, min, max);
}

int main()
{
    int const count = 3; // we have three students

    int i, marks[count]; // declare our array

    for (i = 0; i < count; i++)
    {
        marks[i] = 0; // initialize all student mark with the value zero
    }

    set(marks, count);

    get(marks, count);

    return 0;
}
