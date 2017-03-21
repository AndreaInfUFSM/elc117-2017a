# Prática: Programação funcional em Python

## 1. Preparação

Verifique se você tem Python instalado:
```
user@host:~$ python3
Python 3.5.2 (default, Nov 17 2016, 17:05:23)
[GCC 5.4.0 20160609] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>>
```

## 2. Interação básica com o interpretador

- Defina uma função no interpretador:
  ```python3
  >>> def tail(lis): return lis[1:]
  ```

- Qual será o resultado da aplicação dessa função?
  ```python3
  >>> tail([1,2,3,4])
  ```

- Há funções que não são carregadas por default no interpretador. Para usá-las, é necessário importar módulos. Por exemplo:
  ```python3
  >>> import random
  ```

- O que será que faz o código abaixo?
  ```python3
  >>> lis = [1,2,3,4]
  >>> random.shuffle(lis)
  >>> print(lis)
  ```

## 3. Interpretando suas funções

- Baixe o programa [funcs.py](funcs.py) e coloque-o na sua pasta de exercícios (p.ex.: pasta 'paradigmas').

- Abra o interpretador na pasta e carregue o programa:
  ```
  user@host:~$ cd paradigmas
  user@host:~/paradigmas$ python3
  user@host:~$ python3
  Python 3.5.2 (default, Nov 17 2016, 17:05:23)
  [GCC 5.4.0 20160609] on linux
  Type "help", "copyright", "credits" or "license" for more information.
  >>> import funcs
  ```

- Teste as funções em cada um dos casos abaixo. Descubra os motivos dos erros que ocorrerem.
 ```python3
  >>> funcs.doubleMe(9)
  >>> funcs.doubleMe(4+1)
  >>> funcs.doubleMe('a')
  >>> funcs.isEven(8)
  >>> funcs.isOdd(8.1)
  >>> funcs.bmiTell(bmi(65,1.70))
  >>> funcs.bmiTell(65,1.70)
 ```

- Altere a função `isOdd` em funcs.py, de modo que resulte verdadeiro se o número for inteiro e não for par. Use a seguinte função condicional: `isinstance(x,int)`.

- Recarregue o programa funcs.py e teste novamente a função:
  ```python3
  >>> funcs.isOdd(8.1)
  ```

- Corrija a função `main` em funcs.py, comentando as linhas que geram erros. Teste a função `main` no interpretador.

- Defina uma função `countVowel` que retorne o número de vogais de uma string passada como parâmetro. Use a função `isVowel` e uma função de alta ordem. Exemplo de uso:
  ```python3
  >>> funcs.countVowel('abracadabra')
  5
  ```

## 4. Programação

Para entregar: faça a primeira lista de exercícios de programação funcional em Python  ([t1](../../../trabalhos/t1)).
