#include <stdlib.h>
#include <stdio.h>

int main (int argc, char** argv){
    if (argc == 2)
        printf("%s : %p\n", argv[1], getenv(argv[1]));
    return 0;
}