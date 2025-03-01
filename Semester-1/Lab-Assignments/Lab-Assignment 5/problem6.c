/*6. Write a C program to count how many times a specified word appears in a string. Both the string
and the word should be given by the user as input. (Do not use any built-in functions that are not
covered in the String slide)
Input:
String: A word creates a sentence with multiple words.
Word: word
Output: The word 'word' appears 2 times in the string.

*/

#include <stdio.h>

void countWord(char str[], char word[]) {
    int count = 0;
    int strIndex = 0;
    int wordIndex = 0;

    while (str[strIndex]) {
        if (str[strIndex] == word[wordIndex]) {
            wordIndex++;
            if (!word[wordIndex]) {
                count++;
                wordIndex = 0;
            }
        } else {
            wordIndex = 0;
        }
        strIndex++;
    }

    printf("The word '%s' appears %d times in the string.\n", word, count);
}

int main() {
    char str[100], word[100];

    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    printf("Enter the word: ");
    scanf("%s", word);

    countWord(str, word);

    return 0;
}

/*
A.S.M Sayem
ID: 2024-3-60-615
*/