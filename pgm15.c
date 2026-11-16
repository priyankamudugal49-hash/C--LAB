#include<stdio.h>
int main(void)
{
    char str[100],rev[100];
    int lenght=0,i,j;
    printf("Enter a word:");
    scanf("%99s",str);
    while(str[lenght]!='\0')
    lenght++;
    j=0;
    for(i=lenght-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("Lenght=%d\n",lenght);
    printf("Reverse=%s\n",rev);
    return 0;
}
