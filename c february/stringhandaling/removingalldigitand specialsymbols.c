#include <stdio.h>
#include <string.h>

int main() {
    char str[150]; // Declare a character array to store the string
    int i, j; // Declare variables for iteration

    printf("\n\nRemove characters in String Except Alphabets :\n"); // Display information about the task
    printf("--------------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    for (i = 0; str[i] != '\0'; ++i) {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' || str[i] == '\0'))){
            // Loop to remove non-alphabetic characters from the string
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1]; // Shift characters to the left to remove non-alphabetic characters
            }
            str[j] = '\0'; // Set the end of the string after removal
        }
    }

    printf("After removing the Output String : %s\n\n", str); // Display the modified string after removal
	
	return 0; // Return 0 to indicate successful execution of the program
}
