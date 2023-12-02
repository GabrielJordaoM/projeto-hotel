![logohotel](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/6a8a52b3-eee1-4029-b3fc-de3979784a94)

# Hotel Maresia - Projeto final LP
Experimente o luxo à beira-mar no Hotel Maresia. Quartos elegantes com vistas deslumbrantes, restaurante à beira-mar "Sabor do Mar" e piscina infinita. Explore a natureza local com nosso guia personalizado ou relaxe no spa Maresia. Uma experiência única de tranquilidade e sofisticação. _Bem-vindo ao seu refúgio à beira-mar._

## O projeto
O projeto final de Linguagem de Programação do curso de Análise e Desenvolvimento de sistemas (ADS) - 2º Semestre - Noite se consiste na criação de dois diferentes sistemas para manejamento de partes do hotel ficticio chamado "hotel Maresia". Onde foram criados o sistema de manejamento de estoque de produtos do hotel e o sistema de reservas de quartos do hotel. 

## Indice

## Status do projeto 
  ### ✔️ Projeto pronto para entrega [02/12/23]
  ### ❗  **NÃO MUDAR O NOME DO ARQUIVO** [02/12/23]
  ### ❗  Troubleshooting de integração de sistemas [01/12/23]

## Por que usar C :

A linguagem de programação C é escolhida por diversos motivos, sua eficiência e desempenho notáveis a tornam ideal para o desenvolvimento de software rápido e de baixo nível. A sintaxe simples facilita a aprendizagem, enquanto sua portabilidade permite a execução em diferentes sistemas. A linguagem C é amplamente utilizada em sistemas embarcados devido à sua proximidade com o hardware além de sua flexibilidade, proporcionando controle direto sobre a memória que a torna valiosa para programadores que buscam equilíbrio entre abstração e controle. _Em resumo, C é uma escolha versátil, combinando eficiência, simplicidade e flexibilidade._

## Instalação e instrução para utilizar o executavel 
O projeto necessita de um compilador MinGW para execução correta, o link abaixo mostra passo a passo a instalação
  >https://www.youtube.com/watch?v=sXW2VLrQ3Bs

![checkinn](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/d3690eb7-cabd-43d8-86b4-32e35de269bd)

# Check-Inn - Sistema de Reservas de Hotel
O projeto denominado _Checkinn_ é um sistema de manejamento de reservas de hotel. 

O sistema permite que o usuário visualize os quartos disponiveis, reserve quartos e realize check-in e check-out de suas reservas. 

# Inicio do programa

## 🔨 Funcionalidades 
### 1 - Visualizar Quartos :
Primeira opção a aparecer no menu, nela você poderá fazer sua reserva após digitar o número do quarto, seu nome e a quantidade de dias.
  >Visualização (print)

### 2 - Reservar Quarto :
Segunda opção a aparecer no menu, faz a reserva de um quarto ainda não ocupado. 
  >Escolha um quarto vago
  >>Digite o nome
  >>>Digite a quantidade de dias
  >>>>Mensagem de confirmação de reserva

Mensagens de erro de cadastro 
  >Quarto fora dos parametros
  >>Nome invalido
  >>>Dias invalidos

### 3 - Realizar check-in :
Terceira opção a aparecer no menu, cria um check-in de um quarto já reservado. 
  >Digite o numero do quarto
  >>Mensagem de confirmação de reserva

Mensagens de erro de check-in
  >Quarto não reservado 

### 4 - Realizar check-out :
Quarta opção a aparecer no menu, faz o check-out do quarto utilizado e o libera na visualização de quartos. 
  >Digite o numero do quarto
  >>Mensagem de confirmação de check-out

Mensagens de erro de check-in
  >Não da para dar check-out em um quarto que não tenha check-in
  >Não da para dar check-out em um quarto não reservado

### 0 - Sair
A ultima opção do menu, use esta opção quando quiser encerrar suas ações dentro do programa.

![Untitled-2](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/66db2eb7-8ec2-4d14-a854-6dec3bbbe17a)
# Supply Savvy - Sistema de Estoque de Hotel
O projeto denominado _Supply Savvy_ é um sistema de manejamento de estoque de hotel. 

O sistema permite que o usuário cadastre um novo produto e seus detalhes, imprima detalhes de um produto especifico ou de todos do estoque e adicionar ou remover quantidades de produtos.  

# Inicio do programa

## 🔨 Funcionalidades 
### 1 - Cadastrar novo produto :
Primeira opção a aparecer no menu, nela você poderá ver se o codigo do produto já existe e cadastrar novos produtos.
  >Cadastrar nome do produto
  >>Digitar a descrição do produto
  >>>Digitar preço do produto
  >>>>Digitar a quantidade dos produtos

Mensagem de erro
  >Caso o código do produto não exista

### 2 - Imprimir detalhes de um produto :
Segunda opção a aparecer no menu, mostra os detalhes do produto escolhido 
  >Digite o código do produto
  >>Visualização 

Mensagens de erro de cadastro 
  >Codigo não-existente

### 3 - Imprimir detalhes de todos os itens :
Terceira opção a aparecer no menu, mostra detalhes de todos os itens cadastrados no estoque.
  >Visualização 


### 4 - Adicionar quantidade de produto :
Quarta opção a aparecer no menu, adiciona mais quantidade de produtos aos ja cadastrados. 
  >Digite o codigo do produto 
  >>Digite a quantidade de produtos que deseja adicionar
  >>>Mensagem de quantidade atualizada

Mensagens de erro de check-in
  >Código de produto não encontrado

### 5 - Remover quantidade de produto :
Quinta opção a aparecer no menu, remove a quantidade de produtos dos ja cadastrados. 
  >Digite o codigo do produto 
  >>Digite a quantidade de produtos que deseja remover
  >>>Mensagem de quantidade atualizada

Mensagens de erro de check-in
  >Código de produto não encontrado

### 6 - Sair
A ultima opção do menu, use esta opção quando quiser encerrar suas ações dentro do programa.

# Autores 
| Código                         | Readme                         | Test/Bugfix                  |
|--------------------------------|--------------------------------|------------------------------|
| Ana Carolina Ramos Tagliaferro | Bruno Gabriel Noronha Veiga    | Danilo Augusto do Nascimento |
| Caio Lemes                     | Bruno Ricieri de Castro Zambon | Leonardo Miguel Prete Santos |
| Gabriel Jordão Marques         | -------                        | ----------                   |
| Giovanna Gutierrez             | -------                        | ----------                   |
