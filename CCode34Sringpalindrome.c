#include <stdio.h>
#include <string.h> // Required for strlen()

// Function to check if a string is a palindrome
// Returns 1 if the string is a palindrome, 0 otherwise
int isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1; // Get the index of the last character

    // Loop until the left pointer crosses or meets the right pointer
    while (left < right) {
        // If characters at current pointers do not match, it's not a palindrome
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        // Move pointers towards the center
        left++;
        right--;
    }
    // If the loop completes, all characters matched, so it's a palindrome
    return 1; // Is a palindrome
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";
    char str3[] = "racecar";

    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    if (isPalindrome(str3)) {
        printf("\"%s\" is a palindrome.\n", str3);
    } else {
        printf("\"%s\" is not a palindrome.\n", str3);
    }

    return 0;
}