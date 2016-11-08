#pragma once
class ListaCDL
{
protected:

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

