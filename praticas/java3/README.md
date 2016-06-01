# Prática: Interfaces Gráficas em Java



## Preparação

1. Para estes exercícios, recomenda-se instalar o IDE NetBeans para Java, disponível em: http://netbeans.org/downloads/

2. Estes exercícios tratam de **interfaces gráficas** em Java, que exigem conhecimento de vários recursos de orientação a objetos (herança, polimorfismo, interfaces, etc.). Veja mais sobre isso nos [slides](../../README.md) da disciplina e nos [tutoriais da Oracle](http://docs.oracle.com/javase/tutorial/uiswing/examples/components/index.html) para construção de interfaces gráficas.


## Parte 1
 1. O programa [GUISimples.java](GUISimples.java) ilustra o uso do pacote [javax.swing](http://docs.oracle.com/javase/8/docs/api/javax/swing/package-summary.html) para criação de uma interface gráfica bastante simples. Compile e execute este programa. Busque entender seu funcionamento.
    - Compilando e executando via terminal

      ```Shell
      $ javac GUISimples.java
      $ java -cp . GUISimples
      ```

    - Com o NetBeans:
       
       1. Crie um novo projeto Java vazio;
       2. Copie o arquivo [GUISimples.java](GUISimples.java) para dentro da pasta `src` do projeto.

 2. Modifique o programa para que o contador seja apresentado no título do `JFrame`. Para isso, encontre e chame o método apropriado, definido na classe [JFrame](https://docs.oracle.com/javase/8/docs/api/index.html?javax/swing/JFrame.html).
 
 3. Modifique o programa, adicionando um segundo botão na janela. 
 
 4. Observe o comportamento do programa. Para evitar a sobreposição entre componentes atualize o método `criaComponentes` de `SemIDE`, adicionando um [GridLayout](https://docs.oracle.com/javase/tutorial/uiswing/layout/grid.html) como gerenciador de layout.
 
 5. Adicione um `ActionListener` ao segundo botão e faça-o decrementar o contador `contagemCliques`. 
 

## Parte 2

 1. Baixe o arquivo [JavaGUI.zip](JavaGUI.zip) que contém o projeto NetBeans usado neste exercício. Descompacte o projeto e abra-o na IDE.
 
 2. Observe o código fonte do projeto e veja que alguns dos eventos estão preparados para receber o código (marcados com "TODO: COMPLETE-ME") e outros não.
 
 3. Vincule ao evento do botão "Retornar ao padrão" a ação de restaurar os componente da interface gráfica a seus valores iniciais. Note que a JTextArea deverá ter seu conteúdo apagado. O propósito dessa operação é "reiniciar" a interface gráfica.
 
 4. Vincule um evento ao botão "Label" que efetue a substituição do texto do botão pelo texto informado na JTextBox.
 
 5. Vincule um evento que ao clicar no botão "Desabilita", desabilite todos os outros botões exceto o "Retornar ao Padrão" e "Habilita".
 
 6. Vincule um evento que ao clicar no botão "Habilita", habilite os botões desabilitados no passo 5.
 
 7. Vincule um evento que ao clicar no botão "Insere", adiciona na JTextArea o conteúdo da JTextBox.
 
 8. Altere um dos botões para mostrar um ícone/imagem (a sua escolha) ao invés de seu título.
 
 9. Altere os eventos dos botões para que ao clicá-lo, sejam registrados na JTextBox, a hora (pode ser de `System.currentTimeMillis()`) e o botão apertado.


## Parte 3
 
 1. Baixe o arquivo [ExercicioComparator.zip](ExercicioComparator.zip) que contém o projeto NetBeans usado neste exercício.
 
 2. Estude a classe `exercicio_comparator.comparators.ComparatorPlaca`, responsável por comparar dois objetos `Veiculo`. Veja seu método `compare()` e o comentário presente no código.
  
 3. Implemente duas classes que estendem `Comparator`:
    - Uma delas deve comparar dois veículos pela marca;
    - A outra deve comparar pelo preço.
 
 4. Complete o programa `exercicio_comparator.ExercicioComparator`. Veja as marcações `TODO: COMPLETE-ME` presentes no código.

