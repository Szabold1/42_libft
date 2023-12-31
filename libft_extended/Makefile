NAME = libft.a
SRC_DIR = ./src
SRC_PRINTF_DIR = $(SRC_DIR)/ft_printf
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
OBJ = $(SRC:%.c=$(SRC_DIR)/%.o)
SRC_BONUS = ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c
OBJ_BONUS = $(SRC_BONUS:%.c=$(SRC_DIR)/%.o)
SRC_PRINTF = ft_printf_utils.c \
			ft_printf_utils2.c \
			ft_printf.c
OBJ_PRINTF = $(SRC_PRINTF:%.c=$(SRC_PRINTF_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) $(OBJ_PRINTF)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: all $(OBJ_BONUS)
	$(AR) $(NAME) $(OBJ_BONUS)

every: bonus $(OBJ_PRINTF)
	$(AR) $(NAME) $(OBJ_PRINTF)
	
.PHONY: all clean fclean re bonus

# NAME = ft_printf.a
# SRC_DIR = ./src/ft_printf
# SRC = ft_printf.c \
# 		ft_printf_utils.c \
# 		ft_printf_utils2.c
# OBJS = $(SRC:%.c=$(SRC_DIR)/%.o)
# CC = cc
# AR = ar rcs
# RM = rm -rf
# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(AR) $(NAME) $(OBJS)

# $(SRC_DIR)/%.o: $(SRC_DIR)/%.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re