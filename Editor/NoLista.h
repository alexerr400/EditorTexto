#pragma once
#include "stdafx.h"
#include "String.h"

class NoLista
{
private:
	String info;
	NoLista *proxNo;
	NoLista *noAnt;
public:
	NoLista(String textoInfo);
	~NoLista();
	String getinfoatual();
	NoLista* getProx();
	NoLista getanterior();
	void setInfoAtual(String linha);
<<<<<<< HEAD
	void setProx(NoLista no);
	void setAnt(NoLista no);
=======
	void setProx(NoLista *oq);

>>>>>>> 2ec1913a25be0c68412cc8093d499ca332d1eb20

	
};
