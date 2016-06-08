# Prática: MVC em Java



## Preparação

1. Para estes exercícios, recomenda-se instalar o IDE NetBeans para Java, disponível em: http://netbeans.org/downloads/

2. Estes exercícios tratam do padrão **MVC (Model-View-Controller)** para implementação de **interfaces gráficas**, em Java.  Veja mais sobre isso nos [slides](../../README.md) da disciplina.


## Parte 1: Sem GUI

**Atenção**: esta parte não usa interface gráfica. O objetivo é exercitar o uso de uma estrutura de dados que será usada na parte seguinte.

1. Baixe o arquivo [ArrayListDemo.zip](ArrayListDemo.zip), que contém o projeto NetBeans que será utilizado nesse exercício. Descompacte o projeto e abra-o no NetBeans.

2. Entre na pasta src do projeto e analise o programa `ArrayListOps.java`. Esse programa usa a classe `ArrayList`. O que faz cada linha do programa? Qual será sua saída?

3. Execute o programa no NetBeans (abra o arquivo `ArrayListOps.java` e tecle Shift-F6). 

4. Analise o programa `ArrayListPercurso.java`. O que faz cada linha do programa? Qual será sua saída?

5. O programa `VeiculoApp.java` ilustra o uso da classe Veiculo, que é definida em `Veiculo.java`. Qual será a saída deste programa?

6. Altere o programa `VeiculoApp.java` para fazer o seguinte:
   - criar uma `ArrayList` de objetos da classe `Veiculo`;
   - criar 4 veículos e inseri-los na `ArrayList`;
   - mostrar todo o conteúdo da `ArrayList`, usando um laço for com índice `i`;
   - obter e mostrar o segunda veículo da `ArrayList`;
   - remover o último veículo da `ArrayList`;
   - mostrar novamente todo o conteúdo da `ArrayList`, usando um laço for-each.


## Parte 2: Com GUI

1. Baixe o programa [ArrayListGUI.jar](ArrayListGUI.jar). Esse é um programa com interface gráfica que faz operações semelhantes às do exercício anterior. Execute e teste este programa, pois no restante dos exercícios você completará um código para reproduzir o comportamento deste executável. Para executar o programa, clique sobre ele ou execute:
```Shell
   java -jar ./ArrayListGUI.jar
```

2. Baixe o arquivo [ArrayListGUI.zip](ArrayListGUI.zip), que contém o projeto NetBeans da aplicação ArrayListGUI. Este projeto está incompleto.

3. Entre na pasta `src/arraylistgui/gui` e abra o arquivo `TableModelVeiculo.java`. Este arquivo contém uma classe que encapsula uma ArrayList de Veículos e implementa métodos para representar seus dados na forma de uma tabela.

4. Estude o código da classe `TableModelVeiculo` e procure completar as partes marcadas com "COMPLETE-ME". Se tudo der certo, o programa deverá compilar e executar sem erros, e executar as operações corretamente.
