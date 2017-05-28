# Prática: Programação com FLTK em C++



# Aquecimento

Nesta prática, você vai continuar usando a [FLTK](http://fltk.org). Esta API é recomendada [neste livro](http://stroustrup.com/Programming/) do Bjarne Stroustrup, criador do C++.

Para compilar o programa desta prática, você vai precisar da FLTK instalada no seu sistema. Nos computadores do NCC, a FLTK já deverá estar instalada. Para testar a instalação, execute o editor FLUID em um terminal:
```
fluid&
```

Se o comando acima não funcionar, você pode virar root e instalar a FLTK com o comando abaixo (peça senha à professora):
```
apt install libfltk1.3-dev
```

Se você estiver no Windows, pode seguir este [tutorial de instalação do FLTK](../cpp6/tutorial-windows-fltk.pdf), criado pelo monitor da disciplina.



# Programação

1. Baixe o programa [fltk-readvalue.zip](fltk-readvalue.zip). Descompacte o programa e compile-o:
   ```
   unzip fltk-readvalue.zip
   cd fltk-readvalue
   sh compile.sh
   ```
   Obs.: Abra o script compile.sh para ver o comando usado.
   
2. Execute o programa com o comando abaixo: 
   ```
   ./a.out
   ```
   
3. Observe que o programa tem um campo para entrada de dados e um botão. Quando o botão é pressionado, o programa mostra no terminal a string lida na entrada.

4. Usando este programa como exemplo, você vai implementar um programa simples que faz adição ou subtração de valores lidos em campos de entrada. Para isso, o programa deverá ter:
   - Dois campos para entrada de dados (escolha uma das classes derivadas de [`Fl_Input`](http://www.fltk.org/doc-1.3/classFl__Input.html)).
   - Dois botões (`Fl_Button`), um para a operação '+' e outro para a operação '-'.
   - Uma caixa de texto (`Fl_Box`) para mostrar o resultado calculado quando um dos botões for pressionado.

5. **Atenção**: Os dados na entrada serão lidos como strings, então vai ser necessário convertê-los para um tipo numérico. Os seguintes métodos e funções podem ser úteis nesta tarefa: `stoi`, `atoi`, `c_str`. 




   
   
   
   
   
  
