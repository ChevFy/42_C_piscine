# is similiar to variable
CC := cc
CFLAGS := -Wall -Wextra -Werror
LIBNAME := libft.a

SRC_DIRS := ./srcs
HEAD_DIRS := includes
INC := -I$(HEAD_DIRS)
# $() is dereference
# wildcard is select all
# * and % is wildcard
# * is normally wraping in wildcard function
# etc $(wildcard *.c)
# % is mostly use for replacing file
# %.c=%.o is path subsitute
# SRC := $(wildcard $(SRC_DIRS)/*.c)
# OBJ := $(SRC:%.c=%.o)
SRC := ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ := $(addprefix $(SRC_DIRS)/, $(SRC:%.c=%.o))

# all is norm
all: $(LIBNAME)

# archive .o to .a
# libft.a: $(SRC_DIRS)/$(OFILE)
# 	echo ar rcs $@ $^
# 	ar rcs $@ $^
# echo "ar rcs $@"
# $(LIBNAME):	$(addprefix $(SRC_DIRS)/, $(OBJ))
$(LIBNAME): $(OBJ)
	ar rcs $(LIBNAME) $^

# .o file if there are none then do -> 
# compile .c CC FLAGS 
# $(SRC_DIRS)/%.o check .o then go to check
# $(SRC_DIRS)/%.c
# $< is the first prerequisite
# $@ is this is the target name
$(OBJ):	$(addprefix $(SRC_DIRS)/, $(SRC))
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

# remove .o output file
# echo	"rm -f $(addprefix $(SRC_DIRS)/, $(OBJ))"
clean:
	rm -f $(OBJ)

# clean + clean library
# fclean: clean
# 	echo "rm -f *.a"
#	rm -f *.a
# echo "rm -f $(LIBNAME)"
fclean:	clean
	rm -f $(LIBNAME)

# re is just fclean + make all
# re: fclean all
re: fclean all

# forbidden file name
.PHONY: all clean fclean re
