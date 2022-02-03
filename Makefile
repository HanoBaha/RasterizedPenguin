debug: main.cpp int3.o int2.o float3.o float2.o
	g++ -g main.cpp -o RasterizedPenguin -Wall int3.o int2.o float3.o float2.o
	rm *.o

int3.o:
	g++ -c sources/int3.cpp

int2.o:
	g++ -c sources/int2.cpp

float3.o:
	g++ -c sources/float3.cpp

float2.o:
	g++ -c sources/float2.cpp