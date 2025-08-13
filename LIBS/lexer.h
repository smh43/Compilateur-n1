enum TYPE{
    INT,  //nombre
    RET,  //return
    SEMI, //point virgule
    PARO, //parenthese ouverte
    PARF, //parenthese fermé
    CROO, //crochet ouvert
    CROF, //crochet fermé
};

struct Token{
    TYPE type;
    string valeur;
};

vector<Token> lexer(string);