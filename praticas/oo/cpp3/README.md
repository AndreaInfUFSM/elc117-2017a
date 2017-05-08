# Prática: Herança em C++


1. Baixe o programa [heranca.cpp](heranca.cpp).

2. Qual será a saída deste programa? Tente responder sem executá-lo. Quer ganhar pontos extra? Chame a professora e explique a saída do programa, linha por linha. Válido para os 5 primeiros (coloque seu nome no quadro para garantir a ordem).

3. Compile o programa e execute-o, verificando se a saída é igual à esperada:
   ```
   g++ -std=c++11 -o heranca heranca.cpp
   ./heranca
   ```

4. Em [heranca.cpp](heranca.cpp), inclua o código abaixo no final da seção `public` da classe `Student`. Este código testa se o nome do estudante começa com a letra `F`.
   ```
   bool testName() {
      if (name[0] == 'F') 
         return true;
      else
         return false;
   }
   ```

5. Compile o programa modificado. O que acontece?

6. Na classe `Person`, substitua a visibilidade `private` por `protected` e compile novamente o programa. O que acontece?

7. Na função `main`, use o método `testName`.

8. Crie uma classe `PhDStudent` derivada de `Student`. No seu construtor, mostre uma mensagem na saída padrão para saber quando ele foi chamado.

9. Altere a função `main` para criar um objeto da classe `PhDStudent`. Quais os construtores chamados?

10. Nos exemplos desta aula, só usamos construtores default. Também é possível criar outros construtores que podem ser invocados em construtores de classes derivadas usando ["initialization lists"](http://www.cprogramming.com/tutorial/initialization-lists-c++.html). Crie novos construtores para todas as classes (Person, Student, PhDStudent), recebendo como argumento o nome da pessoa. Nas classes Student e PhDStudent, use "initialization lists" para invocar o construtor da classe imediatamente acima na hierarquia. Em todos os construtores, mostre uma mensagem na saída padrão para saber quando ele foi chamado.

