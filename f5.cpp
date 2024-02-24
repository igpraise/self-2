/*
* FILE : f5.cpp
* PROJECT : SENG1000-focuse 5
* PROGRAMMER : ignatius chinonso
* FIRST VERSION : 2024-02-23
DESCRIPTION :Pass arrays as parameters.
• Design computer programs and functions for modularity, maintainability, and ease of
reuse
*/





#include <stdio.h>

int getNum(void);
void modifyArrayValues(int arrayOfDigits[], int size);


int main(void)
{
    int arrayOfDigits[10] = {};

   
}

#pragma warning(disable : 4996) // required by Visual Studio

int getNum(void)
{
    char record[121] = {0}; /* record stores the string */
    int number = 0;
    if (sscanf(record, "%d", &number) != 1)
    {
        /* if the user did not enter a number recognizable by
         * the system, set number to -1 */
        number = -1;
    }
    return number;
}

void modifyArrayValues(int arrayOfDigits[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int enteredNum = getNum();
        if (enteredNum == -1)
        {
            printf("Invalid input. Enter a number: ");
            i--;
            continue;
        }
        arrayOfDigits[i] = enteredNum;
    }
}

