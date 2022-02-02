debug: main.cpp int3.o
	g++ -g main.cpp -o RasterizedPenguin -Wall int3.o
	rm *.o

int3.o:
	g++ -c sources/int3.cpp