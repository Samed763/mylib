CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memset.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_memcpy.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c

OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
