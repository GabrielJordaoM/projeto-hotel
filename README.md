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

## Passo a passo para a execução do programa.

[1.] Após a intalação do compilador de C citado na etapa anterior, fazer o download da pasta PROJETO_HOTEL - importante que a pasta seja baixada no (C:) e que o nome da pasta não seja alterada para que o sistema seja executado de forma correta.

[2.] Dentro da pasta PROJETO_HOTEL vocÊ irá encontrar o arquivo executável com nome de Hotel_Maresia.exe, ele abrirá direto no Prompt de Comando e vocÊ poderá utilizar os sistemas direto desse arquivo.

[3.] Para encerrar o programa basta seguir os botões de saída dentro do próprio programa.

## Menu principal do sistema de Hotel Maresia
  >O menu padrão para os funcionários do hotel, dele é possivel acessar qualquer um dos sistemas subsequentes

  ![WhatsApp Image 2023-12-02 at 20 56 47](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/e6f358b3-3df5-4e84-a97b-35d7901cc6fa)

![checkinn](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/d3690eb7-cabd-43d8-86b4-32e35de269bd)

# Check-Inn - Sistema de Reservas de Hotel
O projeto denominado _Checkinn_ é um sistema de manejamento de reservas de hotel. 

O sistema permite que o usuário visualize os quartos disponiveis, reserve quartos e realize check-in e check-out de suas reservas. 

# Inicio do programa

## 🔨 Funcionalidades 
### 1 - Visualizar Quartos :
Primeira opção a aparecer no menu, nela você poderá fazer sua reserva após digitar o número do quarto, seu nome e a quantidade de dias.
  >Quartos disponiveis

  ![opção 1 com todos os quartos disponiveis](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/8ed806d1-e84f-44f1-9bce-350146797a9c)

  >Quartos disponiveis e ocupados com check-in já feito

  ![opcao 1 quando o quarto esta ocupado e com check in feito](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/b6380583-424f-4690-82d9-3147943359e5)

  >Quartos disponiveis e reservados

  ![opcao 1 quando o quarto esta reservado ](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/01687fb8-ae1b-405c-b080-55afaf7d3d2c)

  
### 2 - Reservar Quarto :
Segunda opção a aparecer no menu, faz a reserva de um quarto ainda não ocupado. 
  >Digite as informações necessárias

  ![opcao 2 com infos preenchidas](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/c1ffb548-880c-4736-980f-0e37be277cf7)

