# Trabalho 1: Programação funcional em Python

## Deadline

Domingo, 19 de março, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. Este repositório deve ter sido informado quando você respondeu o questionário indicado pela professora no primeiro dia de aula. Se não respondeu ainda, responda agora e informe seu repositório.

 2. No seu repositório da disciplina, crie uma pasta chamada `t1` (atenção: letra minúscula)

 3. Coloque todos os arquivos do seu trabalho dentro desta pasta.

## Atenção!

Todos os exercícios devem ser resolvidos usando **recursos de programação funcional**. Você não deve usar recursos imperativos (p.ex.: `for`, `while`). Não use variáveis e não chame print(..) no meio das funções, a menos que seja solicitado.


## Parte 1

Entregue os exercícios num arquivo chamado `t1parte1.py`. Os exercícios devem ser entregues em ordem e o enunciado de cada questão deve constar como comentário antes do código de cada resposta.

Nos exercícios desta **Parte 1**, você vai definir funções, usar listas e funções de alta ordem.


1. Defina uma função `somaQuad(x,y)` que calcule a soma dos quadrados de dois números x e y.

2. Crie uma função `hasEqHeads(l1,l2)` que verifique se as listas l1 e l2 possuem o mesmo primeiro elemento.

3. Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome. Defina uma função auxiliar para ajudar neste exercício.

4. Crie uma função que receba uma string e retorne o número de espaços nela contidos.  Defina uma função auxiliar para ajudar neste exercício.

5. Escreva uma função que, dada uma lista de números, calcule 3*n**2 + 2/n + 1 para cada número n da lista. Defina uma função auxiliar para ajudar neste exercício.

6. Escreva uma função que, dada uma lista de números, retorne uma lista com apenas os que forem negativos. Defina uma função auxiliar para ajudar neste exercício.

7. Escreva uma função que receba uma lista de números e retorne somente os que estiverem entre 1 e 100, inclusive. Defina uma função auxiliar para ajudar neste exercício.

8. Escreva uma função que receba uma lista de números e retorne somente aqueles que forem pares.
Defina uma função auxiliar para ajudar neste exercício.

9. Crie uma função `charFound(c,s)` que verifique se o caracter c está contido na string. O resultado deve ser `True` ou `False`. Você não deve usar o operador `in`. Defina uma função auxiliar para ajudar neste exercício.

10. Escreva uma função que receba uma lista de strings e retorne uma nova lista com adição de marcações HTML (p.ex.: `<B>` e `</B>`) antes e depois de cada string.


## Parte 2

Entregue esta parte num arquivo chamado `t1parte2.py`. Estes exercícios também devem ser entregues em ordem e com o enunciado em forma de comentário. Nesta **Parte 2**, todos os exercícios devem usar **funções anônimas** (lambda).


1. Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome.

2. Escreva uma função que, dada uma lista de números, calcule 3*n**2 + 2/n + 1 para cada número n da lista.

3. Crie uma função que receba uma lista de nomes e retorne outra lista com somente aqueles nomes que terminarem com a letra 'a'.

4. Escreva uma função que, dada uma lista de idades de pessoas no ano atual, retorne uma lista somente com as idades de quem nasceu depois de 1970. Para testar a condição, sua função deverá subtrair a idade do ano atual. Exemplo de uso:
 ```python3
 >>> idades([20,30,51,57])
 [20, 30]
 ```

5. O código abaixo é escrito em Python imperativo. Escreva um código equivalente usando programação funcional.
 ```python3
 numbers = [1, 2, 3, 4]
 new_numbers = []
 for number in numbers:
   new_numbers.append(number * 2)
 print(new_numbers)
 ```
