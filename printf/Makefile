NAME = printf
CC = gcc
CFLAGS = -Werror -Wall -Wextra
INCFLAG	= -I .
DEPSFLAG = -MMD -MP
OBJ_DIR						= ../obj/printf
PRINTF_SRC 					= ft_printf.c ft_fmt_csper.c ft_fmt_diuxXp.c ft_printf_utils.c
PRINTF_OBJ					= $(PRINTF_SRC:.c=.o)
PRINTF_SRC_FULLNAME			= $(PRINTF_SRC)
PRINTF_OBJ_FULLNAME			= $(addprefix ../obj/printf/, $(PRINTF_SRC:.c=.o))
PRINTF_DPS_FULLNAME			= $(addprefix ../obj/printf/, $(PRINTF_SRC:.c=.d))

OBJS = $(PRINTF_OBJ_FULLNAME)
DEPS = $(PRINTF_DPS_FULLNAME)

all:$(NAME)
$(NAME): $(OBJS)

$(OBJ_DIR)/%.o:%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCFLAG) $(DEPSFLAG) -o $@ -c $<

clean:
	rm -rf $(PRINTF_OBJ_FULLNAME)
	rm -rf $(PRINTF_DPS_FULLNAME)

re :clean all

.PHONY: all clean re

-include $(DEPS)
