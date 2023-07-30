//Write a program to check whether a string is a palindrome or not.
#include<stdio.h>
#include<string.h>
void isPalindrome(char str[]);
int main()
{
    char s1[100];
    printf("Enter the string: ");
    scanf("%s", s1);
    isPalindrome(s1);
    return 0;
}
// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
// Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
// Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome", str);
}
