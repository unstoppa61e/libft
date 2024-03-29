# libft

The goal of this project was to start my own C library that I can use in later projects and continue to build on as I move through the 42 program.
The use of global variables and the "libtool" command was prohibited in this project.

----
### Standard library functions
These functions work as described in the man page.

It was prohibited to to use any external functions except for "malloc" which was only allowed for strdup and calloc.
|               |                |              |             |             |
|---------------|----------------|--------------|-------------|-------------|
|ft_atoi        |ft_isacii       |ft_memcmp     |ft_strdup    |ft_strnstr   |
|ft_bzero       |ft_isdigit      |ft_memcpy     |ft_strlcat   |ft_strrchr   |
|ft_calloc      |ft_isprint      |ft_memmove    |ft_strlcpy   |ft_tolower   |
|ft_isalnum     |ft_memccpy      |ft_memset     |ft_strlen    |ft_toupper   |
|ft_isalpha     |ft_memchr       |ft_strchr     |ft_strncmp   |             |

### Other functions
Using malloc, free, and write as needed was permitted.
|               |                |              |             |             |
|---------------|----------------|--------------|-------------|-------------|
|ft_itoa        |ft_putendl_fd   |ft_putstr_fd  |ft_strjoin   |ft_strtrim   |
|ft_putchar_fd  |ft_putnbr_fd    |ft_split      |ft_strmapi   |ft_substr    |
|get_next_line  |                |              |             |             |

### Linked list functions
Using malloc, free, and write as needed was permitted. Various original and required lst functions.
|               |                |              |             |             |
|---------------|----------------|--------------|-------------|-------------|
|ft_lstadd_back |ft_lstadd_front |ft_lstiter    |ft_lstdelone |ft_lstsize   |
|ft_lstclear    |ft_lstmap       |ft_listlast   |ft_lstnew    |ft_lstprint  |

### Original functions
Using only malloc, free, write, and exit per school rules.

These are a few funcitons I have added to assist with varioius functions needed for the school's curriculum
|               |                |              |             |             |
|---------------|----------------|--------------|-------------|-------------|
|ft_atoll       |ft_atoull       |ft_count_strs |ft_ctoa      |ft_free_split|
|ft_intlen      |ft_putnbr       |ft_isspace    |ft_itoc      |ft_max_int   |
|ft_max_size_t  |ft_min_int      |ft_min_size_t |ft_putchar   |ft_putchar_err|
|ft_putnbr      |ft_putnbr_err   |ft_putstr     |ft_str_is_numeric|ft_strcmp|
|ft_strcpy      |ft_strdup_free  |ft_strequal   |ft_strjoin_free|ft_strjoin_free_both|
|ft_strncpy     |ft_strndup      |ft_strnequal  |ft_strnjoin  |ft_strnjoin_free|
|ft_strnlen     |ft_strstr       |ft_substr_free|ft_utoa      |ft_xtoa      |
|put_color_fd   |safe_free       |              |             |             |

## Installation
```bash
git clone https://github.com/unstoppa61e/libft.git
```
## Usage
```bash
make - compiles library libft.a
make clean - removes all .o files
make fclean - removes all .o files and library
make re - removes all .o files and library before recompiling library
```
