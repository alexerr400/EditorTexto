#include "String.h"

char* a;
unsigned int tamanho;

String::String(unsigned int tam)
{
    a = (char*)malloc(tamanho * sizeof(char)); // = a = new char(tamanho);
    this->tamanho = tam;
}

String::~String()
{
	free(a);

}

char charAt(unsigned int posicao) {
    return *(a + posicao);
}


bool operator < (String str){
    if (tamanho < str->getTamanho())
        return true;
    return false;
}
bool operator <= (String str){
    if (tamanho <= str->getTamanho())
        return true;
    return false;
}
bool operator > (String str){
    if (tamanho > str->getTamanho())
        return true;
    return false;
}
bool operator >= (String str){
    if (tamanho >= str->getTamanho())
        return true;
    return false;
}
bool operator == (String str){
    if (tamanho == str->getTamanho())
        return true;
    return false;
}
bool operator != (String str){
    if (tamanho != str->getTamanho())
        return true;
    return false;
}

String operator + (String mais) {
    for (int i = 0; i < mais.getTamanho(); i++)
    {
        inserir((quantos + i), mais.charAt(i));
    }
    return this;
}

int length() {
    return qtos;
}

void append(char c){
    // ????
}

void deletar(unsigned int posIni, unsigned int posFim){ // delete dava erro
    for (int i = posIni; i < posFim; i++){
        *(a + i).free; // ta errado
    }
}

void deleteCharAt(unsigned int posicao) {
    if (*(a + posicao) != NULL){
        *(a + posicao).free; // esta errado
    }
}

void inserir(unsigned int posicao, char oque){ // insert dava erro
    if (*(a + posicao) != NULL)
        throw new exception("Valor invalido") // ???
    *(i + posicao) = oque;
}

void replacear(unsigned int posicao, char oque) { // replace dava erro
    if (*(a + posicao) == NULL)
        throw new exception("Valor invalido") // ???
    *(i + posicao) = oque;
}

int getTamanho() {
    return  tamanho;
}

