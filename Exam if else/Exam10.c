#include <stdio.h>

int main()
{
    char ch;

    printf("\nEnter a lower cased alphabet (a - z) :");
    scanf("%c", &ch);

    if (ch < 'a' || ch > 'z')
    {
        printf("\nCharacter not a lower cased alphabet");
    }
    else
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Character is a vowel");
            break;
        case 'z':
            printf("Last Alphabet (z) was entered");
            break;
        default:
            printf("Character is a consonant");
            break;
        }
}