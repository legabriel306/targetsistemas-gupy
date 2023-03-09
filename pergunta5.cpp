#include <iostream>
#include <string.h>

using namespace std;


/**
 * @brief troca
 * 
 * essa função recebe dois valores e os trocam
 * 
 * @param valor1 primeiro valor char que será trocado
 * @param valor2 segundo valor char que será trocado
 */
void troca(char *valor1, char *valor2) {
    char auxiliar;

    auxiliar = *valor1;
    *valor1 = *valor2;
    *valor2 = auxiliar;
}

/**
 * @brief inverteString
 * essa função recebe uma string e retorna ela invertida
 * 
 * @param str recebe a string para ser invertida
 * @return string 
 */
string inverteString(string str) {
    int n = str.length();

    for (int i = 0; i < n/2; i++)
    {
        troca(&str[i], &str[n-1-i]);
    }
    

    return str;
}

int main() {
    string input = "hello, world";
    string invertida;



    invertida = inverteString(input);

    cout << "string input: " << input << endl;
    cout << "string invertida: " << invertida << endl;


    return 0;
}