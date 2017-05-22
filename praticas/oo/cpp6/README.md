# Prática: Programação Concorrente com GUI em C++



# Aquecimento

Nesta prática, você vai modificar um programa concorrente que tem interface gráfica criada com uma API chamada FLTK. Esta API é recomendada [neste livro](http://stroustrup.com/Programming/) do Bjarne Stroustrup, criador do C++.

Para compilar o programa desta prática, você vai precisar da FLTK instalada no seu sistema. Nos computadores do NCC, você pode virar root e instalar a FLTK com o comando abaixo (peça senha à professora):
```
apt install libfltk1.3-dev
```

Se você estiver no Windows, pode seguir este [tutorial de instalação do FLTK](tutorial-windows-fltk.pdf), criado pelo monitor da disciplina.



# Programação

1. Baixe o programa [fltk-twothreads.tar.gz](fltk-twothreads.tar.gz). Descompacte o programa e compile-o:
   ```
   tar xzvf fltk-twothreads.tar.gz
   cd fltk-twothreads
   g++ -std=c++11 main.cpp window.cxx -lfltk -pthread
   ```

2. Execute o programa com o comando abaixo: 
   ```
   ./a.out
   ```
   
3. Observe que o programa tem uma interface gráfica com botões para controlar 2 threads. Teste os botões e observe que somente o controle da thread 1 está funcionando. Os botões que controlam a thread 2 não têm funções associadas.

4. Você vai implementar as funções para a thread 2, adicionando código em `main.cpp`, nas partes marcadas como `TODO`:
   - No construtor `ThreadView()`, configure associe funções aos botões `btnStart2` e `btnStop2`, seguindo o exemplo implementado para a thread 1. As funções chamadas serão, respectivamente, `cbBtnStart2` e `cbBtnStop2`.
   - Crie a função `run2()` semelhante a `run1()`. Esta será a função executada pela thread 2. Basicamente, a thread deve ficar num laço que mostra o valor de um contador (`count2`) em `textArea2` e aguarda um tempo. Este laço é interrompido quando a thread principal alterar o valor de um flag (no caso, `interrupted2`).
   - Crie as funções `cbBtnStart2` e `cbBtnStop2`, tomando como modelo as funções implementadas para a thread 1.
   
5. Quando os controles da thread 2 estiverem funcionando de forma semelhante aos da thread 1, faça mais modificações:
   - Implemente outra versão de `run2()`, alterando a mensagem mostrada na tela e a forma de contagem (por exemplo: contagem de 10 em 10, contagem com um número aleatório, etc.). Altere também o tempo de espera.
   - Implemente uma lógica que ative e desative os botões, conforme o estado das threads. Por exemplo: quando a thread 1 não estiver executando, ative o botão Start e desative o botão Stop. Quando a thread 1 estiver executando, desative o botão Start e ative o botão Stop. Para isso, use os métodos `activate()` e `deactivate` nos objetos `btnStart1` e `btnStop1`.
   
   
   
   
   
  
