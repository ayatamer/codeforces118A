#include <stdio.h>
#include <stdlib.h>

int main()
{
char word[100];
char ans[200];
int i=0, j=0;
scanf("%s", &word);

for(i=0;i<100;i++)
{
    if(word[i]=='\0')
        break;
    if(word[i]<91 && word[i]>64)
        word[i]=word[i]+32;
}
for(i=0;i<100;i++)
{
    if(word[i]=='\0')
    {
        ans[j]='\0';
        break;}
    if((word[i]!= 'a')&&(word[i]!= 'e')&&(word[i]!= 'i')&&(word[i]!= 'o')&&(word[i]!= 'u')&&(word[i]!= 'y'))
    {
        ans[j]='.';
        j++;
        ans[j]=word[i];
        j++;
    }
}
printf("%s", ans);
return 0;
}
