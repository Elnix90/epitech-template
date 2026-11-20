##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## Makefile
##

NAME = libmy.a

SRC = src/my_compute_power_rec.c \
	src/my_compute_square_root.c \
	src/my_getnbr.c \
	src/my_isneg.c \
	src/my_is_prime.c \
	src/my_is_prime_sup.c \
	src/my_putchar.c \
	src/my_put_nbr.c \
	src/my_putstr.c \
	src/my_revstr.c \
	src/my_showstr.c \
	src/my_sort_int_array.c \
	src/my_int_to_str.c \
	src/my_strcat.c \
	src/my_strcpy.c \
	src/my_strlen.c \
	src/my_strncat.c \
	src/my_strcmp.c \
	src/my_strncmp.c \
	src/my_strncpy.c \
	src/my_strstr.c \
	src/my_swap.c \
	src/case/lower.c \
	src/case/my_isalnum.c \
	src/case/my_isalpha.c \
	src/case/my_strcapitalize.c \
	src/case/my_str_isalpha.c \
	src/case/my_str_islower.c \
	src/case/my_str_isnum.c \
	src/case/my_str_isprintable.c \
	src/case/my_str_isupper.c \
	src/case/my_strlowcase.c \
	src/case/my_strupcase.c \
	src/case/upper.c \
	src/my_strchr.c \
	src/my_strndup.c

CC = epiclang
CFLAGS = -Wall -Wextra -W -I src/include

TESTS = tests/my_getnbr_test.c \
	tests/my_sort_int_array_test.c \
	tests/my_strndup_test.c

UNIT_TESTS = unit_tests

OBJ = $(SRC:.c=.o)

VGCORE = vgcore.*
GCDO = *.gcno
GCDA = *.gcda

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(VGCORE) $(UNIT_TESTS) $(GCDO) $(GCDA)

fclean: clean
	rm -f $(NAME)

unit_tests: $(NAME) $(TESTS)
	$(CC) $(CFLAGS) -I src/include -o $(UNIT_TESTS) $(TESTS) $(NAME) --coverage -lcriterion

tests_run: unit_tests
	./$(UNIT_TESTS)
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/ --txt-metric branch

re: fclean all

# Re-Builds only the source code, not the lib as its too long for me and I'm bored
simple: clean all

.PHONY: all clean fclean re tests_run
