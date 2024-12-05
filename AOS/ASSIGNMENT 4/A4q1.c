#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_KEY 12345
#define SHM_SIZE 1024

int main() {
    int shmid;
    char *shared_memory;
    key_t key = SHM_KEY;

    
    if ((shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666)) < 0) {
        perror("shmget");
        exit(1);
    }

    
    if ((shared_memory = shmat(shmid, NULL, 0)) == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    
    if (fork() > 0) {
        strcpy(shared_memory, "Hello from the parent process!");
    }
    
    else {
        sleep(2); 
        printf("Child Process: %s\n", shared_memory);
    }

 
    shmdt(shared_memory);
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}
