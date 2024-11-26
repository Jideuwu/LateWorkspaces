#include <stdio.h>
#include <cs50.h>

void print_blocks(int numBlocks);
int main(void)
{
    int num = get_int("¿Cuantos bloques quieres?:");

    print_blocks(num);

}
void print_blocks(int numBlocks)
{
    string block = "|?|";
    for(int i = 0; i < numBlocks; i ++)
    {
        printf("%s", block);
    }
    printf("\n");
}
