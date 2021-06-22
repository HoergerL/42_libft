NAME = LIBFT.a
FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c \
 ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
 ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
 ft_strtrim.c
all: $(NAME)
$(NAME):
	gcc -Wall -Werror -Wextra $(FILES) -c
	ar rc $(NAME) *.o
clean:
	rm -f *.o
fclean:
	rm -f $(NAME)

re: fclean all
