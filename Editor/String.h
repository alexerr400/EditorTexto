#ifndef STRING_H
#define STRING_H


class String
{
    public:
        String();
        virtual ~String();
        int length();
        char charAt(unsigned int posicao);
        int getTamanho();
        int length();
        void append(char c);
        void deleteCharAt(unsigned int posicao);
        void inserir(unsigned int posicao, char oque);
        void replacear(unsigned int posicao, char oque);
    protected:
    private:
};

#endif // STRING_H
