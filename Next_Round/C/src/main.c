#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
        uint8_t* nk = malloc(2*sizeof(uint8_t));

        for(int i = 0; i < 2; i++)
        {
                scanf("%hhu", &nk[i]);
        }

        uint8_t* score = malloc(nk[0]*sizeof(uint8_t));

        for(int i = 0; i < nk[0]; i++)
        {
                scanf("%hhu", &score[i]);
        }

        uint8_t thresh = score[nk[1]-1];
        uint8_t parts = 0;
        uint8_t el = 0;

        for(int i = 0; i < nk[0]; i++)
        {
                el = score[i];

                if(el >= thresh && el > 0)
                {
                        parts += 1;
                } else
                {
                        break;
                }
        }

        printf("%d\n", parts);

        return 0;
}
