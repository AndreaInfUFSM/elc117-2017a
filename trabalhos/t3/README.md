# Trabalho 3: Predicados em Prolog

## Deadline

Segunda, 10 de abril, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. Este repositório deve ter sido informado quando você respondeu o questionário indicado pela professora no primeiro dia de aula. Se não respondeu ainda, responda agora e informe seu repositório.

 2. No seu repositório da disciplina, crie uma pasta chamada `t3` (atenção: letra minúscula)

 3. Coloque todos os arquivos deste trabalho dentro desta pasta.


## Parte 1

A execução de um programa Prolog pode ser feita passo-a-passo usando o predicado `trace`. Você pode encontrar mais informações sobre isso aqui: http://www.cse.unsw.edu.au/~billw/dictionaries/prolog/tracing.html. Nesta URL, há um quadro que mostra a saída de uma execução passo-a-passo, comentada linha por linha.

Nesta parte do trabalho, você vai produzir um arquivo `t3parte1.md`, em formato Markdown, mostrando a execução passo-a-passo das consultas abaixo. Cada linha da execução deverá ser comentada, como no quadro em http://www.cse.unsw.edu.au/~billw/dictionaries/prolog/tracing.html.

1. Considere a seguinte base de fatos e regras:
   ```prolog
   pai(roberto,joao).
   pai(joao, jose).
   pai(roberto,julio).
   pai(julio,marcos).
   pai(julio,mario).
   avo(X,Z) :- pai(X,Y), pai(Y,Z).
   ```
   Mostre o trace comentado das consultas:
   ```
   ?- avo(joao,Y).
   false.
   ?- avo(roberto,Y).
   Y = jose ;
   Y = marcos ;
   Y = mario.
   ```

