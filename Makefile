
test: test.o queue.o 
	g++ -o test -g test.o queue.o 

queue.o: queue.cpp queue.h
	g++ -g -c -Wall queue.cpp

test.o: test.cpp queue.h
	g++ -g -c -Wall test.cpp

clean:
	rm -f *.o test
