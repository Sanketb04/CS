#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void childSignalHandler(int signum) {
    if (signum == SIGHUP) {
        printf("Child: Received SIGHUP signal from parent\n");
    } else if (signum == SIGINT) {
        printf("Child: Received SIGINT signal from parent\n");
    } else if (signum == SIGQUIT) {
        printf("child: My DADDY has killed me !!!\n");
        exit(0);
    }
}

int main() {
    pid_t child_pid;

    if ((child_pid = fork()) == 0) {
    
        signal(SIGHUP, childSignalHandler);
        signal(SIGINT, childSignalHandler);
        signal(SIGQUIT, childSignalHandler);

        while (1) {
         
            sleep(1);
        }
    } else if (child_pid > 0) {
       
        int count = 0;

        while (count < 10) {
            sleep(3);
            if (count < 9) {
                kill(child_pid, SIGHUP); 
            } else {
                kill(child_pid, SIGQUIT); 
            }
            count++;
        }
    } else {
        perror("fork");
        exit(1);
    }

    return 0;
}
