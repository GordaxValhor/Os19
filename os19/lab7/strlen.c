#include<stdio.h>
int lensir(char word[])
{
    int len=0;
    while(word[len]!=0) 
    {
        len++;
    }
    return len;
    
}
int main ()
{
    int len;
    char  word[100];;
    scanf("%s" , word);
    printf("%d\n",lensir(word));
    return 0;
}