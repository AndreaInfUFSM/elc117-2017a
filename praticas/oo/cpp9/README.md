# Prática: Rumo a um CRUD com FLTK em C++



# Preparação

Para fazer esta prática, você vai precisar da [FLTK](http://fltk.org) instalada no seu sistema. Nos computadores do NCC, a FLTK já deverá estar instalada. Para testar a instalação, execute o editor FLUID em um terminal:
```
fluid&
```

Se o comando acima não funcionar, você pode virar root e instalar a FLTK com o comando abaixo (peça senha à professora):
```
apt install libfltk1.3-dev
```

Se você estiver no Windows, pode seguir este [tutorial de instalação do FLTK](../cpp6/tutorial-windows-fltk.pdf), criado pelo monitor da disciplina.



# Teste e estude um programa

1. Baixe o programa [fltk-browser.zip](fltk-browser.zip). Descompacte o programa e compile-o:
   ```
   unzip fltk-browser.zip
   cd fltk-browser
   sh compile.sh
   ```
   Obs.: Abra o script compile.sh para ver o comando usado.
   
2. Execute o programa `a.out` no Linux ou `a.exe` no Windows. Você pode inserir (**Create**) um registro (strings representando nome e tipo), selecionar (**Read**), alterar (**Update**) e remover (**Delete**), além de limpar o formulário. Essas operações são conhecidas como **CRUD** (Create-Read-Update-Delete) e geralmente estão associadas a alguma forma de persistência dos dados, ou seja, escrita dos dados num banco de dados, arquivo, etc., para que os objetos não fiquem somente na memória principal. No programa fornecido, os dados não são persistidos, ou seja, se o programa for fechado, todas as modificações serão perdidas.
   
   
3. Abra o programa [main.cpp](fltk-browser/main.cpp), estude seu código e responda:
   - No construtor `View()`, o ponteiro `this` se refere a qual objeto? Quais os atributos desse objeto?
   - No método `show()`, de que classe é o objeto apontado por `w`?
   - Em `cbBtnClear`, são limpados os atributos `inputType` e `inputName` da interface gráfica. Se trocarmos a linha `gui->inputType->value("");` por `inputType->value("");`, teremos um erro de compilação. Por quê?
   - Nos callbacks `cbBtnInsert`, `cbBrowser`, `cbBtnUpdate` e `cbBtnDelete`, são feitas operações com atributos da interface gráfica e com o objeto que contém os dados. Identifique as operações feitas com os **dados**.


# Crie um novo programa incrementalmente

1. Crie um novo programa semelhante ao anterior, para guardar dados sobre preços de combustíveis em postos da cidade: nome do posto, tipo do combustível (Gasolina, Etanol, Diesel) e preço. Você terá que modificar a classe que representa os dados e as classes que representam a interface gráfica. Faça uma versão inicial tratando todos os atributos como `std::string`. Depois que isso funcionar, modifique o que for necessário para tratar o preço como um tipo `float`. Para o desenho da interface gráfica, seu novo programa precisará apenas de um terceiro atributo `Fl_Input`. Para informar o tipo de combustível, o usuário terá que digitar o texto correspondente, o que não é uma boa solução.

2. Você vai agora modificar a interface gráfica para que o usuário possa escolher o tipo de combustível dentre as opções fornecidas. Para isso, você pode usar um grupo com 3 [`Fl_Round_Button`](http://www.fltk.org/doc-1.3/common.html#common_buttons) ou um [`Fl_Choice`](http://www.fltk.org/doc-1.3/classFl__Choice.html) com 3 opções.

3. Até aqui, seu programa não faz persistência dos dados, ou seja: você perderá todas as modificações quando encerrar o programa. Uma forma simples de implementar persistência é por meio de arquivos em formato CSV. Muitos bancos de dados também permitem importar/exportar dados neste formato. Modifique seu programa para incluir um menu com opções `Import from CSV` e `Export to CSV`. Para leitura de dados em CSV, já foi fornecido um exemplo na prática [cpp2](../cpp2), usando classes `std::ifstream` e `std::stringstream`. Você deverá adaptar este exemplo para o novo problema e também pesquisar sobre como implementar a escrita em arquivo (classe ``std::ofstream``).





   
   
   
   
   
  
