#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
        int n;
        scanf("%d", &n);

        uint8_t* k[n];

        for(int j = 0; j < n; j++)
        {
                k[j] = malloc(3*sizeof(uint8_t));

                for(int i = 0; i < 3; i++)
                {
                        scanf("%hhu", &k[j][i]);
                }
        }

        int problems = 0;
        uint8_t s = 0;

        for(int j = 0; j < n; j++)
        {
                for(int i = 0; i < 3; i++)
                {
                        s += k[j][i];
                }

                if(s > 1)
                {
                        problems += 1;
                }

                s = 0;
        }

        printf("%d\n", problems);

        return 0;
}
