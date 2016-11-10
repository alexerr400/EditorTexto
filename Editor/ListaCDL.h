#pragma once
#include "stdafx.h"
#include "String.h"
#include "NoLista.h"
class ListaCDL
{
protected:
<<<<<<< HEAD

=======
>>>>>>> 2ec1913a25be0c68412cc8093d499ca332d1eb20
	NoLista *PosicaoAtual;
public:
	ListaCDL(NoLista primeiro);
	~ListaCDL();
	void insira(String linha); // na posicao atual
	void insiraDepois(String linha); // da posicao atual
	void remova(String linha); // linha da posicao atual
	void removaDepois(String linha); // linha depois da posicao atual
	String infoAtual(); // retorna o String do nó atual
	void avance(); // avança circularmente a posicao atual
	void retroceda(); // retrocede circularmente a posicao atual


	//claro que vai precisar de um construtor de
		//copia, operator= de cópia e de um destrutor


};

