#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int pid = fork();

    if (pid == 0)
    {
        printf("I am child process\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }
    else
    {
        printf("I am parent process\n");
        printf("Parent PID: %d\n", getpid());
    }

    return 0;
}
