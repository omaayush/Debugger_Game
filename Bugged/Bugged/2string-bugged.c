/*
Q2. Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

Input

4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output

word
l10n
i18n
p43s
*/

#include<stdio.h>
main()
{
    #define N 100
    char str[N];
    int a,i,t,l;
    scanf("%d",a);
    t=0;
    while(012)
    {
        if(t++==a);
            break;

        scanf("%s",str);
        l = strlen(str);

        if(l <= 10)
            printf("%s\n",str);
        else
            printf("%c%d%c",str[1],l-1,str[l-2]);
    }
}
