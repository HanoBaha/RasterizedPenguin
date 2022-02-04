debug: int3.o int2.o float3.o float2.o
	g++ -g main.cpp -o RasterizedPenguin -Wall int3.o int2.o float3.o float2.o
	rm *.o

debugLib:
	g++ -L. -g -Wall -o test main.cpp -lRPtypes -l3Dview

Types:
	g++ -c -fPIC -o Types/RPtypes.o Types/src/RPTypes.cpp
	gcc -shared -o libRPtypes.so Types/RPtypes.o
	rm Types/*.o

3Dview:
	g++ -c -fPIC -o 3Dview/3Dview.o 3Dview/src/3Dview.cpp
	gcc -shared -o lib3Dview.so 3Dview/3Dview.o
	rm 3Dview/*.o