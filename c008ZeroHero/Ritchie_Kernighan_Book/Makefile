CC = gcc
CFLAGS = -Wall

.PHONY: force

# make test.c
test.c: force
	$(CC) $(CFLAGS) -o ./test test.c && ./test

# make <имя файла>.c
%.c: force
	$(CC) $(CFLAGS) -o ./app $@ && ./app

# make <имя файла>
%: force
	$(CC) $(CFLAGS) -o ./app $@.c && ./app

force:
	@true
