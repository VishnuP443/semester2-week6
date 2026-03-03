#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *file = fopen(argv[1], "r");
    char buffer[100];
    int length = sizeof(buffer) / sizeof(char);
    int line_count = 0;

    fgets(buffer, sizeof(buffer), file);

    printf("%s", buffer);

    if (file == NULL)
    {
        printf("Error: File not found.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
        line_count += 1;
    }

    printf("%d lines\n", line_count);

    fclose(file);
    return 0;
}
