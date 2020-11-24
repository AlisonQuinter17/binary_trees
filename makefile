CFLAGS=-g -Wall -Wextra -Werror -pedantic
CC=gcc

%:
	$(CC) $(CFLAGS) $(SRC)
	@betty-style $(SRC)
	@betty-doc $(SRC) 1> /dev/null

all:
	make $(shell ls -v *.c | cut -d- -f1)
	@betty-style *.h
	@betty-doc  *.h 1> /dev/null

betty:
	@betty-style *.c *.h
	@betty-doc  *.c *.h 1> /dev/null

0: SRC=tests/0-main.c 0-binary_tree_node.c tests/binary_tree_print.c
%: SRC=tests/$*-main.c $*-*.c 0-*.c tests/binary_tree_print.c
3 4 5 9 10 11 12 13 15 16: SRC=tests/$*-main.c $*-*.c 0-*.c 2-*.c tests/binary_tree_print.c
14: SRC=tests/$*-main.c $*-*.c 0-*.c 1-*.c 2-*.c tests/binary_tree_print.c
101 102: SRC=tests/$*-main.c $*-*.c 0-*.c 1-*.c 3-*.c tests/binary_tree_print.c
113 114: SRC=tests/$*-main.c $*-*.c 0-*.c 3-*.c 112-*.c 111-*.c tests/binary_tree_print.c
123: SRC=tests/$*-main.c $*-*.c 0-*.c 3-*.c 103-*.c 104-*.c 122-*.c 121-*.c tests/binary_tree_print.c
133 134: SRC=tests/$*-main.c $*-*.c 132-*.c 131-*.c 3-*.c tests/binary_tree_print.c
