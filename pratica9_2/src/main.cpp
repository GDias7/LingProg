#include "./include/pessoa.hpp"
#include "./include/empregado.hpp"
#include "./include/empresa.hpp"
#include "./include/microempreendedor.hpp"

int main() {

    Pessoa* p = new Pessoa("Lucas", 30, 11823456788);
    Empregado* e = new Empregado("Luis", 23, 11700050080, 1500.00);
    Pessoa* p2 = e;

    Empresa empresa(1004700001);
    empresa.paga(*e);
    empresa.contrata(*(static_cast<Empregado*> (p2))); 

    // Libera memoria
    delete p;
    delete e;

    MicroEmpreendedor* me = new MicroEmpreendedor("Gabriel", 23, 1182345678, 1905700001);
    me->exibe_cpf();
    me->exibe_cnpj();

    // Libera memória
    delete me;

    return 0;
}