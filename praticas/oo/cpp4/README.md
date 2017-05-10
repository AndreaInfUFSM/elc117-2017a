# Prática: Programação OO em C++


## Funções virtuais em C++

Esta aula prática é sobre polimorfismo dinâmico e funções virtuais em C++. 

1. Baixe o programa [virtual.cpp](virtual.cpp), que contém uma hierarquia de classes onde são usadas funções virtuais. Compile e execute o programa:
   ```
   g++ -o virtual virtual.cpp
   ./virtual
   ```

2. Na saída do programa, identifique os casos em que houve "vinculação dinâmica", ou seja, a função executada foi aquela do objeto da classe derivada, designado por um ponteiro da superclasse.

3. Será que o efeito da palavra-chave "virtual" se estende também a classes derivadas de `Cat`? Para responder esta pergunta, você vai fazer um experimento: crie uma classe `PersianCat` derivada de `Cat`. Nesta classe, crie novas implementações dos métodos `eat()` e `move()` (isto é, sobrescreva os métodos). Na função `main`, modifique o código para criar um objeto da classe `PersianCat`. Use este objeto (e ponteiros para ele) nos códigos que usam containers. Qual sua conclusão?

## Programação
Para entregar: faça este trabalho comemorativo do Dia das Mães ([t6](../../../trabalhos/t6)).
