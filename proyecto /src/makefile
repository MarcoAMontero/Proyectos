OBJS = Gaussian.cpp Rayleigh.cpp Comunicacion.cpp Main.cpp
CC = g++
DEBUG = -g
CFLAGS= -Wall -c $(DEBUG) --pedantic
LFLAGS= -Wall $(DEBUG) --pedantic
TARGET = main	
$(TARGET):$(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)
comunicacion.o: comunicacion.hh comunicacion.cpp
	$(CC) $(CFLAGS) comunicacion.cpp
gaussian.o: gaussian.hh gaussian.cpp
	$(CC) $(CLAFGS) gaussian.cpp
rayleigh.o: rayleigh.hh rayleigh.cpp
	$(CC) $(CLAFGS) rayleigh.cpp

clean:
	rm -f *o $(TARGET)
