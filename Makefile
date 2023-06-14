NAME = libft.a
OBJ_DIR = objs
SRC_DIR = srcs
SOURCES = \
    srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c \
    srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memcpy.c srcs/ft_memmove.c \
    srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c \
    srcs/ft_strrchr.c srcs/ft_strncmp.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strnstr.c srcs/ft_atoi.c \
    srcs/ft_calloc.c srcs/ft_strdup.c srcs/ft_substr.c srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_split.c \
    srcs/ft_itoa.c srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c srcs/ft_putstr_fd.c \
    srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c
BSOURCES = \
    srcs/ft_lstnew.c srcs/ft_lstadd_front.c srcs/ft_lstsize.c srcs/ft_lstlast.c srcs/ft_lstadd_back.c srcs/ft_lstdelone.c srcs/ft_lstclear.c srcs/ft_lstiter.c srcs/ft_lstmap.c
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
BOBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(BSOURCES))

RM = rm -rf
MK	= mkdir -p
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror -Iincludes
HEADER = includes/libft.h

all: mkdir $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus: $(BOBJECTS)
	$(AR) $(NAME) $(BOBJECTS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
mkdir:
	@$(MK) $(OBJ_DIR)	

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re mkdir