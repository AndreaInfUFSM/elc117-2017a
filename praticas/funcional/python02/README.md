# Prática: List comprehension em Python

## 1. Preparação

Verifique se você tem Python instalado:
```
user@host:~$ python3
Python 3.5.2 (default, Nov 17 2016, 17:05:23)
[GCC 5.4.0 20160609] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>>
```

## 2. Expressões no interpretador

- Qual será o resultado dos seguintes usos de list comprehension?
  ```python3
  >>> [x+1 for x in [4,9,5,3,1]]
  >>> [x*2+1 for x in range(10)]
  >>> [0 if x<5 else x for x in [7,8,2,0,1,9,13,3,7]]
  >>> [(x,2**x) for x in range(10)]
  ```

- Agora vamos usar um gerador de números pseudo-aleatórios do Python:
  ```python3
  >>> import random
  >>> random.sample(range(20),10)
  >>> len([x for x in random.sample(range(20),10) if x>10])
  ```
  Você entendeu o resultado da última linha acima?


## 3. Funções com list comprehension

- Baixe o programa [comprehension.py](comprehension.py) e abra-o num editor.

- Carregue o programa no interpretador e teste outros exemplos de list comprehension:
  ```python3
  >>> from comprehension import *
  >>> [cara_ou_coroa() for x in range(10)]
  >>> len([c for c in 'abracadabra' if isVowel(c)])
  >>> [c if isVowel(c) else '-' for c in 'abracadabra']
  >>> ''.join([c if isVowel(c) else '-' for c in 'abracadabra'])
  ```

- Agora teste estes outros exemplos, prestando bastante atenção nos resultados:
  ```python3
  >>> genFloats(0,10,10)
  >>> genFloats(10,20,10)
  >>> genFloats(0,1,10)
  ```
  Veja que no último caso há valores com erros de arredondamento.

- O código abaixo padroniza os arredondamentos. Reescreva-o usando list comprehension:
  ```python3
  >>> list(map(lambda x: round(x,1),comprehension.genFloats(0,1,10)))
  ```

## 4. Resolva problemas

Para entregar: faça a segunda lista de exercícios de programação funcional em Python  ([t2](../../../trabalhos/t2)).
