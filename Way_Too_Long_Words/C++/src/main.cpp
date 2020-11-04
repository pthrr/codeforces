#include <cstdio>
#include <cstdint>
#include <cstring>

int main(int argc, char** argv)
{
        uint8_t n;
        scanf("%hhu", &n);

        char* words[n];

        for(int i = 0; i < n; i++)
        {
                words[i] = new char[256];
                scanf("%s", words[i]);
        }

        for(int i = 0; i < n; i++)
        {
                uint8_t len = strlen(words[i]);

                if(len > 10)
                {
                        char first_char[2];
                        char last_char[2];
                        char char_count[4];
                        sprintf(first_char, "%c", words[i][0]);
                        sprintf(last_char, "%c", words[i][len-1]);
                        sprintf(char_count, "%d", (len-2));
                        char buffer[5];
                        strcpy(buffer, first_char);
                        strcat(buffer, char_count);
                        strcat(buffer, last_char);
                        printf("%s\n", buffer);
                } else
                {
                        printf("%s\n", words[i]);
                }
        }

        return 0;
}
