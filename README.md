# CLI - Gestão de Estacionamento

Sistema de linha de comando (CLI) desenvolvido em C/C++ para o gerenciamento de fluxo e tarifação de veículos em estacionamentos. 

## Engenharia e Funcionalidades

* **Processamento de Tempo Real:** Integração com a biblioteca nativa `time.h` para captura de timestamps. O sistema calcula a permanência exata do veículo subtraindo o tempo de entrada do tempo de saída, aplicando multiplicadores de tarifa dinâmicos baseados no porte do veículo.
* **Persistência em Arquivo (File I/O):** Geração e exportação automática de relatórios de fechamento de caixa. O sistema manipula ponteiros de arquivos para escrever logs permanentes (`.txt`) no disco, garantindo que o fluxo do dia e o lucro total não sejam perdidos ao encerrar a execução.
* **Gerenciamento de Estado em Memória:** Utilização de estruturas de dados (`structs`) e arrays para manter o estado da aplicação durante a execução em tempo real, mapeando placas, modelos e status de pagamento dos clientes ativos.
* **Controle de Acesso:** Implementação de uma camada de autenticação básica para restringir o acesso a funções administrativas, como emissão de relatórios e visualização de receita.

## Stack Técnica

* **Linguagem:** C/C++
* **Interface:** Command Line Interface (CLI)
* **Bibliotecas Core:** `<stdio.h>`, `<time.h>`, `<string.h>`, `<Windows.h>`

## Instalação e Execução

O sistema foi desenvolvido visando ambientes Windows devido à utilização da biblioteca `<Windows.h>` para manipulação de console.

1. Clone este repositório.
2. Compile o arquivo `Estacionamento.cpp` utilizando um compilador C++ (como GCC/MinGW) ou abra o projeto em sua IDE de preferência (Code::Blocks, Dev-C++, Visual Studio).
3. Execute o binário gerado.

---
Desenvolvido por **[Leandro Felipe](https://www.linkedin.com/in/leandro-felipe-reis-rodrigues)**