2. Considere o predicado definido abaixo, que resolve um problema de uma [prova da Olimpíada Brasileira de Informática](http://olimpiada.ic.unicamp.br/passadas/pdf/provas/ProvaOBI2006_inic_f1n1.pdf).
   ```prolog
   azulejos(0,0).
   azulejos(Na,Nq) :-
      Na > 0,
      Q is floor(sqrt(Na)),
      R is Na - Q*Q,
      azulejos(R,C),
      Nq is 1 + C.
   ```
   Mostre o trace comentado desta consulta:
   ```
   ?- azulejos(120,A).
   ```

3. Escolha algum predicado recursivo que esteja nos slides ou em qualquer outra fonte. Faça a execução passo-a-passo de uma consulta com o predicado escolhido. Lembre-se de mostrar o código do predicado no seu arquivo `t3parte1.md`



## Parte 2

Entregue os exercícios num arquivo chamado `t3parte2.pl`. Os exercícios devem ser entregues em ordem e o enunciado de cada questão deve constar como comentário antes do código de cada resposta.


1. Defina um predicado `somaQuad(X,Y,Q)` que seja verdadeiro se Q for a soma dos quadrados de X e Y. Exemplos de uso:
   ```
   ?- somaQuad(3,4,25).
   true.
   ?- somaQuad(3,4,Q).
   Q = 25.
   ?- somaQuad(3,4,10).
   false.
   ```

2. Defina um predicado `zeroInit(L)` que é verdadeiro se L for uma lista que inicia com o número 0 (zero). Exemplo de uso:

   ```
   ?- zeroInit([9,6,7]).
   false.
   ?- zeroInit([0,6,7]).
   true.
   ```

3. Defina um predicado `hasEqHeads(L1,L2)` que seja verdadeiro se as listas L1 e L2 possuírem o mesmo primeiro elemento. Exemplos de uso:
   ```
   ?- hasEqHeads([a,b,c],[b,c,a]).
   false.
   ?- hasEqHeads([a,b,c],[a,c,a]).
   true.
   ```

4. Defina um predicado `has5(L)` que seja verdadeiro se L for uma lista de 5 elementos. Lembre de como funciona a **unificação** em Prolog e resolva este exercício **sem usar** o predicado pré-definido `length`. Exemplos de uso:
   ```
   ?- has5([a,b,c]).
   false.
   ?- has5([a,b,c,d,e]).
   true.
   ```

5. Defina um predicado `hasN(L,N)` que seja verdadeiro se L for uma lista de N elementos. Agora você pode usar um predicado pré-definido.
   ```
   ?- hasN([a,b,c],3).
   true.
   ?- hasN([a,b,c,d,e],3).
   false.
   ```

6. Defina um predicado `isBin(L)` que seja verdadeiro se L for uma lista contendo somente elementos `0` e `1`. Use **recursão**. Exemplo:
   ```
   ?- isBin([0]).
   true.
   ?- isBin([1]).
   true.
   ?- isBin([]).
   false.
   ?- isBin([0,1,0,1]).
   true.
   ?- isBin([0,1,2,3]).
   false.
   ```

7. Defina um predicado `mesmaPosicao(A,L1,L2)` para verificar se um elemento A está na mesma posição nas listas L1 e L2. Assuma que L1 e L2 sejam permutações de uma lista de elementos distintos, sem repetições. Dica: procure auxílio em predicados pré-definidos. Exemplo de uso:
   ```
   ?­ mesmaPosicao(c,[a,b,c,d,e],[e,d,c,b,a]).
   true
   ?­ mesmaPosicao(b,[a,b,c,d,e],[e,d,c,b,a]).
   false
   ```

8. Defina um predicado `repete5(E,L)` que seja verdadeiro se a lista L for composta por exatamente 5 repetições do elemento E. Não use recursão. Exemplos:
   ```
   ?- repete5(a,L).
   L = [a, a, a, a, a].
   ?- repete5(a,[a,a]).
   false.
   ?- repete5(b,[b,b,b,b,b]).
   true.
   ?- repete5(E,[b,b,b,b,b]).
   E = b.
   ```

9. Defina um predicado **recursivo** `sumQuads(L,S)` que seja verdadeiro se S for o somatório dos quadrados dos elementos da lista L.
   ```
   ?- sumQuads([2,2],S).
   S = 8 .
   ?- sumQuads([2,2,2],S).
   S = 12 .
   ?- sumQuads([],S).
   S = 0 .
   ```

10. Defina um predicado **recursivo** `repete(N,E,L)` que seja verdadeiro se a lista L for composta por exatamente N repetições do elemento E.

11. Defina um predicado **recursivo** `mapop(L1,L2)` que seja verdadeiro se a lista L2 for formada aplicando-se a operação `2*x+1` a cada elemento x da lista L1.
   ```
   ?- mapop([1,2,3],L).
   L = [3, 5, 7] .
   ?- mapop([],L).
   L = [] .
   ```

12. Defina um predicado `positivos(L1,L2)`, de forma que L2 seja uma lista só com os elementos positivos de L1, conforme o exemplo abaixo:

   ```
   ?­ positivos([­-1,0,1,-­2,9],L).
   L = [1, 9]
   ```

## Parte 3

A **Olimpíada Brasileira de Informática** é uma competição voltada para alunos do ensino fundamental e médio, que ocorre anualmente em várias cidades no Brasil. Numa das modalidades da competição, denominada "Iniciação", os alunos resolvem problemas de lógica e problemas de computação, sem o uso de computador. Todos os problemas das competições passadas estão disponíveis no [site oficial da OBI](http://olimpiada.ic.unicamp.br/passadas).

Nesta parte do trabalho, você vai resolver um problema da OBI à sua escolha, usando Prolog. Seu programa deverá implementar:

1. Os requisitos lógicos do problema, sob forma de fatos e regras.
2. Consultas que respondam a pelo menos uma questão do problema.


### Dicas:

- Muitos problemas da OBI podem ser resolvidos em Prolog usando **listas** para representar as possíveis soluções. Isso é exemplificado no programa [obi-estacionamento.pl](obi-estacionamento.pl), que apresenta a solução do problema "Vagas de Estacionamento" (OBI2009-F2N1). Neste programa, usa-se uma regra para gerar todas as permutações com 5 carros em 5 vagas, e depois aplicam-se regras com restrições, que reduzem o número de soluções possíveis.

- No geral, a descrição inicial dos problemas poderia levar a diversas soluções, mas cada questão impõe condições adicionais, de forma que somente uma resposta (A, B, C, D ou E) pode ser verdadeira.

- Para responder a uma questão, você pode fazer 5 consultas, uma para cada opção (A, B, C, D e E). Cada consulta deverá retornar true para a opção correta e false para as demais opções (ou o contrário, dependendo do enunciado da questão).

### Observações:
- As consultas devem ser expressas em forma de comentários nos códigos.
- Na resolução dos problemas, você pode utilizar predicados pré-definidos em Prolog.
- Entregue esta parte num arquivo chamado `t3parte3.pl`.
