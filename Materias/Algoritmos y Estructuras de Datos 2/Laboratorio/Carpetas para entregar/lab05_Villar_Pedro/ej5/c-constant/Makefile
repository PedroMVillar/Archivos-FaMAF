TARGET = readqueue
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -g
SOURCES = main.c queue.c queue_helpers.c
OBJECTS = $(SOURCES:.c=.o)

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c
	gcc $(CFLAGS) -c $<

debug: $(TARGET)
	gdb $(TARGET)

valgrind: $(TARGET)
	valgrind --leak-check=yes ./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)