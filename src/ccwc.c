#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_not_null (FILE* file) {
    if (file == NULL) {
        printf("Not able to open the file.");
        return -1;
    }
    return 0;
}


int count_lines(char* filename) {
    FILE *file;
    file = fopen(filename, "r");

    if (is_not_null(file) == 0) {
        char line[100];
        int count = 0;
        while(fgets(line, 100, file)) {
            count++;
        }

        fclose(file); 
        return count;
    }
    return -1;
}


long int count_bytes(char* filename) {
    FILE *file;
    file = fopen(filename, "r");

    if (is_not_null(file) == 0) {
        fseek(file, 0L, SEEK_END);
        long int count = ftell(file);
        fclose(file);
        return count;
    }
    return -1;
}

int count_words(char* filename) {
    FILE *file;
    file = fopen(filename, "r");

    if (is_not_null(file) == 0) {
        char word[100];
        int count = 0; 

        while (fscanf(file, "%s", word) != EOF)
            count++;

        fclose(file);
        return count;
    }
    return -1;
}




int main (int argc, char * argv[] ) {

    if (argc == 2) {
        printf("  %d %d %ld %s\n", count_lines(argv[1]), count_words(argv[1]), count_bytes(argv[1]), argv[1]);
        return 0;
    }

    else if (argc == 3) {
        if (strcmp(argv[1], "-c") == 0) {
            printf("%ld\n", count_bytes(argv[2]));
        } else if (strcmp(argv[1], "-l") == 0) {
            printf("%d\n", count_lines(argv[2]));
        } else if (strcmp(argv[1], "-w") == 0) {
            printf("%d\n", count_words(argv[2]));
        }
        return 0;
    }

    else {
        printf("wrong arguments given...");
        return -1;
    }
}