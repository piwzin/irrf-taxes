#include <iostream>
#include <iostream>

using namespace std;

float porcentagem(float, float);
int main(){
    float salario;
    cout << "Digite seu salario: R$ ";
    cin >> salario;
    if(salario <= 1903.98){
        cout << "Valor Bruto = " << salario << ", Aliquota = 0, Valor real = " << salario;
    }
    else if(salario >= 1903.99 && salario <= 2826.65){
        cout << "Valor Bruto = " << salario;
        cout << ", Aliquota = 7,5, Valor real = " << salario - porcentagem(salario, 7.5);
    }
    else if(salario >= 2.826,66 && salario <= 3751.05){
        cout << "Valor Bruto = " << salario;
        cout << ", Aliquota = 15, Valor real = " << salario - porcentagem(salario, 15);
    }
    else if(salario >= 3751.06 && salario <= 4664.68){
        cout << "Valor Bruto = " << salario;
        cout << ", Aliquota = 22.5, Valor real = " << salario - porcentagem(salario, 22.5);
    }
    else{
        cout << "Valor Bruto = " << salario;
        cout << ", Aliquota = 27.5, Valor real = " << salario - porcentagem(salario, 27.5);
    }
    return 0;    
}
float porcentagem(float numero, float porcento){
    return (numero * porcento) / 100;
}
