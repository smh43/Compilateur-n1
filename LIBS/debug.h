#pragma once
#include "lexer.h"

#define i "[:]"
#define w "[-]"
#define e "[!]"

#define CHECK printf("check\n"); //vérifie que le programme a pas craché

void pToken(Token); //affiche le token
