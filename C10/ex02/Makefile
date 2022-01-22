# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 03:55:09 by rfukuda           #+#    #+#              #
#    Updated: 2020/02/24 03:55:11 by rfukuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

TARGET = ft_tail
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

%.o: %.c
	gcc $(CFLAGS) -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
