#include "./include/microempreendedor.hpp"

MicroEmpreendedor::MicroEmpreendedor(const std::string& nome, int idade, int cpf, int cnpj): Pessoa(nome, idade, cpf), Empresa(cnpj) {}
void MicroEmpreendedor::exibe_cpf() {
    printf("CPF: %d\n", cpf);
}

void MicroEmpreendedor::exibe_cnpj() {
    printf("CNPJ: %d\n", cnpj);
}

MicroEmpreendedor::~MicroEmpreendedor() {
    std::cout << "Destruindo MicroEmpreendedor" << std::endl;
}