#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv)
{
        uint8_t x;
        scanf("%hhu", &x);

        if(x < 3)
        {
                printf("NO\n");
        } else if(x % 2 == 0)
        {
                printf("YES\n");
        } else
        {
                printf("NO\n");
        }

        return 0;
}
