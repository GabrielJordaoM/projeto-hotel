# Projeto Final - Sistema de Reservas de Hotel
Projeto final de Linguagem de Programação do curso de Análise e Desenvolvimento de sistemas (ADS) - 2º Semestre - Noite. O projeto denominado _Swiftinn_ é um sistema de manejamento de reservas de hotel. 

O sistema permite que o usuário visualize os quartos disponiveis, reserve quartos e realize check-in e check-out de suas reservas. 

## Por que usar C :

A linguagem de programação C é escolhida por diversos motivos, sua eficiência e desempenho notáveis a tornam ideal para o desenvolvimento de software rápido e de baixo nível. A sintaxe simples facilita a aprendizagem, enquanto sua portabilidade permite a execução em diferentes sistemas. A linguagem C é amplamente utilizada em sistemas embarcados devido à sua proximidade com o hardware além de sua flexibilidade, proporcionando controle direto sobre a memória que a torna valiosa para programadores que buscam equilíbrio entre abstração e controle. _Em resumo, C é uma escolha versátil, combinando eficiência, simplicidade e flexibilidade._

## -- Instalação de IDE --
Todo codigo programado a seguir foi feito e utilizado via IDE multiplataforma da JetBrains : 

**CLion** 
  >https://www.jetbrains.com/pt-br/clion/download/#section=windows - Link direto

**Tutorial de download** 
  >https://ics.uci.edu/~pattis/common/handouts/cygwinclion/clion.html

## -- Instalação de IDE --
Todo codigo programado a seguir foi feito e utilizado via IDE multiplataforma da JetBrains : 

**CLion** 
  >https://www.jetbrains.com/pt-br/clion/download/#section=windows - Link direto

**Tutorial de download** 
  >https://ics.uci.edu/~pattis/common/handouts/cygwinclion/clion.html


## Status do projeto 
  ### ✔️ Projeto pronto para entrega [02/12/23]
  ### ❗  Troubleshooting de integração de sistemas [01/12/23]

# --Inicio do programa--

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

### 5 - Sair
A ultima opção do menu, use esta opção quando quiser encerrar suas ações dentro do programa.
