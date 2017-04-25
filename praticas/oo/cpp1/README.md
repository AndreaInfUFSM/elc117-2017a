# Prática: Programação OO em C++






## Aquecimento

1. Baixe o programa [circle.cpp](circle.cpp) e observe seu código. Você consegue prever a saída deste programa antes de executá-lo? Dica: veja este [tutorial](http://www.cplusplus.com/doc/tutorial/basic_io/) sobre entrada/saída em C++.

2. Compile e execute o programa:
  ```
  g++ -o circle circle.cpp
  ./circle
  ```

3. Acrescente um método `void setRadius(double radius)` à classe Circle, para alterar o raio de um círculo.

4. Modifique a função `main` para chamar o método `setRadius` nos círculos `c1` e `c2`.

5. Acrescente um novo construtor à classe Circle, que receba valores para `x`, `y` e `r`.

6. Modifique a função `main` para criar outros objetos da classe Circle, usando o novo construtor.

7. Na função `main`, depois da criação dos objetos, inclua a seguinte linha de código:
  ```
  c1.x = 0.5;
  ```
  Compile o programa. O que acontece? Porquê?

8. Acrescente uma linha ao construtor default para mostrar uma mensagem na saída padrão quando for chamado. Veja na `main` um exemplo de operação de saída (evolução do printf, ou não :-)).

9. Na função `main`, acrescente a declaração de um array de 10 círculos:
  ```
  Circle circs[10];
  ```
  Compile e execute o programa, observando a nova saída.


## Programação
Para entregar: faça a primeira lista de exercícios de programação OO em C++ ([t4]((../../../trabalhos/t4))).
