# ========================
# ft_printf Makefile
# ========================

NAME        := libftprintf.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror
AR          := ar rcs
RM          := rm -f

SRC_DIR     := src
INC_DIR     := includes
LIBFT_DIR   := libft

SRC         := ft_printf.c \
               print_char_str.c \
               print_number.c \
               print_hex.c \
               print_ptr.c

SRCS        := $(addprefix $(SRC_DIR)/,$(SRC))
OBJS        := $(SRCS:.c=.o)
INCLUDES    := -I$(INC_DIR) -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): libft_build $(OBJS)
	$(AR) $(NAME) $(OBJS)

libft_build:
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean || true

re: fclean all

test: all
	$(CC) $(CFLAGS) tests/main.c -I$(INC_DIR) -L. -lftprintf -L$(LIBFT_DIR) -lft -o test_printf

.PHONY: all clean fclean re test libft_build
