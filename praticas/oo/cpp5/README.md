# Prática: Programação Concorrente em C++



# Aquecimento

Baixe o programa [thread.cpp](thread.cpp), que contém um exemplo simples de programa concorrente em C++. Compile e execute o programa:
   ```
   g++ -std=c++11 -o thread thread.cpp -pthread
   ./thread
   ```

Se você está usando um IDE, certifique-se de que as opções de compilação acima estão habilitadas nas configurações do ambiente.


# Programação

1. Baixe o programa [OperacoesBancariasSafe.cpp](OperacoesBancariasSafe.cpp). Este programa implementa um programa em que 2 threads fazem depósitos e retiradas concorrentes em uma conta compartilhada. O programa usa exclusão mútua para garantir consistência dos dados. Compile e execute o programa usando as mesmas opções de compilação do aquecimento.

2. Modifique o programa [OperacoesBancariasSafe.cpp](OperacoesBancariasSafe.cpp), retirando as chamadas `mutex.lock()` e `mutex.unlock()` na classe Conta. Recompile e execute o programa novamente, diversas vezes. Você vê que o programa às vezes produz um resultado incorreto? Se não viu, execute mais vezes: 
   ```
   for i in `seq 50`; do ./OperacoesBancariasSafe; done
   ```

3. Baixe o programa [ThreadDemoABC.cpp](ThreadDemoABC.cpp). Neste programa, 3 threads atualizam concorrentemente um array compartilhado, inserindo caracteres A, B ou C na próxima posição livre. Cada thread insere 20 caracteres, que podem estar em diferentes posições, dependendo do escalonamento das threads. Qualquer que seja a ordem, no final de uma rodada a contagem de caracteres no array deve ser: A=20 B=20 C=20. Compile e execute o programa, verificando que o resultado nem sempre é correto.

4. Corrija o programa [ThreadDemoABC.cpp](ThreadDemoABC.cpp), usando `std:: mutex`.


