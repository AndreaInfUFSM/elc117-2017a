# Trabalho 2: List comprehension em Python

## Deadline

Domingo, 26 de março, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. Este repositório deve ter sido informado quando você respondeu o questionário indicado pela professora no primeiro dia de aula. Se não respondeu ainda, responda agora e informe seu repositório.

 2. No seu repositório da disciplina, crie uma pasta chamada `t2` (atenção: letra minúscula)

 3. Coloque todos os arquivos do seu trabalho dentro desta pasta.

## Atenção!

Todos os exercícios devem ser resolvidos usando **list comprehension** e recursos de programação funcional. Você pode usar funções auxiliares já prontas ou definidas por você, mas lembre que o exercício é sobre o paradigma funcional. Você não deve usar recursos imperativos (p.ex.: laços `for`, `while` como em C). Suas funções não devem ter efeitos colaterais.


## Parte 1

Entregue os exercícios desta parte num arquivo chamado `t2parte1.py`. Os exercícios devem ser entregues em ordem e o enunciado de cada questão deve constar como comentário antes do código de cada resposta.


1. Defina uma função `addSuffix(suf,nomes)` que retorne a lista de `nomes` com o sufixo `suf` adicionado. Exemplos:
  ```
  >>> addSuffix('@inf.ufsm.br',['fulano','beltrano'])
    ['fulano@inf.ufsm.br', 'beltrano@inf.ufsm.br']
  ```

2. Escreva uma função `countShorts(words)`, que receba uma lista de palavras e retorne a quantidade de palavras dessa lista que possuem menos de 5 caracteres.
  ```
  >>> t2.countShorts(['lazy','dog','brown','fox'])
  3
  ```

3. Defina uma função `stripVowels(s)` que receba uma string e retire suas vogais, conforme os exemplos abaixo:
  ```
  >>> stripVowels('Andrea')
  'ndr'
  >>> stripVowels('xyz')
  'xyz'
  >>> stripVowels('')
  ''
  ```

4. Defina uma função `hideChars(s)` que receba uma string, possivelmente contendo espaços, e que retorne outra string substituindo os demais caracteres por '-', mas mantendo os espaços. Exemplos:
  ```
  >>> hideChars("Rio Grande do Sul")
  '--- ------ -- ---'
  >>> hideChars("")
  ''
  ```

5. Defina uma função que receba um número n e retorne uma tabela de números de 1 a n e seus quadrados, conforme os exemplos abaixo (você vai usar **tuplas** em Python):
  ```
  >>> genTable(5)
  [(1, 1), (2, 4), (3, 9), (4, 16), (5, 25)]
  >>> genTable(0)
  []
  >>> genTable(1)
  [(1, 1)]
  ```

6. Defina uma função que receba uma lista de palavras e retorne uma string contendo o primeiro e o último caracter de cada palavra da lista. Exemplo:
  ```
  >>> genCode(['abacaxi','mamao','banana'])
  'aimoba'
  ```

7. Defina uma função `myZip(l1,l2)` que reproduza o comportamento da função zip do Python:
  ```
  >>> myZip([1,2,3],[4,5,6])
  [(1, 4), (2, 5), (3, 6)]
  >>> myZip([1,2,3],[4,5])
  [(1, 4), (2, 5)]
  ```

8. Escreva uma função `enumerate(words)` que numere cada palavra da lista recebida:
  ```
  >>> enumerate(['abacaxi','mamao','banana'])
  [(1, 'abacaxi'), (2, 'mamao'), (3, 'banana')]
  ```

9. Escreva uma função `isBin(s)` que verifique se a string recebida representa um número binário. Exemplo:
  ```
  >>> isBin('1010')
  True
  >>> isBin('1012')
  False
  ```

10. Escreva uma função `bin2dec(digits)`, que receba uma lista de dígitos representando um número binário e retorne seu equivalente em decimal. Exemplo:
  ```
  >>> bin2dec([1,1,1,1])
  15
  ```


## Parte 2

### Prepare-se

1. Visualize o arquivo [colors.svg](colors.svg), que contém um exemplo de imagem em formato SVG (Scalable Vector Graphics).

2. Abra o mesmo arquivo com um editor de textos (nano, notepad, etc.) e observe seu código. Veja que um **retângulo** é definido por `rect`, com parâmetros que definem o ponto do canto superior esquerdo, a largura, a altura e o estilo, com a cor de preenchimento em formato RGB.

3. Baixe o programa [svgcolors.py](svgcolors.py), carregue-o no interpretador e execute `>>> main()`.
Veja que este código gera uma imagem SVG ([mycolors.svg](mycolors.svg)) que é mais simples que a anterior.

4. Abra o programa [svgcolors.py](svgcolors.py) e observe seu código.


### Programe

Entregue esta parte num arquivo chamado `t2parte2.py`. Este arquivo deverá ter uma cópia de `svgcolors.py`, com as alterações solicitadas abaixo:

1. Reimplemente a função `genRects` para gerar uma lista com o número correto de retângulos, nas posições corretas, usando os argumentos n, w e h. A figura produzida deverá ser igual a [colors.svg](colors.svg). Use list comprehension.

2. Note que a lista `styles`, na função `main()`, contém strings que especificam as cores dos retângulos. Essa lista é definida com strings fixas (não é gerada por uma função). Crie uma função para gerar essa lista de cores, tendo no mínimo um parâmetro que defina a quantidade (`n`) de cores a serem geradas. Você pode usar qualquer esquema de geração de cores, por exemplo produzindo `n` variações de vermelho, etc. Use sua criatividade :-)


## Parte 3 (extra)

Entregue esta parte num arquivo `t2parte3.py`.

Uma grande empresa está selecionando novos desenvolvedores e para isso lançou um desafio 'enigmático'. A única informação divulgada aos candidatos foi esse site: http://bit.ly/paraenigma. Decifre o enigma e entregue seu código em Python criado para resolvê-lo.