Mensagens de erro de cadastro 
  >Numero de quarto inválido

  ![opção 2 com numero de quarto inválido (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/5b796e42-61b5-4ad1-8d88-d7706fb0d586)

  >Quarto já reservado

  ![opcao 2 quando seleciona quarto ja existente (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/8e96b623-10d2-409b-a073-4be3d55dfeb9)

### 3 - Realizar check-in :
Terceira opção a aparecer no menu, cria um check-in de um quarto já reservado. 
  >Check-in realizado com sucesso

  ![opcao 3 check in realizado com sucesso](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/a577a9f4-ebdf-4ece-a3c5-fe1dc24c55be)

Mensagens de erro de check-in
  >Quarto não reservado 

  ![opcao 3 check in quando nao ha reserva para o quarto selecionado (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/d0658f91-390f-4901-88a9-7347014ddbfe)

  >Check-in já realizado
  
  ![opcao 3 quando ja foi feito check in (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/fcc8795e-5ab0-4a5c-87c7-f8b4cc3638f6)

  >Quarto inválido

  ![opcao 3 quando o numero de quarto para check in é invalido (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/4de50848-2535-4f17-843a-87599781a8d4)


### 4 - Realizar check-out :
Quarta opção a aparecer no menu, faz o check-out do quarto utilizado e o libera na visualização de quartos. 
  >Check-out realizado com sucesso

  
![opcao 4 quando o check out é feito com sucesso](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/d4b9b7d4-a2d9-4930-a546-a2c672ce24aa)

Mensagens de erro de check-in
  >Não há check-in feito para check-out

  ![opcao 4 quando o check in nao foi realizado antes do check out (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/aee1d196-33eb-4914-a6a3-b612871e9a26)

  >Quarto não reservado, check-out bloqueado

  ![opcao 4 quando o quarto nao esta reservado (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/f8333883-5bf4-490f-bbf8-965f11b68d75)

  >Quarto inválido

  ![opcao 4 quando o numero de quartos é invalido (ERRO)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/0b948def-f179-4a8e-9710-3da302454f64)


### 0 - Sair
A ultima opção do menu, use esta opção quando quiser encerrar suas ações dentro do programa.

![opcao 0 para sair do sistema de reservas](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/244e3251-2788-4bf9-b171-12a0a74fe598)


![Untitled-2](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/66db2eb7-8ec2-4d14-a854-6dec3bbbe17a)
# Supply Savvy - Sistema de Estoque de Hotel
O projeto denominado _Supply Savvy_ é um sistema de manejamento de estoque de hotel. 

O sistema permite que o usuário cadastre um novo produto e seus detalhes, imprima detalhes de um produto especifico ou de todos do estoque e adicionar ou remover quantidades de produtos.  

# Inicio do programa

## 🔨 Funcionalidades 
### 1 - Cadastrar novo produto :
Primeira opção a aparecer no menu, nela você poderá ver se o codigo do produto já existe e cadastrar novos produtos.
  >Cadastro de produtos
  
  ![WhatsApp Image 2023-12-02 at 20 55 38 (4)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/ba6c279d-3547-4e73-bfcf-92c2809fade5)

Mensagem de erro
  >Caso o código do produto já exista 

  ![WhatsApp Image 2023-12-02 at 20 55 38](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/259eaed2-f20e-4f5a-8f1c-5c1c59d959a3)


### 2 - Imprimir detalhes de um produto :
Segunda opção a aparecer no menu, mostra os detalhes do produto escolhido 
  >Digite o código do produto
  
  ![WhatsApp Image 2023-12-02 at 20 55 39](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/c9dd7f6d-e661-4e01-8271-20256f6e0741)

Mensagens de erro de cadastro 
  >Codigo não-existente

  ![WhatsApp Image 2023-12-02 at 20 55 38 (2)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/96122671-ff51-43e2-9317-18ca9e2013d4)

### 3 - Imprimir detalhes de todos os itens :
Terceira opção a aparecer no menu, mostra detalhes de todos os itens cadastrados no estoque.
  >Visualização 

  ![WhatsApp Image 2023-12-02 at 20 55 37 (1)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/0d24f55c-e66b-48df-8287-b1d7c265cada)


### 4 - Adicionar quantidade de produto :
Quarta opção a aparecer no menu, adiciona mais quantidade de produtos aos ja cadastrados. 
  >Digite o codigo do produto

  ![WhatsApp Image 2023-12-02 at 20 55 38 (1)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/a4565e38-e2f6-456a-a97f-33b1818bb4bd)

Mensagens de erro de check-in
  >Código de produto não encontrado

  ![WhatsApp Image 2023-12-02 at 20 55 38 (2)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/818be0b2-6b00-4ad5-93c6-aa0879edd221)



### 5 - Remover quantidade de produto :
Quinta opção a aparecer no menu, remove a quantidade de produtos dos ja cadastrados. 
  >Digite o codigo do produto 

  ![WhatsApp Image 2023-12-02 at 20 55 39 (1)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/233efcbb-f881-48cc-b451-cdf775714fc6)


Mensagens de erro de check-in
  >Código de produto não encontrado

  ![WhatsApp Image 2023-12-02 at 20 55 38 (2)](https://github.com/GabrielJordaoM/projeto-hotel/assets/69699073/818be0b2-6b00-4ad5-93c6-aa0879edd221)


### 6 - Sair
A ultima opção do menu, use esta opção quando quiser encerrar suas ações dentro do programa.

# Autores 
| Código                         | Readme                         | Test/Bugfix                  |
|--------------------------------|--------------------------------|------------------------------|
| Ana Carolina Ramos Tagliaferro | Bruno Gabriel Noronha Veiga    | Danilo Augusto do Nascimento |
| Caio Lemes                     | Bruno Ricieri de Castro Zambon | Leonardo Miguel Prete Santos |
| Gabriel Jordão Marques         | -------                        | ----------                   |
| Giovanna Gutierrez             | -------                        | ----------                   |
