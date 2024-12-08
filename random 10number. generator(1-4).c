#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
        for (int i = 0; i < 5; i++)
        {
            int random = (rand() % 4) + 1;
            printf("%d: %d\n", i+1, random);
        }

        printf("======================\n");

        for (int i = 0; i < 5; i++)
        {
            int random = (rand() % 4) + 1;
            printf("%d: %d\n", i+6, random);
        }    
    return 0;
}
