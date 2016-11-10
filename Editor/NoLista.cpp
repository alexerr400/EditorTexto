#include "stdafx.h"
#include "NoLista.h"
#include "String.h"

<<<<<<< HEAD
String info;
NoLista *ProxNo;
NoLista *NoAnt;
=======

>>>>>>> 2ec1913a25be0c68412cc8093d499ca332d1eb20
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

<<<<<<< HEAD
void setProx(NoLista no)
{

}

void setAnt(NoLista no)
{

=======
void NoLista::setProx(NoLista *oq){
	proxNo
>>>>>>> 2ec1913a25be0c68412cc8093d499ca332d1eb20
}



