#ifndef STRING_H
#define STRING_H


class String
{
public:
	String();
	String::String(unsigned int tam);
	String::~String();
	char charAt(unsigned int posicao);


	bool operator< (String str);
	bool operator<= (String str);
	bool operator>(String str);
	bool operator>= (String str);
	bool operator== (String str);
	bool operator!= (String str);
	String operator + (String mais);
	int length();
	void append(char c);
	void deletar(unsigned int posIni, unsigned int posFim);
	void deleteCharAt(unsigned int posicao);
	void inserir(unsigned int posicao, char oque);
	void replacear(unsigned int posicao, char oque);
	int getTamanho();
private:
};

#endif // STRING_H
