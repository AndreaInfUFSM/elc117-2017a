# Prática: Programação OO em C++






## Usando vector<int>

1. Baixe o programa [vectorint.cpp](vectorint.cpp), compile-o e execute-o:
   ```
   g++ -std=c++11 -o vectorint vectorint.cpp
   ./vectorint
   ```

2. Observe o código de [vectorint.cpp](vectorint.cpp) e identifique 4 métodos da classe genérica std::vector. Quer ganhar pontos extra? É só anotar as respostas no quadro! (válido para a primeira pessoa que responder).

3. Use o método `insert` para adicionar o valor `100` no início (`begin()`) do vetor. Veja exemplo [aqui](http://en.cppreference.com/w/cpp/container/vector/insert). Teste o programa novamente.

4. Use o método `clear` para remover todos os elementos do vetor. Teste o programa novamente.


## Usando vector<Person>

1. Baixe o programa [vectorperson.cpp](vectorperson.cpp) e compile-o:
   ```
   g++ -std=c++11 -o vectorperson vectorperson.cpp
   ```

2. Observe o código de [vectorperson.cpp](vectorperson.cpp) e responda: Quais são os atributos de um objeto da classe `Person`? Quais são os métodos de um objeto da classe `Person`? Vale pontos para a primeira pessoa que responder no quadro.

3. Quantos objetos da classe `Person` são criados? Também vale pontos para a primeira pessoa que responder no quadro.

4. Baixe o arquivo [data.csv](data.csv) na mesma pasta do programa. Execute o programa:
   ```
   ./vectorperson
   ```

5. Adicione mais dados ao arquivo [data.csv](data.csv) e execute o programa novamente.

6. O que acontece se você comentar o código do método `operator<`?

7. Escreva um novo comparador de pessoas que permita ordená-las segundo o nome e a idade (pessoas com o mesmo nome são ordenadas pela idade). Teste seu comparador usando `std::sort`.

8. Nome que foi usado o prefixo `std::` antes de vários nomes de classes. Esse prefixo designa um `namespace`, no caso o `std`. Namespaces são usados para evitar conflitos entre nomes idênticos definidos em partes diferentes de um programa ou biblioteca. É um recurso semelhante a módulos em Python ou pacotes em Java. É possível declarar um namespace que será usado num programa (ou parte dele), eliminando a necessidade de se escrever o prefixo antes dos nomes de classes, funções, etc. Para testar isso, adicione `using namespace std;` antes da função `main` de vectorperson.cpp e remova os prefixos `std::`. Quem terminar esta parte primeiro ganhará pontos extra.




## Programação
Para entregar: faça a segunda lista de exercícios de programação OO em C++ ([t5](../../../trabalhos/t5)).
