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
	void setProx(NoLista no);
	void setAnt(NoLista no);

	
};
