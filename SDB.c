#include "SDB.h"
#include <stdio.h>

#define MAX_STUDENTS 10

student students[MAX_STUDENTS];
uint8 num_students = 0;


bool SDB_IsFull() {
    if (num_students == MAX_STUDENTS) {
        return true;
    }
    else{
        return false;
    }
}


uint8 SDB_GetUsedSize()
{
    return num_students;
}

bool SDB_AddEntry()
{
    if (SDB_IsFull())
    {
        printf("Error: database is full.\n");
        return false;
    }

    printf("Enter student ID: ");
    scanf("%u", &students[num_students].Student_ID);

    printf("Enter student year: ");
    scanf("%u", &students[num_students].Student_year);

    printf("Enter Course 1 ID: ");
    scanf("%u", &students[num_students].Course1_ID);

    printf("Enter Course 1 grade: ");
    scanf("%u", &students[num_students].Course1_grade);

    printf("Enter Course 2 ID: ");
    scanf("%u", &students[num_students].Course2_ID);

    printf("Enter Course 2 grade: ");
    scanf("%u", &students[num_students].Course2_grade);

    printf("Enter Course 3 ID: ");
    scanf("%u", &students[num_students].Course3_ID);

    printf("Enter Course 3 grade: ");
    scanf("%u", &students[num_students].Course3_grade);

    num_students++;

    return true;
}

void SDB_DeleteEntry(uint32 id)
{
    for (int i = 0; i < num_students; i++)
    {
        if (students[i].Student_ID == id)
        {
            for (int j = i; j < num_students - 1; j++)
            {
                students[j] = students[j + 1];
            }
            num_students--;
            break;
        }
    }
}

bool SDB_ReadEntry(uint32 id)
{
    for (int i = 0; i < num_students; i++)
    {
        if (students[i].Student_ID == id)
        {
            printf("Student ID: %u\n", students[i].Student_ID);
            printf("Student year: %u\n", students[i].Student_year);
            printf("Course 1 ID: %u\n", students[i].Course1_ID);
            printf("Course 1 grade: %u\n", students[i].Course1_grade);
            printf("Course 2 ID: %u\n", students[i].Course2_ID);
            printf("Course 2 grade: %u\n", students[i].Course2_grade);
            printf("Course 3 ID: %u\n", students[i].Course3_ID);
            printf("Course 3 grade: %u\n", students[i].Course3_grade);
            return true;
        }
    }
    return false;
}


void SDB_GetList(uint8 *count, uint32 *list)
{
    *count = num_students;
    for (int i = 0; i < num_students; i++)
    {
        list[i] = students[i].Student_ID;
    }
}

bool SDB_IsIdExist(uint32 id)
{
    for (int i = 0; i < num_students; i++)
    {
        if (students[i].Student_ID == id)
        {
            return true;
        }
    }
    return false;
}