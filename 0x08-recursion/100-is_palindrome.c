#include "main.h"

/**
 * str_len - Calculate the length of a string recursively
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome_recursive - Recursive helper function for palindrome check
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: Empty string or single character is a palindrome */
	if (start >= end)
		return (1);

	/* If the characters at the start and end positions are the same */
	if (s[start] == s[end])
	{
		/* Recur for the substring between start and end */
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
	else
	{
	/* If characters are different, it's not a palindrome */
	return (0);
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = str_len(s);

	/* Call the recursive function with start and end indices */
	return (is_palindrome_recursive(s, 0, length - 1));
}
