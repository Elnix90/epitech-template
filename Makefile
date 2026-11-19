##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## Makefile
##

NAME = projectName

MAIN = src/main.c

SOURCE =

LIB = my

SRC = $(MAIN) $(SOURCE)

TESTS = 

OBJ = $(SRC:.c=.o)

VGCORE = vgcore.*
GCDO = *.gcno
GCDA = *.gcda

CC = epiclang
CFLAGS = -Wall -Wextra -I src/include -g
LDLIBS = -lm

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib
	$(CC) $(CFLAGS) -I src/include -o $(NAME) $(OBJ) -Llib -l$(LIB) $(LDLIBS)

clean:
	rm -f $(OBJ) $(VGCORE) unit_tests $(GCDO) $(GCDA)

fclean: clean
	rm -f $(NAME)
	make -C lib/ fclean

unit_tests: $(SRC) $(TESTS)
	$(CC) $(CFLAGS) -I src/include -o unit_tests $(SOURCE) $(TESTS) -Llib -l$(LIB) --coverage -lcriterion

tests_run: unit_tests
	./unit_tests
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/
	gcovr --gcov-executable "llvm-cov gcov" --exclude tests/ --txt-metric branch

re: fclean all

# Re-Builds only the source code, not the lib as its too long for me and I'm bored
simple: clean all

.PHONY: all clean fclean re tests_run simple
