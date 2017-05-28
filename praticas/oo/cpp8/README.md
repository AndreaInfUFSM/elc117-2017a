# Prática: Programação com FLTK em C++



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



# Solução da prática anterior

1. Baixe o programa [fltk-addsub.zip](fltk-addsub.zip). Descompacte o programa e compile-o:
   ```
   unzip fltk-addsub.zip
   cd fltk-addsub
   sh compile.sh
   ```
   Obs.: Abra o script compile.sh para ver o comando usado.
   
2. Execute o programa com o comando abaixo: 
   ```
   ./a.out
   ```
   Teste o programa com diferentes valores de entrada.
   
   
3. Abra o programa [main.cpp](fltk-addsub/main.cpp), estude seu código e responda:
   - No construtor `AddSubView`, o ponteiro `this` se refere a qual objeto? Quais os atributos desse objeto?
   - Quando o usuário clicar no botão `Clear`, qual código é executado?
   - O método `cbBtnAddSub` é chamado pela FLTK quando o usuário clicar em `A+B` ou `A-B`. O primeiro argumento é um `Fl_Widget*`, ou seja, um ponteiro para um componente gráfico da FLTK (`Fl_Widget`). Ele pode apontar para qualquer objeto que derive de `Fl_Widget` (herança). De qual classe é o objeto que está sendo recebido como primeiro argumento? 
   



# Programação

Para entregar: faça este trabalho de programação OO com GUI ([t7](../../../trabalhos/t7)../)).




   
   
   
   
   
  
