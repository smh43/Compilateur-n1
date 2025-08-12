CC = g++
OUT = compil

all:
	$(CC) *.cc -o $(OUT)
	.\$(OUT)

clean:
	del $(OUT).exe