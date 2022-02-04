#include <stdio.h>
#include <cstring>  
#include <string.h>


// token  lexem

/*
push 10
pop rax
push 14
push rax 
div
hlt 

[push, cmd] [10, num] [pop, cmd] [rax, reg] [push, cmd] [14, num] [push, cmd] [rax, reg] [div, cmd] [hlt, cmd]
*/

struct token
{
    char * str; // "push"
    int type;  // CMD
    int val;  // PUSH
};

int main (int argc, char* argv[])
{
    if (argc == 1)
    {
        printf ("not enough parameters\n");
        return 0;
    }

    FILE * prog = fopen (argv[1], "r");

    char  text [100] = {};

    fread (text, sizeof(char), 50, prog);


    token tokenized_prog [30] = {};

    char temp [10] = {};

    tokenized_prog[0].str = strtok (text, " \t");

    for (int i = 1; i < 5 ; i ++) 
    {
        tokenized_prog[i].str = strtok (NULL, " \t");
        //printf ("%s\n", text);
    }
    
    for (int i = 0; i < 10; i++) printf ("%s\n", tokenized_prog[i].str);


    return 0;
}
