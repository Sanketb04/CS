#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include <dirent.h>
#include <sys/stat.h>

int main() {
    struct dirent *entry;
    DIR *directory = opendir(".");
    int fileCount = 0;

    if (directory == NULL) {
        printf("Error opening directory");
        return 1;
    }

    printf("Name\t\t\tSize (bytes)\n");

    while ((entry = readdir(directory)) != NULL) {
        struct stat fileStat;

        if (stat(entry->d_name, &fileStat) == 0) {
            if (S_ISREG(fileStat.st_mode)) {
                printf("%s\t\t\t%ld\n", entry->d_name, (long)fileStat.st_size);
                fileCount++;
            }
        }
    }

    printf("Total files in the directory: %d\n", fileCount);
    closedir(directory);

    return 0;
}

