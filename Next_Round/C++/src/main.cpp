#include <cstdio>
#include <cstdint>

int main(int argc, char** argv)
{
        uint8_t* nk = new uint8_t[2];

        for(int i = 0; i < 2; i++)
        {
                scanf("%hhu", &nk[i]);
        }

        uint8_t* score = new uint8_t[nk[0]];

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
