#include "stdafx.h"
#include "ListaCDL.h"
#include "String.h"
#include "NoLista.h"


<<<<<<< HEAD
ListaCDL::ListaCDL(NoLista primeiro)
=======
ListaCDL::ListaCDL()
>>>>>>> 2ec1913a25be0c68412cc8093d499ca332d1eb20
{
	//fazer posicao atual receber primeiro no
	*PosicaoAtual = primeiro;
}


ListaCDL::~ListaCDL()
{
}

void Insira(String linha)// na posicao atual
{
	NoLista novo = NoLista(linha);
	novo.getprox().setInfoAtual(PosicaoAtual->getinfoatual());
	*PosicaoAtual = novo;
}

void insiraDepois(String linha) // da posicao atual
{
	NoLista novo = NoLista(linha);
	PosicaoAtual->getprox().setInfoAtual(linha);
}

void remova(String linha)
{
	PosicaoAtual->getanterior().setProx(PosicaoAtual->getprox());
} // linha da posicao atual

void removaDepois(String linha)
{

} // linha depois da posicao atual

String infoAtual()
{

} // retorna o String do nó atual

void avance()
{

} // avança circularmente a posicao atual

void retroceda()
{

} // retrocede circularmente a posicao atual
