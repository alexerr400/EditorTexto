#pragma once
#include "stdafx.h"
#include "String.h"
#include "NoLista.h"
class ListaCDL
{
protected:
	NoLista *PosicaoAtual;
public:
	ListaCDL();
	~ListaCDL();
	void insira(String linha); // na posicao atual
	void insiraDepois(String linha); // da posicao atual
	void remova(); // linha da posicao atual
	void removaDepois(); // linha depois da posicao atual
	void infoAtual(); // retorna o String do n� atual
	void avance(); // avan�a circularmente a posicao atual
	void retroceda(); // retrocede circularmente a posicao atual


	//claro que vai precisar de um construtor de
		//copia, operator= de c�pia e de um destrutor


};

