// #include "libft.h"

// int ft_isspace(char c)
// {
//     return (c == ' ' || c == '\n' || c == '\t');
// }

// int count_words(char *str)
// {
//     int count = 0;
//     int in_word = 0; // Flag to track if currently in a word

//     while (*str)
//     {
//         if (!ft_isspace(*str))
//         {
//             if (!in_word)
//             {
//                 count++;
//                 in_word = 1;
//             }
//         }
//         else
//         {
//             in_word = 0;
//         }
//         str++;
//     }
//     return count;
// }

// char *malloc_word(char *str)
// {
//     int len = 0;
//     while (*str && !ft_isspace(*str))
//     {
//         len++;
//         str++;
//     }

//     char *word = (char *)malloc(sizeof(char) * (len + 1));
//     if (word == NULL)
//         return NULL;

//     // Reset str pointer to the start of the word
//     str -= len;
//     int i = 0;
//     while (*str && !ft_isspace(*str))
//     {
//         word[i++] = *str++;
//     }
//     word[i] = '\0';
//     return word;
// }

// char **ft_split(char *str, char c)
// {
//     // Allocate memory for array of pointers
//     int word_count = count_words(str);
//     char **arr = (char **)malloc(sizeof(char *) * (word_count + 1));
//     if (arr == NULL)
//         return NULL;

//     int i = 0;
//     while (*str)
//     {
//         // Skip leading whitespace
//         while (*str && ft_isspace(*str))
//             str++;

//         // Allocate memory for each word
//         if (*str && !ft_isspace(*str))
//         {
//             arr[i] = malloc_word(str);
//             if (arr[i] == NULL)
//             {
//                 // Free previously allocated memory and return NULL
//                 while (i >= 0)
//                     free(arr[i--]);
//                 free(arr);
//                 return NULL;
//             }
//             i++;

//             // Move str pointer to the end of the current word
//             while (*str && !ft_isspace(*str))
//                 str++;
//         }
//     }
//     // Set the last element of arr to NULL as per the requirement
//     arr[i] = NULL;
//     return arr;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Function prototypes
// int ft_isspace(char c);
// int count_words(char *str);
// char *malloc_word(char *str);
// char **ft_split(char *str, char c);

// int main() {
//     char *phrase = "   Hello,   Flavio\t Wuensche!  ";
//     char **arr = ft_split(phrase, ' ');

//     if (arr != NULL) {
//         // Print the array of strings
//         for (int i = 0; arr[i] != NULL; i++) {
//             printf("%s\n", arr[i]);
//         }

//         // Free memory allocated for the array of strings
//         for (int i = 0; arr[i] != NULL; i++) {
//             free(arr[i]);
//         }
//         free(arr);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }

 

