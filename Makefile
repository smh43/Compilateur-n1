CC = g++
OUT = compil
TEST = fichiertest.zzz

all:
	$(CC) compil.cc LIBS/*.cc -o $(OUT)
	.\$(OUT) $(TEST)

clean:
	del $(OUT).exe