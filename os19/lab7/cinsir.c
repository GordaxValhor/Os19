#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void cinsir()
{
    char  word[100];
    char  word2[50];
    char word3[50];
    scanf("%s" , word);
    scanf("%s" , word2);
    scanf("%s" , word3);
    printf("Primu cuvant: %s\nAl doilea cuvant: %s\nAl treilea cuvant: %s\n", word,word2,word3);
}
int main ()
{
    cinsir();
    return 0;
}