CC = gcc
CFLAGS = -Wall -Wextra -pedantic -MMD -MP
TARGET = main

all: $(TARGET)

SRCS = $(TARGET).c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include £(OBJS:.o=.d)

clean:
	rm *.o $(TARGET) *.d

.PHONY: all clean