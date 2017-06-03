# Paradigmas de Programação - ELC117-2017a
[Sobre a disciplina](#sobre-a-disciplina) | [Avaliações](#avaliações) | [FAQ](#faq)


Primeiro semestre de 2017  
Professora: [Andrea Schwertner Charão](http://www.inf.ufsm.br/~andrea)  
Carga horária: 60h  
Horários: segundas e quartas, das 14:30 às 16:30  
Sala: 368, CT - Práticas: 334, CT  

## Sobre a disciplina
 - [Ementa](https://drive.google.com/file/d/0B2aW-kt5pdi7X2ZLbEYxNG1KZVk/view?usp=sharing): informações sobre objetivos, programa, metodologia e bibliografia.
 - [Plano de ensino](https://docs.google.com/spreadsheets/d/1-HOEpVhdNGLGK17PtGeOvwIbA7EWXGXzDLGZ1x8ojUA/edit?usp=sharing): planejamento de atividades de cada aula.
 - [Que comecem os jogos!](https://bit.ly/paraquest): formulário para responder na primeira semana.
 - [Entrega de atvidades espontâneas](http://bit.ly/paraextras): formulário para entrega dos extras.
 
 
## Avaliações

 - [Guia de Pontuação](http://bit.ly/parapontos): a avaliação será baseada na pontuação acumulada individualmente na realização de atividades.
 - [Notas](https://docs.google.com/spreadsheets/d/1c2Dv6_AYLC3yVJG8R2ABbfCWq5GxXc3fnVzsj6sQ3ls/edit?usp=sharing)
 - Testes rápidos sobre POO/C++ com auto-correção: [(1)](http://testmoz.com/1275953) [(2)](testmoz.com/1275973) [(3)](testmoz.com/1275979)
 - Datas para avaliações orais:  
   - Primeiro bimestre: 17/04 e 19/04/2017  
   - Segundo bimestre: 19/06/2017 e 21/06/2017
 - Avaliação final (exame): 17/07/2017

## FAQ
 - **Estou usando Python no Windows e não consegui importar um programa. Como resolver?**  
   Veja tutoriais dos colegas [Willian](https://github.com/wdsoares/ParaGames/blob/master/TutorialImportPy), [Mikael](https://github.com/mikael-85/paradigmas/tree/master/extras), [Marcelo](https://github.com/m3nezes/paradigmas/blob/master/TutorialImport.py) e [Cassio](https://github.com/caraujoufsm/Paradigmas_de_Programacao/blob/master/tutorial/tutorial.pdf).  
   Provavelmente, você não conseguiu fazer `import funcs` porque o interpretador não encontrou o `funcs.py`. Para resolver isso, use o código abaixo para que o interpretador vá até a pasta do programa (p.ex.: C:\Users\Seunome\Documentos):
   ```
   >>> import os
   >>> os.chdir('C:\\Users\\Seunome\\Documentos')
   >>> import funcs
   ```
   Se isso não der certo, leia este tutorial: [Usando Python 3.5 no Windows](http://usandopython.com.br/instalacao-python-3-5-windows/). Veja principalmente a parte sobre o 'IDLE', que é um IDE simples para Python.
   
 - **Alguns exercícios do T1, pedem para que uma função auxiliar seja definida, mas como eu faço para "chamar" essa função auxiliar na principal?**  
   A função auxiliar deve ser passada como argumento para uma função de alta ordem (p.ex., map, filter, etc.), conforme o exemplo abaixo. Há outros exemplos nos slides sobre funções de alta ordem.
   ```
   >>> def auxiliar(x):return x+1
   ... 
   >>> list(map(auxiliar,[1,2,3]))
   [2, 3, 4]
   ```
<!--
 - [Introdução à disciplina](slides/slides-introducao-paradigmas-2016a.pdf)
 - Paradigma funcional / Haskell
    - [Introdução à programação funcional](slides/slides-programacao-funcional-2016a.pdf)
    - [Introdução à linguagem Haskell](slides/slides-haskell-intro-2016a.pdf)
    - [Condicionais, recursividade, listas e tuplas](slides/slides-haskell-cond-repet-2016a.pdf)
    - [Geração de listas](slides/slides-haskell-listas-geracao-2016a.pdf)
    - [Uso de let e where](slides/slides-haskell-let-where-2016a.pdf)
    - Exemplo de código: [validaCPF.hs](slides/validaCPF.hs) 
 - Paradigma lógico / Prolog
    - [Programação lógica em Prolog](slides/slides-programacao-logica-resumo-2016a.pdf) 
 - Paradigma orientado a objetos / Java
    - [Introdução à programação orientada a objetos](slides/slides-introducao-oo-2016a.pdf)
    - [Introdução à linguagem Java](slides/slides-introducao-java-2016a.pdf)
    - [Métodos e atributos de classe] (slides/slides-java-static-2016a.pdf)
    - [Herança e polimorfismo] (slides/slides-java-heranca-polimorfismo-2016a.pdf)
    - [Arrays e pacotes](slides/slides-java-arrays-2016a.pdf) (não vistos em aula)
    - [Classes abstratas, interfaces, tipos genéricos, coleções](slides/slides-java-abstract-2016a.pdf)
    - [Interfaces gráficas e MVC](slides/slides-java-mvc-2016a.pdf)
    - [Programação concorrente em Java](slides/slides-java-threads-2016a.pdf)
    - [Exceções em Java](slides/slides-java-excecoes-2016a.pdf)
-->

<!--
## Práticas

 - Haskell: [(1)](praticas/haskell1) [(2)](praticas/haskell2) [(3)](praticas/haskell3) [(4)](praticas/haskell4) 
 - Testes (quizzes) de Haskell com correção automática: [(1)](https://testmoz.com/471285/) [(2)](https://testmoz.com/471302/)
 - Prolog: [(1)](praticas/prolog1) [(2)](praticas/prolog2)
 - Java: [(1)](praticas/java1) [(2)](praticas/java2) [(3)](praticas/java3) [(4)](praticas/java4) [(5)](praticas/java5)
 -->

<!--

## Trabalhos

 - [Lista de Ganhadoras em C](trabalhos/t1) (entrega até quarta, 09/03/2016, 8h)
 - [Programação funcional em Haskell](trabalhos/t2) (entrega até domingo, 20/03/2016, 23:59)
 - [Mais exercícios de programação funcional em Haskell](trabalhos/t3) (entrega até terça, 29/03/2016, 23:59)
 - [Gerando SVG em Haskell](trabalhos/t4) (entrega até domingo, 03/04/2016, 23:59)
 - [List comprehension e recursão em Haskell](trabalhos/t5) (entrega até domingo, 10/04/2016, 23:59)
 - [Listas e recursão em Prolog](trabalhos/t6) (entrega até terça, 26/04/2016, 23:59)
 - [Resolvendo problemas da OBI em Prolog](trabalhos/t7) (entrega até quarta, 04/05/2016, 23:59)
 - [Ache a maior bolacha em Java](trabalhos/t8) (entrega até quarta, 01/06/2016, 23:59)
-->
