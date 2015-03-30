main6: lab2.o main.o
	g++ -o lab2 main.o lab2.o
timer6.o: lab2.cpp lab2.h
	g++ -c lab2.cpp

main6.o: main.cpp lab2.h
	g++ -c main.cpp

clean:
	rm lab2.o main.o
