CC=gcc -ansi -O2 -Wall -Wextra -Wpedantic
C=$(shell find . -name "*.c")
OUT=scalefind

build:
	@$(CC) -o $(OUT) $(C)

clean:
	@if [ -f $(OUT) ]; then rm $(OUT); fi

dbuild:
	@$(CC) -o $(OUT) $(C) -g

test:
	./$(OUT) aCD
