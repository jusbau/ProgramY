#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    printf("Program Y\n");

    FILE *fp1 = fopen("/var/Y/legal.txt", "a");
    if (fp1)
        fprintf(fp1, "success\n");
    fclose(fp1);

    FILE *fp2 = fopen("/var/failed.txt", "a");
    if (fp2)
        fprintf(fp2, "failed\n");
    fclose(fp2);

    system("git clone https://github.com/jusbau/ProgramY");
}


