# Libft

![C](https://img.shields.io/badge/language-C-blue)
![42](https://img.shields.io/badge/school-42-black)
![Status](https://img.shields.io/badge/status-completed-success)
![Functions](https://img.shields.io/badge/functions-43%2F43-success)

My own C library, written from scratch as part of the 42 Common Core.
First project of the curriculum, and the base of all the next ones.

## Goal

Rewrite the libc functions to understand what they really do, then add more utilities and a small linked list API. No `printf`, no `string.h`

## Content

**Part 1 — libc functions (23)**
`isalpha` `isdigit` `isalnum` `isascii` `isprint` `toupper` `tolower`
`strlen` `strchr` `strrchr` `strncmp` `strlcpy` `strlcat` `strnstr` `atoi`
`memset` `bzero` `memcpy` `memmove` `memchr` `memcmp` `calloc` `strdup`

**Part 2 — additional functions (11)**
`substr` `strjoin` `strtrim` `split` `itoa` `strmapi` `striteri`
`putchar_fd` `putstr_fd` `putendl_fd` `putnbr_fd`

**Part 3 — linked lists (9)**
`lstnew` `lstadd_front` `lstadd_back` `lstsize` `lstlast`
`lstdelone` `lstclear` `lstiter` `lstmap`

## Usage

```bash
git clone https://github.com/Kamisztal/Libft.git
cd Libft
make
```

Then in your code:

```c
#include "libft.h"
```

```bash
cc main.c libft.a -o program
```

## Tests

Every function was tested with my own test programs, with `-fsanitize=address`
and `valgrind` (0 leaks), and passes norminette.

---

*Made by [pmisztal](https://github.com/Kamisztal).*
