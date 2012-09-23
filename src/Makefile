BUILD = ../build
CPP = g++
CPPFLAGS = -Wall -Wextra

main: queue_tester.cpp AQueue/Aqueue.o LQueue/Lqueue.o LLQueue/LLqueue.o
	$(CPP) $(CPPFLAGS) -o $(BUILD)/main queue_tester.cpp AQueue/Aqueue.o LQueue/Lqueue.o LLQueue/LLqueue.o

Aqueue.o: AQueue/Aqueue.h AQueue/Aqueue.cpp
	$(CPP) $(CPPFLAGS) -c AQueue/Aqueue.cpp

Lqueue.o: LQueue/Lqueue.h LQueue/Lqueue.cpp
	$(CPP) $(CPPFLAGS) -c LQueue/Lqueue.cpp

LLqueue.o: LLQueue/LLqueue.h LLQueue/LLqueue.cpp
	$(CPP) $(CPPFLAGS) -c LLQueue/LLqueue.cpp

clean:
	rm -f *.o
	rm -f *~
	rm -f AQueue/*.o
	rm -f AQueue/*~
	rm -f LQueue/*.o
	rm -f LQueue/*~
	rm -f LLQueue/*.o
	rm -f LLQueue/*~
	rm -f $(BUILD)/main
