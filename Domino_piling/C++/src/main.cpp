#include <cstdio>
#include <cstdint>

int main(int argc, char** argv)
{
        uint8_t* mn = new uint8_t[2];

        for(int i = 0; i < 2; i++)
        {
                scanf("%hhu", &mn[i]);
        }

        uint8_t m = mn[0];
        uint8_t n = mn[1];
        uint8_t parts = 0;

        if((m % 2) == 0 && (n % 2) == 0)
        {
                parts = (m*n)/2;
        } else if((m % 2) == 1 && (n % 2) == 0)
        {
                parts = ((m-1)*n)/2;
                parts += n/2;
        } else if((m % 2) == 0 && (n % 2) == 1)
        {
                parts = (m*(n-1))/2;
                parts += m/2;
        } else
        {
                parts = ((m-1)*(n-1))/2;
                parts += m/2;
                parts += n/2;
        }

        printf("%d\n", parts);

        return 0;
}
