BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: stack_tester.cpp Stack.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main stack_tester.cpp Stack.o

AQueue.o: Aqueue.h Aqueue.cpp
	$(CPP) $(CPPFLAGS) -c Aqueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f $(BUILD)/main
