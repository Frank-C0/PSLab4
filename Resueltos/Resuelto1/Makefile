target = main
OBJS = main.o
CFLAGS = -std=c++11 -Wall -g

myprog: $(OBJS)
	g++ $(CFLAGS) $(OBJS) -o $(target)
	./main
	
main.o: main.cpp
	g++ -c main.cpp

.PHONY: clean
clean:
	rm -f $(OBJS) main