# Prática: Herança e Polimorfismo em Java



## Orientações 

1. Para estes exercícios, recomenda-se instalar o IDE NetBeans para Java, disponível em: http://netbeans.org/downloads/

2. Os exercícios tratam de herança e polimorfismo em Java. Veja slides sobre isso [aqui](../../slides/slides-java-heranca-polimorfismo-2016a.pdf). 

3. No NetBeans, as teclas alt+enter e ctrl+espaço são suas amigas.


## Exercícios


1. Baixe o arquivo [Heranca.zip](Heranca.zip), que contém o projeto NetBeans usado neste exercício. Descompacte o projeto e importe-o no NetBeans.

2. Entre na pasta src do projeto e abra o arquivo Heranca.java. Estude o código e tente prever qual será a saída deste método. Veja se você acertou, selecionando esta classe e teclando shift-F6 para executá-la.

3. Abra o programa Heranca.java e observe a chamada `e.setCurso("Direito")`. Seria possível passar uma referência para um objeto da classe Estudante como argumento para o método setCurso? Por quê?

4. Abra o programa Estudante.java e responda: um objeto Estudante tem quantos atributos?

5. Observe o segundo construtor da classe Estudante. O que acontece se descomentarmos a primeira linha deste método? Qual o motivo disso?

6. Abra o programa Pessoa.java e troque a visibilidade do atributo nome para `protected`.

7. Vá novamente para a classe Estudante, no segundo construtor, e descomente a primeira linha. O que acontece agora? Qual o motivo disso?

8. Abra o programa Professor.java e complete o segundo construtor inicializando todos os atributos de um Professor.

9. Se tivermos uma referência p para um objeto Pessoa, podemos chamar o método p.comecaFerias()?

10. Crie uma nova classe chamada ProfessorTemporario, derivada de Professor. Objetos dessa nova classe possuem um atributo a mais do que um Professor: o ano de término do contrato. Crie construtores para essa nova classe e sobrescreva o método mostra(), para mostrar todos os atributos de um ProfessorTemporario.

11. Se tivermos uma referência p para um objeto ProfessorTemporario, podemos chamar p.comecaFerias()?

12. Altere o programa Heranca.java para testar a nova classe ProfessorTemporario, chamando todos os seus métodos. 

13. Crie um método [toString](https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html#toString--) nas classes Estudante, Professor e ProfessorTemporario. Em cada classe, este método deverá retornar uma String com os valores de todos os atributos de um objeto da classe. Teste sua implementação sem chamar explicitamente o método toString (veja nos slides como fazer isso).

    

