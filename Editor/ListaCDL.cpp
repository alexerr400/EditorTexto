#include "stdafx.h"
#include "ListaCDL.h"
#include "String.h"
#include "NoLista.h"


ListaCDL::ListaCDL()
{
	//fazer posicao atual receber primeiro no
}


ListaCDL::~ListaCDL()
{
}

void Insira(String linha)// na posicao atual
{
	NoLista novo = NoLista(linha);
	novo.getprox().setInfoAtual(PosicaoAtual->getinfoatual());
	
}

void insiraDepois(String linha)
{

} // da posicao atual

void remova()
{

} // linha da posicao atual

void removaDepois()
{

} // linha depois da posicao atual

void infoAtual()
{

} // retorna o String do nó atual

void avance()
{

} // avança circularmente a posicao atual

void retroceda()
{

} // retrocede circularmente a posicao atual
