# Prática: POO em Java



## Orientações 

Nesta prática você vai exercitar alguns conceitos de orientação a objetos resumidos nos slides sobre [Introdução à Programação Orientada a Objetos em Java](../../slides/slides-introducao-java-2016a.pdf). 

Para fazer os exercícios, você vai precisar do ambiente de desenvolvimento Java (JDK) disponível em: http://www.oracle.com/technetwork/java/javase/downloads/index.html


## Aquecimento


1. Baixe o programa [OlaMundo.java](OlaMundo.java).

2. Num terminal de comandos, compile o programa:

   ```
   javac OlaMundo.java
   ```
   O comando acima produz um arquivo .class para cada classe contida em OlaMundo.java. Um arquivo .class contém um código (bytecode) interpretável por uma máquina virtual Java.

3. Execute o programa, informando um nome de classe que contém um método main:

   ```
    java -cp . OlaMundo
   ```
   Obs.: Se algo der errado e você estiver usando Windows, veja este tutorial preparado pela ex-monitora Jessica Lasch de Moura. 




## Classe SpaceShip

 
 
 

1. Baixe o arquivo [SpaceShip.zip](SpaceShip.zip) e descompacte-o numa pasta conhecida. Este arquivo contém classes em Java para representação de uma espaçonave que se move dentro de uma área limitada. Compile e execute o programa:
   
   ```
   javac *.java
   java -cp . SpaceShipTest
   ```

2. Abra o arquivo SpaceShip.java. Analise o código e responda:
 - Quantos objetos são criados pelo método main deste programa?
 - Qual será a saída do método main deste programa? 

3. Acrescente um atributo `myName` à classe `SpaceShip`, do tipo `String`. No construtor da classe `SpaceShip`, adicione uma linha de código para definir um nome para a espaçonave (p.ex.: "Enterprise"). Modifique o método `print`, de modo a imprimir a posição (x,y), a cor e o nome da espaçonave. Compile e execute o programa novamente.

4. Explique o que acontecerá se for incluída a seguinte linha no final do método `main` da classe `SpaceShipTest`:

   ``` 
   System.out.println(ship.myX);
   ```

5. Explique o que acontecerá se for incluída a seguinte linha no final do método `main` da classe `SpaceShipTest`:

   ```
   sr.print();
   ```

6. Modifique a função `main` de modo a criar uma nova espaçonave com cor vermelha (0xffff0000), com posição e nome à sua escolha. Compile e execute o programa novamente.




## Classe SpaceShipGUI

1. Execute agora um outro programa que **reutiliza** a classe SpaceShip. Esse programa mostra uma animação na tela.
   ```
   java -cp . SpaceShipGUI
   ```

2. Altere o método move() da classe SpaceShip para que a espaçonave se mova de forma diferente na animação. Por exemplo, faça a espaçonave mudar a direção quando atingir as posições myXmax e/ou myYmax, que representam os limites da janela.


## Classe Ponto 

1. Crie uma classe Java denominada ``Ponto``, que armazene as coordenadas ``(x,y)`` de um ponto num plano. A coordenada default para qualquer ponto deve ser ``(0.0,0.0)``. Além do construtor, esta classe deve conter:

 - um método que desloque as coordenadas de um ponto (x,y) para as coordenadas (x+dx,x+dy), sendo dx e dy argumentos do método

 - um método que calcule a distância entre 2 pontos (x1,y1) e (x2,y2) segundo o teorema de Pitágoras: 
   ```
   dx = x2 - x1
   dy = y2 - y1
   distancia = sqrt(dx*dx + dy*dy)
   ```

   **Dica**: para o cálculo da raiz quadrada, consulte os exemplos da seção [Beyond Basic Arithmetic](http://download.oracle.com/javase/tutorial/java/data/beyondmath.html), na página de [tutoriais Java](http://download.oracle.com/javase/tutorial/) da Oracle. 

2. Crie um programa Java que utilize a classe `Ponto` do exercício anterior.

 
 
 
