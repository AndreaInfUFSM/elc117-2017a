# Trabalho 4: Classes e objetos em C++

## Deadline

Segunda, 1º de maio, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. Este repositório deve ter sido informado quando você respondeu o questionário indicado pela professora no primeiro dia de aula. Se não respondeu ainda, responda agora e informe seu repositório.

 2. No seu repositório da disciplina, crie uma pasta chamada `t4` (atenção: letra minúscula).

 3. Coloque todos os arquivos do seu trabalho dentro desta pasta.


## Classe Point

Entregue esta parte em um arquivo nomeado **point.cpp**.

1. Crie uma classe `Point` para representar um ponto num plano, com coordenadas (x,y). Esta classe deverá conter:
   - um construtor default para um ponto;
   - um construtor que receba as coordenadas x e y do ponto;
   - um método (função-membro) `void move(double dx, double dy)` que altere as coordenadas (x,y) para (x+dx, y+dy);
   - um método `distanceTo` que calcule a distância do ponto em relação a um ponto dado, calculada segundo o teorema de Pitágoras. Você vai precisar da função `std::sqrt`, por isso vai precisar de `#include <cmath>` no início do programa.

2. Crie uma função `main` que teste a classe `Point`:
   - crie um ponto p alocado estaticamente, usando o construtor não-default;
   - crie um array de 5 pontos alocados dinamicamente, com `new`, também usando o construtor não-default;
   - calcule e mostre a distância entre o ponto p e cada um dos pontos do array;
   - destrua os pontos criados dinamicamente;


## Classe Circle

Entregue esta parte em um arquivo nomeado **circle.cpp**.

1. Reescreva a classe `Circle` da aula prática, substituindo as coordenadas x e y por um objeto da classe `Point`. Esse objeto representará o ponto central do círculo.

2. Adicione um método `distanceTo` à classe `Circle`, para calcular a distância do círculo em relação a um outro círculo dado. Reuse o método `distanceTo` da classe `Point` e faça o cálculo necessário para obter a distância correta.


## Figuras em SVG

O formato SVG (Scalable Vector Graphics) é um padrão para desenhos vetoriais. Um arquivo SVG contém texto com marcações semelhantes a "tags", representando elementos como círculos, retângulos, etc. Sua tarefa será gerar, na saída padrão, um conjunto de "tags" que representem um arquivo SVG válido, contendo círculos ([SVG circle](https://www.w3schools.com/graphics/svg_circle.asp)) e linhas ([SVG line](https://www.w3schools.com/graphics/svg_line.asp)) ligando os centros destes.

Requisitos para geração:
- Você deverá tentar reusar as classes `Point` e `Circle`. Você poderá modificá-las se achar necessário, mas essas classes não devem conter nenhum código de geração de SVG (a geração deve ser feita fora dessas classes).
- Você deverá criar uma lógica para gerar vários círculos e linhas ligando centros dos círculos. Você é livre para decidir como fazer isso. Não é necessário ligar todos os círculos. Você também pode criar uma lógica para definir as cores dos círculos e linhas.
- O código de geração do SVG deve ser organizado de forma a facilitar seu reuso. Não coloque tudo no `main`!

Entrega:
- Entregue esta parte em um arquivo nomeado **svg.cpp**. Esse arquivo poderá conter todas as classes e a função `main` do programa. Opcionalmente, você pode estudar como desmembrar o programa em vários arquivos .cpp.
- Entregue também um arquivo **circulos.svg**, contendo as tags geradas pelo seu programa.
