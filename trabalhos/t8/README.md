# Trabalho 8: Gerador em C++ de Aplicação Web/Mobile em HTML5/Javascript

## Deadline

Domingo, 2 de julho, 23:59.

## Entrega

 1. Seu trabalho será entregue no seu **repositório** da disciplina no GitHub. 

 2. Na raiz do seu repositório da disciplina, crie uma pasta chamada `t8` (atenção: letra minúscula).

 3. Coloque todos os arquivos do seu trabalho dentro desta pasta, junto com um README.md informando dependências e instruções de compilação.
 
 4. Trabalhos feitos em dupla devem ter commits de ambos desenvolvedores.
 
 5. Os trabalhos deverão ser apresentados à professora nos dias 3 ou 5 de julho.
 

## Problema

Tecnologias como HTML5, CSS e Javascript deram origem a vários frameworks para aplicações Web que executam do lado do cliente, isto é, no navegador, sem necessitar de comunicação com um servidor. Essas aplicações podem armazenar dados e se adaptar a diferentes dispositivos, servindo de base para aplicativos móveis. Exemplos comuns de uso destas tecnologias são formulários para inserção, alteração e remoção de dados que podem ser listados em forma de tabela. O código HTML/Javascript desse tipo de aplicação é bastante semelhante, quaisquer que sejam os tipos ou quantidades de dados da tabela. Assim, um único template (modelo) pode ser reaproveitado para gerar diferentes aplicações. Além disso, é possível gerar automaticamente as partes de código que mudam de uma aplicação para outra.

Neste trabalho, você vai desenvolver um gerador de aplicações Web simples que, a partir de um template e de configurações do usuário, gera o código index.html para a aplicação Web desejada. Uma explicação ilustrada deste trabalho está disponível nestes (slides)[https://docs.google.com/presentation/d/1teu5US1i0y7EVxi9bnK-oben0RqlUGdVEFcChdhK3b8/edit?usp=sharing] vistos em aula.

## Requisitos

- Para resolver o problema acima, você deverá criar uma solução orientada a objetos com interface gráfica. Você pode escolher a linguagem e o toolkit que preferir, desde que seu código possa ser executado em diferentes plataformas.

- A interface do seu programa deverá, no mínimo, oferecer ao usuário as seguintes funcionalidades:
  - Ler arquivo de projeto, que armazena as configurações do usuário para uma determinada aplicação Web que deve ser gerada.
  - Salvar arquivo de projeto, guardando as configurações do usuário para uma determinada aplicação.
  - Configurar título da aplicação Web e os diversos campos da tabela. Cada campo deve ter no mínimo um id e um label, sendo todos de tipo `text` no formulário Web (outros tipos de campos podem ser implementados como extras). As configurações do usuário devem ser mantidas em uma estrutura de dados em memória, enquanto o programa estiver executando. O usuário deverá poder inserir, selecionar, alterar e remover dados desta estrutura quando desejar.
  - Gerar o código index.html da aplicação Web a partir de um template e com as configurações do usuário.
  
- O template a ser utilizado é baseado no código em https://github.com/hitokuno/HTML5-CRUD-localstorage, que você precisará baixar. Apenas o arquivo index.html precisa ser modificado para gerar novas aplicações. Conforme explicado nos slides, há apenas 7 trechos que precisam ser modificados/preenchidos pelo seu programa. Para facilitar seu trabalho, você pode usar o arquivo (template.html)[template.html] fornecido pela professora, contendo os 7 trechos marcados. Também é fornecido um exemplo de arquivo (index.html)[index.html] gerado a partir deste template. Você pode alterar o template ou criar novos templates.

- Você deve desenvolver o programa incrementalmente, fazendo commits frequentes no repositório. Note que boa parte do trabalho se resume a manipular arquivos, strings e objetos que representam e armazenam as configurações. Esta parte é independente de interface com o usuário.

- O trabalho pode ser feito em duplas, mas neste caso deverá implementar extras. Um ótimo extra é implementar outros tipos de campos no formulário Web, por exemplo `radio buttons`. Para isso, você terá que estudar um pouco sobre [HTML Forms Input Types](https://www.w3schools.com/html/html_form_input_types.asp). O programa original, em https://github.com/hitokuno/HTML5-CRUD-localstorage, usa `radio buttons` e ilustra como manipulá-los no código correspondente em Javascript. O template.html pode ser reusado mesmo com novos tipos de campos - o que muda é o código gerado para preencher os 7 trechos.




