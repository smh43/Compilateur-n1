#include "debug.h"
#include "lexer.h"

#include <stdio.h>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<int, string> tabType = {
    {RET, "ret"},
    {INT, "int"},
    {SEMI,"point-virgule"},
    {PARO,"Parenthèse ouverte"},
    {PARF,"Parenthèse fermé"},
    {CROO,"Crochet ouvert"},
    {CROF,"Crochet fermé"}
};

void pToken(Token t){
    printf("{\n\tType: %s\n\tValeur: %s\n}\n", tabType[t.type].c_str(), t.valeur);
}