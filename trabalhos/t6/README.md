# Trabalho 6: Comemoração do Dia das Mães em C++

## Deadline

Domingo, 21 de maio, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. Este repositório deve ter sido informado quando você respondeu o questionário indicado pela professora no primeiro dia de aula. Se não respondeu ainda, responda agora e informe seu repositório.

 2. Na raiz do seu repositório da disciplina, crie uma pasta chamada `t6` (atenção: letra minúscula).

 3. Coloque todos os arquivos do seu trabalho dentro desta pasta.


## Problema

Aproveitando a proximidade do Dia das Mães, sua associação de turma decidiu fazer biscoitos para vender, e assim angariar recursos para a festa de formatura. Os biscoitos se inspiram em figuras geométricas - círculos, retângulos e triângulos - para agradar as mães de alunos de exatas :-) A produção dos biscoitos é artesanal, feita por excelentes programadores com pouco conhecimento de culinária, por isso os biscoitos variam bastante de tamanho. Depois da produção, os biscoitos precisam ser organizados conforme seu tamanho, para depois serem distribuídos em embalagens e posteriormente vendidos. Os  biscoitos terão 3 preços distintos, dependendo da sua faixa de tamanho (um valor para biscoitos grandes, outro para médios e outro para pequenos). Sua tarefa será estimar o valor a ser arrecadado, considerando um lote de N biscoitos produzido.

## Requisitos

- Você deverá criar uma solução orientada a objetos para resolver o problema acima, ou seja, seu programa deverá ter várias classes e objetos que se relacionam entre si.

- A quantidade total (N) de biscoitos deverá ser um dado de entrada do seu programa.

- O lote de N biscoitos deverá ter quantidades e tamanhos variados de círculos, triângulos e retângulos, de preferência definidos (pseudo-)aleatoriamente. Os biscoitos obviamente são objetos 3D mas, para simplificar, o tamanho de cada biscoito deverá ser calculado pela área da sua forma geométrica, dadas as medidas relevantes para cada forma. 

- Você é livre para estipular os tamanhos de biscoitos para as 3 faixas (grandes, médios e pequenos), bem como seus respectivos valores. Para simplificar, você deverá atribuir valores por biscoito (e não por embalagem). Por exemplo: faixa de biscoitos médios, de 3 a 4 cm2, a R$0,20 a unidade. 

- Você deverá utilizar containers e algoritmos definidos na C++ Standard Library.

- A saída do seu programa deverá listar os seguintes dados:
  - Tamanhos de todos os biscoitos produzidos, do maior para o menor.
  - Quantidade de biscoitos pequenos, médios e grandes, e a respectiva estimativa do valor total a ser arrecadado com cada tamanho de biscoito.


