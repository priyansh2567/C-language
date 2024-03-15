// #include <stdio.h>

// int main() {
//     char string[100];
//     fgets(string, 100, stdin);

//     for (int i = 0; string[i] != '\0'; i++) {
//         if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
//             string[i] = string[i] + 38; // Modify the ASCII value of the vowel in the string itself
//         }
//     }

// puts(string);

//     return 0;
// } faild attemt to make lower case vowels int  upper case vowel 


#include <stdio.h>

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++) {
         { // Check if the character is a lowercase letter
            switch (string[i]) {
                case 'a':
                    string[i] = 'A'; // Convert 'a' to 'A'
                    break;
                case 'e':
                    string[i] = 'E'; // Convert 'e' to 'E'
                    break;
                case 'i':
                    string[i] = 'I'; // Convert 'i' to 'I'
                    break;
                case 'o':
                    string[i] = 'O'; // Convert 'o' to 'O'
                    break;
                case 'u':
                    string[i] = 'U'; // Convert 'u' to 'U'
                    break;
                default:
                    break;
            }
        
    }

    printf("String with lowercase vowels converted to uppercase: %s", string);

    return 0;
}


