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
	void setProx(NoLista *oq);


	
};
