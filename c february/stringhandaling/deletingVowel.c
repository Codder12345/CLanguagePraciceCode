#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void solve()
{
    // Initializing variable.
    char c[100];
    int i, j, length = 0;


    // Accepting input.
    printf("Enter a string : ");
    printf("\n");
    // gets(c);
    scanf("%s", c);

    length = strlen(c);

    for (i = 0; i < length; i++) {
        // Checking vowels.
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U' ||
         c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' ) {
            // Deleting vowels.
            for (j = i; j < length; j++) {
                // Storing string without vowels.
                c[j] = c[j + 1];
            }
            i--;
            length--;
        }
        c[length + 1] = '\0';
    }
   printf("thre final string will be after deletion  : %s", c);
 
}
// main function starts.
int main()
{
    solve();
    return 0;
}
