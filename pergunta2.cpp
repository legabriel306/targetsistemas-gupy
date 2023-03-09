#include <iostream>
#include <string.h>

using namespace std;

/**
 * @brief eFibonacci
 * Verifica se o valor do parametro está presente na sequência de fibonacci
 * 
 * @param numero, numero inteiro a ser verificado
 * @return true, caso o valor pertencer a sequência de fibonacci 
 * @return false, caso o valor não pertencer a sequência de fibonacci
 */
bool eFibonacci(int numero){
    int numAtual, numAnterior, proximoNumero;

    if(numero == 0 || numero == 1) {
        return true;
    }

    numAnterior = 0;
    numAtual = 1;
    
    //Iteração que passa pelos valores de fibonacci
    //caso o valor estiver presente ele retorna verdadeiro
    while (numAtual < numero)
    {
        proximoNumero = numAnterior + numAtual;
        if(proximoNumero == numero) {
            return true;
        }

        numAnterior = numAtual;
        numAtual = proximoNumero;

        cout << proximoNumero << endl;
    }
    

    return false;
}

int main() {
    int input;

    cout << "digite um valor: ";
    cin >> input;

    if(eFibonacci(input)){
        cout << "Esse numero pertence a sequencia de Fibonacci" << endl;
    } else {
        cout << "Esse numero nao pertence a sequencia de Fibonacci" << endl;
    }

    return 0;
}