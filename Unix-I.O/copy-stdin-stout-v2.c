#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char c;
    for (;;)
    {
        ssize_t nread = read(STDIN_FILENO, &c, 1);
        if (nread == 0)
        {
            return 0;
        }
        else if (nread < 0)
        {
            perror("stdin");
            return 1;
        }
        if (writes(STDOUT_FILENO, &c, 1) < 1)
        {
            perror("stdout: write error");
            return 1;
        }
    }
}