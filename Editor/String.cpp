#include "String.h"
#include <stdlib.h>
#include "stdafx.h"


String::String(unsigned int tam)
{
	tamanho = tam + 1;
    a = (char*)malloc(tamanho * sizeof(char)); // = a = new char(tamanho);
}

String::~String()
{
	free(a);

}

char String::charAt(unsigned int posicao) {
    return *(a + posicao);
}


bool String::operator< (String str){
    if (tamanho < str.getTamanho())
        return true;
    return false;
}
bool String::operator<= (String str){
    if (tamanho <= str.getTamanho())
        return true;
    return false;
}
bool String::operator>(String str){
	if (tamanho > str.getTamanho())
		return true;
    return false;
}
bool String::operator>= (String str){
    if (tamanho >= str.getTamanho())
        return true;
    return false;
}
bool String::operator== (String str){
    if (tamanho == str.getTamanho())
        return true;
    return false;
}
bool String::operator!= (String str){
    if (tamanho != str.getTamanho())
        return true;
    return false;
}

String String::operator+ (String mais) {
    for (int i = 0; i < mais.getTamanho(); i++)
    {
        inserir((tamanho + i), mais.charAt(i));
    }
    return *this;
}

int String::length() {
    return tamanho;
}

void String::append(char c){
	tamanho++; a = (char*)malloc(tamanho * sizeof(char)); 
	a = (char*)malloc(tamanho * sizeof(char));

	*(a + tamanho) = c;
}



void String::deletar(unsigned int posIni, unsigned int posFim){ // delete dava erro
    for (int i = posIni; i < posFim; i++)
		deleteCharAt(i);
    
}

void String::deleteCharAt(unsigned int posicao) {
	if (*(a + posicao) == NULL)
		throw "ERROU";
	for (int i = posicao; i < tamanho; i++)
		*(a + posicao) = *(a + posicao + 1);
	tamanho--; a = (char*)malloc(tamanho * sizeof(char));
}

void String::inserir(unsigned int posicao, char oque){ // insert dava erro
	if (*(a + posicao) != NULL)
		throw "Valor invalido";
    *(a + posicao) = oque;
}

void String::replacear(unsigned int posicao, char oque) { // replace dava erro
    if (*(a + posicao) == NULL)
		throw "Valor invalido";
    *(a + posicao) = oque;
	tamanho++; a = (char*)malloc(tamanho * sizeof(char));
}

int String::getTamanho() {
    return tamanho;
}

