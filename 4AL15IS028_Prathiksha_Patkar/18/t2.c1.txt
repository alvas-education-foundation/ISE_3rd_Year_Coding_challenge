c PRNTING TOCKENS
#include <stdio.h>
#include <string.h>
#include "../symbol-table.h"
#include "../varnam.h"

int main(int argc, char **argv)
{
    int rc = 0;
    varnam *handle;
    char *msg;
    int tokenize_using = 0;
    varray *tokens = varray_init();

    if (argc != 4) {
        printf ("Usage : %s symbols-file-path text-to-tokenize tokenization-type(pattern|value)\n", argv[0]);
        return 1;
    }
