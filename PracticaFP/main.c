#include "stdio.h"
#include "stdlib.h"
#include <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Tienes que indicar tu usuario\n");
    }
    else
    {
        while ((argv[1] < 0) || (argv[1] >= MAX))
        {
            printf("Tu usuario esta fuera del rango de usuarios")
            scanf("%c", &argv[1])
        }
        
    }
}