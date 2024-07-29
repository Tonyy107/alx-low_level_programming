#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *arr = (char *)malloc(size * sizeof(char));
    if (size == 0)
    {
        return NULL;
    }
    else if (arr == NULL)
    {
        return NULL;
    }
    else
    {
        for (unsigned int i = 0; i < size; i++)
        {
            arr[i] = c;
        }
        return arr;
    }
}