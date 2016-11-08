#include "stdafx.h"
#include "NoLista.h"
#include "String.h"


NoLista::NoLista(String textoInfo)
{
	info = info;
}


NoLista::~NoLista()
{
	
}

String NoLista::getinfoatual()
{
	return this->info;
}


NoLista* NoLista::getProx()
{
	return proxNo;
}

NoLista NoLista::getanterior()
{
	return *noAnt;
}

void NoLista::setInfoAtual(String linha)
{
	info = linha;
}

void NoLista::setProx(NoLista *oq){
	proxNo
}



