# Sistema de Gerenciamento de Estacionamento 🚗

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Kanban](https://img.shields.io/badge/Methodology-Kanban-blue)

### 📋 Sobre o Projeto
Este sistema **foi o primeiro projeto que desenvolvi na graduação**, criado durante a disciplina de **Projeto de Software**.

O desafio foi aplicar **Lógica de Programação** pura para resolver um problema real de controle de fluxo e tarifação. Além do aprendizado técnico, o desenvolvimento foi gerenciado utilizando a metodologia ágil **Kanban**, o que me introduziu desde cedo à organização de tarefas e prazos.

O software simula a rotina completa de um estacionamento, desde a entrada do veículo até o cálculo final do valor a ser pago.

### 🚀 Funcionalidades
* **Sistema de Login:** Autenticação simples para acesso administrativo.
* **Gestão de Vagas:** Controle de lotação separado por categorias (Pequeno, Médio, Grande e Moto), limitando a 25 vagas cada.
* **Cálculo de Tarifas:** Lógica condicional para calcular o valor a pagar com base na diferença entre horário de entrada e saída (usando a biblioteca `time.h`).
* **Relatório de Caixa:** Exibição do faturamento acumulado durante a execução do programa.

### 🛠️ Tecnologias e Conceitos Aplicados
* **Linguagem:** C / C++ (Foco em lógica estruturada).
* **Metodologia:** Kanban (Organização e fluxo de trabalho).
* **Estrutura de Dados:** Uso de `Structs` e vetores para gerenciamento de memória.
* **Bibliotecas:** `time.h` (Manipulação temporal), `windows.h` (Interface de console).

### ⚙️ Como rodar
Este é um programa de console desenvolvido para ambiente **Windows**.

1. Clone este repositório.
2. Compile o arquivo `main.cpp` utilizando um compilador C/C++ (GCC, MinGW) ou uma IDE (Dev-C++, Code::Blocks).
3. Execute o arquivo gerado `.exe`.

**Nota:** O sistema utiliza comandos específicos da API do Windows (`system("cls")`, `Sleep()`) para melhor experiência visual no console.

---
Desenvolvido por **[Leandro Felipe](https://www.linkedin.com/in/leandro-felipe-reis-rodrigues)**
