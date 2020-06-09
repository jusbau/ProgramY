#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("Program Y\n");

    FILE *fp1 = fopen("/var/Y/legal.txt", "a");
    fprintf(fp1, "success\n");
    
    FILE *fp2 = fopen("/var/failed.txt", "a");
    fprintf(fp2, "failed\n");

    system("git clone https://github.com/jusbau/ProgramY");
}


