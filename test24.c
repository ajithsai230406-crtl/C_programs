//: :To enter into the house enter the correct name: :
#include <stdio.h>
#include <string.h>

int main() {
    int i = 0, j = 0;
    char strlist[6][20] = {"Aji", "Ami", "Aksh", "Amu", "Aish", "Babbu"};
    char str[20];
    int found = 0;

    printf("Please enter your name : ");
    scanf("%s", str);

    while (i < 6 && !found)
    {
        if (strcmp(str, strlist[i]) == 0)
        {
            found = 1;
        } else
        {
            i++;
        }
    }

    if (found)
    {
        printf("\n\nWelcome! %s : : You can enter the house.\n", str);
    } else
    {
        printf("\n\nSorry, %s, you cannot enter the house.\n", str);
    }

    return 0;
}
