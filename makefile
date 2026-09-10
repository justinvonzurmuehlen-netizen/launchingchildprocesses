CC = g++
CFLAGS = -g
TARGET1 = user
TARGET2 = oss

OBJS1 = user.o
OBJS2 = oss.o

all: $(TARGET1) $(TARGET2)

$(TARGET1): $(OBJS1)
	$(CC) -o $@ $^

$(TARGET2): $(OBJS2)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^

clean:
	/bin/rm -f *.o $(TARGET1) $(TARGET2)
