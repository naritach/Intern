// Narita Chadha Internship Test
// Task 01

/*
aaagykkok -> agyok
aaa -> a
abc -> abc
*** n <=100 *** */

/* psuedocode
String input
finding the match and remove then print
(idea: making 2 variables, one for original
string and the other for removing and print)

using nested loop to find the matching

dont forget '\0' duayyyy */

#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    char removeDuplicate[100];
    int j = 0;
    printf("Input String: ");
    scanf("%s", input);
    int stringLength = strlen(input);
    for (int i = 0; i < stringLength; i++) {
        if (j > 0 && input[i] == removeDuplicate[j - 1]) {
            j--;
        } else {
            removeDuplicate[j++] = input[i];
        }
    }
    removeDuplicate[j] = '\0';
    printf("Output: %s\n", removeDuplicate);
    return 0;
}
