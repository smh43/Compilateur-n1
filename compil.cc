#include <stdio.h>
#include <fstream>
#include <sstream>

#include "LIBS\lexer.h"
#include "LIBS\debug.h"

using namespace std;

int main(int argc, char* argv[]){

    ifstream f;
    string file;

    if(argc != 2){
        printf("%s Utilisation : compil.exe {fichier}\n",e);
        return 1;
    }

    f.open(argv[1], ios::binary);

    if(!f.is_open()){
        printf("%s Le fichier spécifié: {%s} est introuvable\n",e, argv[1]);
        return 1;
    }

    {
        stringstream t;
        t << f.rdbuf();
        file = t.str();
    }

    printf("%s", file.c_str());

    return 0;
}