CC = g++
OUT = compil
TEST = fichiertest.zzz

all: simpleCompil

simpleCompil:
	$(CC) compil.cc LIBS/*.cc -o $(OUT)
	.\$(OUT) $(TEST)

clean:
	del $(OUT).exe