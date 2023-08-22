
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t id;
    pid_t id2;
    id = fork();

    if (id < 0)
    {
        printf("fork failed\n");
    }
    else if (id == 0)
    {

        id2 = fork();
        if (id2 < 0)
        {
            printf("fork failed\n");
        }

        else if (id2 == 0)
        {
            printf("I am grandchild\n");
        }
        else
        {
            sleep(5);
            printf("I am child\n");
        }
    }
    else
    {
        sleep(10);
        printf("I am parent\n");
    }
    return 0;
}
