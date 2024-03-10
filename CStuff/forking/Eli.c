#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define PIPE_SIZE sizeof(int)

int main()
{

    int fd[2];
    pipe(fd);

    pid_t cPid1 = fork();

    if (cPid1)
    {

        pid_t cPid2 = fork();
        close(fd[0]);
        close(fd[1]);
        if (cPid2)
        {
            wait(NULL);
        }
        else
        { // Child 2
            int buffer;
            sleep(1);
            srand(time(NULL));
            int randNum = rand() % 11;
            printf("Child 2 (%d): Random number is %d\n", getpid(), randNum);
            close(fd[1]);
            read(fd[0], &buffer, PIPE_SIZE);
            printf("Child 2 (%d): Reading: %d\n", getpid(), buffer);
            printf("Child 2 (%d): Random number x2 is %d\n", getpid(), buffer * 2);
            close(fd[0]);
            write(fd[1], &randNum, PIPE_SIZE);
            printf("Child 2 (%d): Writing: %d\n", getpid(), randNum);
        }
    }
    else
    { // Child 1
        int buffer;
        srand(time(NULL));
        int randNum = rand() % 11;
        printf("Child 1 (%d): Random numer is %d\n", getpid(), randNum);
        close(fd[0]);
        write(fd[1], &randNum, PIPE_SIZE);
        printf("Child 1 (%d): Writing: %d\n", getpid(), randNum);
        close(fd[1]);
        read(fd[0], &buffer, PIPE_SIZE);
        printf("Child 1 (%d): Reading: %d\n", getpid(), buffer);
        printf("Child 1 (%d): Random number x2 is %d\n", getpid(), buffer * 2);
    }
}