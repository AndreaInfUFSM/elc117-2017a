/*   
     Paradigmas de Programação - UFSM
     Resolvendo problemas da OBI em Prolog
     andrea@inf.ufsm.br
     
     Problema: Vagas de Estacionamento (http://olimpiada.ic.unicamp.br/passadas/pdf/provas/ProvaOBI2009_inic_f2n1.pdf)
     Em um prédio de uma companhia existem seis vagas de estacionamento, separadas das demais vagas, para
     os diretores da empresa. Elas estão dispostas uma ao lado da outra e são numeradas da esquerda para
     a direita de um a seis. Estas vagas são ocupadas por exatamente seis carros: C, D, F, H, O e V. As seguintes
     regras tambéem são aplicadas:
     - Há exatamente 3 carros entre V e D.
     - Existe no mínimo um carro entre O e F.
     - C é adjacente a somente um único carro.
*/

/*
A regra pode ser expressa enumerando-se as opções:
regra1(E) :- E = [_,d,_,_,_,v].
regra1(E) :- E = [_,v,_,_,_,d].
regra1(E) :- E = [d,_,_,_,v,_].
regra1(E) :- E = [v,_,_,_,d,_].
*/

% Ou de forma mais generica (preferivel):
regra1(E) :- 
   nth0(Id, E, d),
   nth0(Iv, E, v),
   Dif is abs(Id-Iv),
   Dif = 4.


regra2(E) :- 
   nth0(Io, E, o),
   nth0(If, E, f),
   Dif is abs(Io-If),
   Dif > 1.

regra3(E) :- E = [c | _].
regra3(E) :- E = [_,_,_,_,_,c].

aoLado(X,Y,E) :- nextto(X,Y,E).
aoLado(X,Y,E) :- nextto(Y,X,E).


% regras combinadas
estacionamento(E) :-
   E = [_,_,_,_,_,_],
   Carros = [c,d,f,h,o,v],
   permutation(Carros, E),
   regra1(E),
   regra2(E),
   regra3(E).

/*
     Questão 1. Qual das seguintes opções é uma lista
     completa e correta de carros ocupando as vagas da esquerda
     para a direita?
     (A) V, O, C, F, D, H.
     (B) C, D, H, O, V, F.
     (C) C, V, O, F, H, D.
     (D) D, O, H, F, V, C.
     (E) C, F, V, O, H, D.
 */

/*
 ?- estacionamento([v,o,c,f,d,h]).
 ?- estacionamento([c,d,h,o,v,f]).
 ?- estacionamento([c,v,o,f,h,d]).
 ?- estacionamento([d,o,h,f,v,c]).
 ?- estacionamento([c,f,v,o,h,d]).
 */

/*
     Questão 2. Qual das seguintes afirmações pode ser verdadeira?
     (A) D está na terceira vaga a partir da esquerda.
     (B) C está imediatamente ao lado de O.
     (C) O está na terceira vaga a partir da esquerda.
     (D) V está na quarta vaga a partir da esquerda.
     (E) D está imediatamente ao lado de H.

    ?- estacionamento([_,_,d,_,_,_]).
    ?- estacionamento(E), aoLado(c,o,E).
    ?- estacionamento([_,_,o,_,_,_]).
    ?- estacionamento([_,_,_,v,_,_]).
    ?- estacionamento(E), aoLado(d,h,E).
 */

/*
     Questão 3. Qual das seguintes opções é uma vaga que
     H pode ocupar?
    (A) 1.
    (B) 2.
    (C) 3.
    (D) 5.
    (E) 6.

    ?- estacionamento([h,_,_,_,_,_]).
    ?- estacionamento([_,h,_,_,_,_]).
    ?- estacionamento([_,_,h,_,_,_]).
    ?- estacionamento([_,_,_,_,h,_]).
    ?- estacionamento([_,_,_,_,_,h]).
 */

/*
    Questão 4. Qual das seguintes opções deve obrigatoriamente ser falsa?
    (A) C está adjacente ao D.
    (B) V está adjacente ao F.
    (C) D está adjacente ao O.
    (D) H está adjacente ao V.
    (E) O está adjacente ao H.

    ?- estacionamento(E), aoLado(c,d,E).
    ?- estacionamento(E), aoLado(v,f,E).
    ?- estacionamento(E), aoLado(d,o,E).
    ?- estacionamento(E), aoLado(h,v,E).
    ?- estacionamento(E), aoLado(o,h,E).
 */

/*
    Questão 5. Qual dos seguintes pares contêm carros
    que podem ocupar a terceira ou a quarta vaga a partir
    da esquerda?
    (A) H e O.
    (B) D e F.
    (C) F e V.
    (D) H e D.
    (E) O e D

    ?- estacionamento([_,_,h,o,_,_]).
    ?- estacionamento([_,_,d,f,_,_]).
    ?- estacionamento([_,_,f,v,_,_]). 
    ?- estacionamento([_,_,h,d,_,_]).
    ?- estacionamento([_,_,o,d,_,_]).
 */

