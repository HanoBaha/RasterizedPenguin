TYPES_SO = RPLtypes/lib/Types.so
TYPES_INC = -IRPLtypes/include
TYPES_LIBS = -LRPLtypes/lib -lTypes.so

3DVIEW_SO = RPL3Dview/lib/3Dview.so

INCLUDES = $(TYPES_INC)
LIBS = $(TYPES_LIBS)

#Main ---------------------------------------------------
debug: $(TYPES_SO)
	g++ -Wall $(INCLUDES) -c main.cpp
	g++ main.o -o RasterizedPenguin $(LIBS)


#Types ----------------------------------------------------
Types: $(TYPES_SO)

$(TYPES_SO):
	g++ -c -fPIC -o RPLtypes/types.o RPLtypes/src/RPTypes.cpp
	g++ -shared -o $(TYPES_SO) RPLtypes/types.o


#3Dview ----------------------------------------------------
3Dview: $(3DVIEW_SO)

$(3DVIEW_SO): $(TYPES_SO)
	g++  -fPIC $(TYPES_INC) -c RPL3Dview/src/3Dview.cpp -o RPL3Dview/3Dview.o
	g++ -shared -o $(3DVIEW_SO) RPL3Dview/3Dview.o $(TYPES_LIBS)


#Utils ----------------------------------------------------
#export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH

clean:
	rm *.o
	rm RPLtypes/*.o
	rm RPL3Dview/*.o

cleanAll:
	rm -f *.o
	rm -f RPLtypes/*.o
	rm -f RPL3Dview/*.o
	rm -f *.so
	rm -f RPLtypes/*.so
	rm -f RPL3Dview/*.so
	rm -f RPLtypes/lib/*.so
	rm -f RPL3Dview/lib/*.so
