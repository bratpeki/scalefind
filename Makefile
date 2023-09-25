CC=gcc -std=c99 -O2 -Wall -Wextra -Wpedantic
C=$(shell find . -name "*.c")
OUT=main.out # TODO: Change "scale-finder" later
LNK= # TODO: For the graphical component -lSDL2

build:
	@$(CC) -o $(OUT) $(C) $(LNK)

clean:
	@if [ -f $(OUT) ]; then rm $(OUT); fi

dbuild:
	@$(CC) -o $(OUT) $(C) $(LNK) -g

exec:
	@./$(OUT)
