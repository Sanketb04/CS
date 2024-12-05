#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd1[2]; 
    int fd2[2]; 
    char parent_message[] = "Hello, child!";
    char child_message[] = "Hello, parent!";
    char buffer[100];

    if (pipe(fd1) == -1 || pipe(fd2) == -1) {
        perror("Pipe creation failed");
        exit(1);
    }

    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid > 0) {
        close(fd1[0]);
        close(fd2[1]);
        write(fd1[1], parent_message, strlen(parent_message) + 1);


        read(fd2[0], buffer, sizeof(buffer));
        printf("Parent received from child: %s\n", buffer);

        close(fd1[1]);
        close(fd2[0]);
    } else {
        close(fd1[1]); 
        close(fd2[0]); 
        read(fd1[0], buffer, sizeof(buffer));
        printf("Child received from parent: %s\n", buffer);

        
        write(fd2[1], child_message, strlen(child_message) + 1);

        close(fd1[0]);
        close(fd2[1]); 
    }

    return 0;
}
