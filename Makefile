# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bachai <bachai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 16:13:50 by bachai            #+#    #+#              #
#    Updated: 2024/07/01 12:14:04 by bachai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft

files = ft_strlen \
		ft_memmove \
		ft_memcpy \
		ft_strlcpy \
		ft_strlcat \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_memset \
		ft_bzero \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd 

Compiler = gcc

CmpFlags = -Wall -Wextra -Werror

OUTN = $(Library).a

CFILES = $(files:%=%.c)

OFILES = $(files:%=%.o)

NAME = $(OUTN)

$(NAME): $(OFILES)
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar rcs $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
