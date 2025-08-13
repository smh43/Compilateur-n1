#include <vector>
#include <string>

#include "lexer.h"

using namespace std;

vector<Token> lexer(string prog){
    vector<Token> output;
    uint32_t ind = 0;

    while(checkNext(prog, ind)){
        if(isalpha(prog.at(ind))){
            
        }
    }

    return output;
}