# Prática: Programação funcional em Haskell

## Preparação

Para este exercício você vai usar o ambiente GHC, que inclui um compilador e um interpretador para Haskell. 
Ele está disponível para Windows, Linux e MacOS em http://www.haskell.org/platform/. 

Se você instalar a plataforma Haskell no **Windows**, abra o WinGhci, que é uma interface gráfica para o interpretador Haskell.

Se você instalar a plataforma Haskell no **Linux**, use o ghci, que é o interpretador Haskell:
```
user@host:~$ ghci
GHCi, version 7.8.4: http://www.haskell.org/ghc/  :? for help
Loading package ghc-prim ... linking ... done.
Loading package integer-gmp ... linking ... done.
Loading package base ... linking ... done.
Prelude> 
```

## Primeiros passos

### Interação básica

- Usando o interpretador no modo interativo, basta escrever chamadas de funções na linha de comando. 
O interpretador vai executar as funções e mostrar o resultado. As funções já precisam estar definidas.

- Para definir novas funções, é preferível colocá-las em um arquivo de programa, por exemplo `prog.hs`.
Depois, este arquivo precisa ser **carregado** no interpretador:
  - No Linux: `Prelude> :load prog.hs` ou `Prelude> :load prog.hs`
  - No Windows: `Ctrl-L` vai abrir uma tela de seleção do programa

- Para sair do interpretador: `Prelude> :q` ou `Ctrl-D`.

### Execução no interpretador

1. Copie as funções abaixo para um arquivo de programa Haskell (.hs):
```
-- Soma os quadrados de 2 numeros (isto eh um comentario!)
doubleUs :: Int -> Int -> Int   
doubleUs x y = x^2 + y^2
  
-- Verifica se um numero eh par (usa if/then/else para expressar funcao condicional)
-- mod: retorna resto da divisao inteira
isEven :: Int -> Bool
isEven n = if mod n 2 == 0 then True else False
  
-- Gera um numero a partir de um caracter (usa outra estrutura condicional em Haskell)
encodeMe :: Char -> Int
encodeMe c 
  | c == 'S'  = 0
  | c == 'N'  = 1
  | otherwise = 2
  
-- Calcula o quadrado do primeiro elemento da lista
-- Note que '[Int]' designa uma lista de elementos do tipo Int 
doubleFirst :: [Int] -> Int
doubleFirst lis = (head lis)^2
```
2. Abra o interpretador Haskell e teste as funções em cada um dos casos abaixo, observando alguns erros que podem ocorrer:
```
doubleUs (2+1) 6
doubleUs 'A' 1
isEven 8
isEven 9
isEven 8.1
encodeMe 'S'
encodeMe "S"
doubleFirst [-3,4,5]
doubleFirst []
```

## Programação

