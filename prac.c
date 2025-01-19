#include <stdio.h>

int main()
{
    for (int i = 0, flag = 1; i < 5 && flag == 1; i++, flag = (i == 2 ? 0 : 1))
    {
        if (i == 2)
            flag = 0;
        printf("iteration [%d]\n", i);
    }
    return 0;
}