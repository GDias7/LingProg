#include "./include/pessoa.hpp"
#include "./include/empregado.hpp"
#include "./include/empresa.hpp"
#include "./include/microempreendedor.hpp"

int main() {

    // Rotinas equivalentes ao item 1 da prática 9
    Pessoa* p = new Pessoa("Lucas", 30, 11823456788);
    Empregado* e = new Empregado("Luis", 23, 11700050080, 1500.00);
    Pessoa* p2 = e;

    Empresa empresa(1004700001);
    // Ampliacao
    empresa.paga(*e);
    // Estreitamento
    empresa.contrata(*(static_cast<Empregado*> (p2))); 

    // Libera memoria
    delete p;
    delete e;

    // Rotinas equivalentes ao item 2 da prática 9
    MicroEmpreendedor* me = new MicroEmpreendedor("Luis", 23, 1182345678, 1905700001);
    me->exibe_cpf();
    me->exibe_cnpj();

    // Libera memória
    delete me;

    // Observacao: empresa sera deletada automaticamente
    // sera a ultima delecao realizada. Ela somente e
    // deletada automaticamente por ser uma variavel
    // estatica

    return 0;
}