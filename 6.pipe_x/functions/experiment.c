#include "exec.h"

int main(int ac, char **av, char **envp)
{
    while (*envp)
        printf("%s\n", *envp++);
    return (0);
}