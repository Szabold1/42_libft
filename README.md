<h1 align="center">42_libft</h1>

<p align="center">
  <a href="#about">About</a> &#xa0; | &#xa0; 
  <a href="#directory-structure">Directory structure</a> &#xa0; | &#xa0;
  <a href="#usage">Usage</a> &#xa0; | &#xa0;
  <a href="#library-functions">Library functions</a> &#xa0; | &#xa0;
  <a href="https://github.com/Szabold1" target="_blank">Author</a>
</p>

<br>

## About

Libft is a project aimed at recreating some of the standard C library functions as well as additional useful functions. This library is developed in C and serves as a fundamental building block for various other projects. The library includes various functions for string manipulation, memory allocation, linked list manipulation, and more.

## Directory structure

- `📁 libft`: Contains the mandatory part of the library.
- `📁 libft_extended`: Contains an extended version of the library with additional functionality.

## Usage

To create the `libft` library, run `make` inside the `📁 libft` or `📁 libft_extended` folder.
After that, if you want to create the additional bonus part, run `make bonus`.

To create the extended version of the library (`libft_full`), run `make full` inside the `📁 libft_extended` folder.

## Library functions

Character classification
| **Function** | **Short Description**                                     |
| ------------ | --------------------------------------------------------- |
| ft_isalpha   | Checks if a character is an alphabet (A-Z or a-z)         |
| ft_isdigit   | Checks if a character is a digit (0-9)                    |
| ft_isalnum   | Checks if a character is alphanumeric (alphabet or digit) |
| ft_isascii   | Checks if a character is a valid ASCII character          |
| ft_isprint   | Checks if a character is a printable character            |
| ft_toupper   | Converts a lowercase character to uppercase               |
| ft_tolower   | Converts an uppercase character to lowercase              |


String Manipulation
| **Function** | **Short Description**                                             |
| ------------ | ----------------------------------------------------------------- |
| ft_strlen    | Calculates the length of a string                                 |
| ft_memset    | Fills a block of memory with a specified value                    |
| ft_bzero     | Sets a block of memory to zero                                    |
| ft_memcpy    | Copies a block of memory from source to destination               |
| ft_memmove   | Copies a block of memory, handling overlapping regions            |
| ft_strlcpy   | Copies a string to a destination buffer with size restriction     |
| ft_strlcat   | Appends a string to a destination buffer with size restriction    |
| ft_strchr    | Finds the first occurrence of a character in a string             |
| ft_strrchr   | Finds the last occurrence of a character in a string              |
| ft_strncmp   | Compares a specific number of characters in two strings           |
| ft_memchr    | Searches for a character in a block of memory                     |
| ft_memcmp    | Compares two blocks of memory                                     |
| ft_strnstr   | Finds the first occurrence of a substring in a string             |
| ft_substr    | Extracts a substring from a string                                |
| ft_strjoin   | Concatenates two strings                                          |
| ft_strcmp    | Compares two strings                                              |
| ft_strtrim   | Trims specified characters from the beginning and end of a string |
| ft_split     | Splits a string into an array of substrings                       |


Memory allocation
| **Function** | **Short Description**                                       |
| ------------ | ----------------------------------------------------------- |
| ft_calloc    | Allocates memory for an array and initializes it with zeros |
| ft_strdup    | Duplicates a string in memory                               |


Character output
| **Function**  | **Short Description**                                                |
| ------------- | -------------------------------------------------------------------- |
| ft_putchar_fd | Writes a character to a specified file descriptor                    |
| ft_putstr_fd  | Writes a string to a specified file descriptor                       |
| ft_putendl_fd | Writes a string followed by a newline to a specified file descriptor |
| ft_putnbr_fd  | Writes an integer to a specified file descriptor                     |


Linked list operations
| **Function**    | **Short Description**                                                                                |
| --------------- | ---------------------------------------------------------------------------------------------------- |
| ft_lstnew       | Creates a new list node                                                                              |
| ft_lstadd_front | Adds a new node to the beginning of a list                                                           |
| ft_lstsize      | Counts the number of elements in a list                                                              |
| ft_lstlast      | Returns the last element of a list                                                                   |
| ft_lstadd_back  | Adds a new node to the end of a list                                                                 |
| ft_lstdelone    | Deletes a node from a list                                                                           |
| ft_lstclear     | Deletes and frees the memory of all nodes in a list                                                  |
| ft_lstiter      | Iterates through a list and applies a function to each element                                       |
| ft_lstmap       | Iterates through a list, applies a function to each element, and creates a new list with the results |


Other
| **Function**  | **Short Description**                                  |
| ------------- | ------------------------------------------------------ |
| ft_printf     | Prints formatted output to the standard output         |
| ft_printf_fd  | Prints formatted output to a specified file descriptor |
| get_next_line | Reads a line from a file descriptor                    |

<br>

<div align="center">
  Made by <a href="https://github.com/Szabold1" target="_blank">Boldizsar Szabo</a>
</div>
