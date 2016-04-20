# Prática: Programação funcional em Haskell



## Orientações ([para entregar: T4](../../trabalhos/t4))

Nesta prática, você vai completar um programa em Haskell que gera uma figura em formato SVG (Scalable Vector Graphics). 

Os exercícios deverão ser entregues como [T4](../../trabalhos/t4).


## Preparação



1. Visualize o arquivo [colors.svg](colors.svg), que contém um exemplo de imagem em formato SVG. 

2. Abra o mesmo arquivo com um editor de textos (nano, notepad, etc.) e observe seu código. Veja que um **retângulo** é definido por `rect`, com parâmetros que definem o ponto do canto superior esquerdo, a largura, a altura e o estilo, com a cor de preenchimento em formato RGB. 

3. Baixe o programa [svgcolors.hs](svgcolors.hs) e carregue-o no seu ambiente de desenvolvimento. Para executá-lo, digite `main` no interpretador. Veja que este código gera uma imagem SVG ([mycolors.svg](mycolors.svg)) que é mais simples que a anterior.

4. Abra o programa [svgcolors.hs](svgcolors.hs) e observe seu código, começando pela função main. 


## Exercícios

1. Reimplemente a função `genRects` para gerar uma lista com o número correto de retângulos, nas posições corretas, usando os argumentos n, w e h. A figura produzida deverá ser igual a [colors.svg](colors.svg). Sua função deverá ser **recursiva**.

2. Veja que a função `zip`, chamada em `applyStyles`, serve para combinar elementos de 2 listas, produzindo uma lista de tuplas. Implemente uma função **recursiva** `myzip :: [String] -> [Rect] -> [(Rect,String)]` que possa substituir `zip` em `applyStyles`. 

3. Note que a lista `styles`, na função `main`, contém as cores dos retângulos. Essa lista é definida com strings fixas (não é gerada por uma função). Crie uma função para gerar essa lista de cores, tendo no mínimo um parâmetro que defina a quantidade (`n`) de cores a serem geradas. Você pode usar qualquer esquema de geração de cores, por exemplo produzindo `n` variações de vermelho, etc. A função `printf` será útil neste exercício.

