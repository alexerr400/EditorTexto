#pragma once
class NoLista
{
public:
	NoLista(String textoInfo);
	~NoLista();
	String getinfoatual();
	NoLista getprox();
	NoLista getanterior();
	void setInfoAtual(String linha);


	
};
