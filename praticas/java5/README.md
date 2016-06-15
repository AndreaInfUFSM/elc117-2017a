# Prática: MVC em Java



## Preparação

Para estes exercícios, recomenda-se instalar o IDE NetBeans para Java, disponível em: http://netbeans.org/downloads/


## Primeira Parte

1. Baixe o arquivo [ThreadDemo.zip](ThreadDemo.zip), que contém o projeto NetBeans usado nesta primeira parte dos exercícios. Importe o projeto no NetBeans.

2. Abra o projeto no NetBeans e execute o programa principal (F6). Teste os botões Run e Stop de Thread0.

3. Estude o código das classes `ThreadController` e `MyRunnable`.

4. Crie uma classe chamada `MyRunnable2`, semelhante a `MyRunnable`. Essa classe deve ter um método `run()` que, a cada 2 segundos, produza um número inteiro aleatório (você pode escolher o limite).

5. Na classe `ThreadController`, altere os métodos `runThread1` e `stopThread1` para trabalhar com um objeto da classe `MyRunnable2`. Use uma lógica semelhante à usada nos métodos `runThread0` e `stopThread0`. 



## Segunda Parte

1. No exercício anterior, observe que código executado pelas threads era definido em classes que implementavam a interface Runnable (`implements Runnable`). Conforme visto em aula, outra alternativa para isso é usar herança da classe Thread (`extends Thread`).

2. Refaça o exercício anterior, usando a alternativa `extends Thread`:
   - Crie uma classe chamada `MyThread`, com a funcionalidade de `MyRunnable2`.
   - Altere a classe `ThreadController` (método `runThread1`) para trabalhar com um objeto da classe `MyThread`. 


## Terceira Parte

1. Baixe o arquivo [ThreadDemoABC.zip](ThreadDemoABC.zip), que contém um projeto NetBeans para esta terceira parte dos exercícios.

2. LEIA ISSO ANTES: Neste programa, **3 threads** atualizam concorrentemente um **array compartilhado**, inserindo caracteres A, B ou C na próxima posição livre. Cada thread insere 20 caracteres, portanto no final de cada rodada a contagem de caracteres no array deve ser: A=20 B=20 C=20.

3. Execute o programa várias vezes e observe como a ordem de execução das threads pode variar. Além disso, observe que o resultado final nem sempre é correto (problema de **inconsistência de dados**).

4. Corrija o programa, utilizando um método synchronized (ver [slides sobre threads](../../slides/slides-java-threads-2016a.pdf)). Identifique primeiro a classe que representa o objeto compartilhado, depois identifique o método que deve ser executado em exclusão mútua. 

