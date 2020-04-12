<h3 align="center">
  Linguagem C
</h3>

<p align="center">“Se você quiser fazer uma torta de maçã do nada, primeiro tem que inventar o universo”!</blockquote>

<p align="center">
  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/rocketseat/bootcamp-gostack-desafio-01?color=%2304D361">

  <img alt="License" src="https://img.shields.io/badge/license-MIT-%2304D361">

  <a href="https://github.com/fdAssis/Linguagem_C/stargazers">
    <img alt="Stargazers" src="https://img.shields.io/github/stars/fdAssis/Linguagem_C?style=social">
  </a>
</p>

<p align="center">
  <a href="#pushpin-sobre-o-repositorio">Sobre esse repositorio </a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#memo-licença">Licença</a>
</p>

## :pushpin: Sobre o repositorio
  Uma forma de 

## :tomato: Capítulo 1
###  Primeiros conceitos de C
- Em C, um programa começa com a função **main()**.
```c
void main() {

}
```
- O código a executar é colocado entre **{ }**.
- Um **Bloco** é formado por qualquer conjunto de intruções entre { }.
```c
// Bloco 1
void bloco1() {

}

// Bloco 2
void bloco2() {

}
```
- Cada intrução deve ser seguida de um ponto-e-vírgula **( ; )**.
```c
...
printf("A tecnologia para tornar algo invisível é tão infinitamente complexa que, é muito mais simples e eficaz remover a coisa e esquecer o assunto.");

system("pause");
...
```
- A "arrumação" do código é arbitrária e depende das preferências de cada programador.

- C faz distinção entre minúsculas e maiúsculas - **Case Sensitive** -.

- As *string*s em C são delimitadas pelo caractere aspas **"**.

- Para escrever uma mensagem na tela usa-se a função **printf()**.
```c
void main() {
  printf("Acho mais importante estar feliz do que estar certo");

}
```
- A funções **printf** não faz parte da lingugem C. Pertence à sua extensa biblioteca de funções. Para termos acesso a esta e a outras funções de entrada/saída devemos incluir nos nossos programas o arquivo **stdio.h**.
```c
#include <stdio.h>

void main(){
  printf("Por que as pessoas nascem? por que elas morrem? por que elas passam um tempo tao grande entre o nascimento e a morte usando relogios digitais"); 

}
```
- As linhas começadas por **#** ( **#include, #define, etc.** ) não são C, mas sim diretivas ao pré-processador. Por isso não devem ser seguidas de ponto-e-vírgula.

- A representação de caracteres especias ou de caracteres que, de outra forma, seriam dificeis de representar faz-se através de um conjunto de dois ou mais caracteres, sendo em geral o primeiro caractere a barra invertida ( **\ - Backslash** ).
```c
...
// Forma de escrever uma string em que as aspas sejam um caractere não delimitador 
printf(" \"Amor:"\ muito dolososo. Evite, se possivel");
...
```
***A lista completa dos caracteres que podem ter que ser representados, precedidos do caractere especial *\\* é:***

| Comando | Descrição |
| --- | --- |
| \7 | Bell (sinal sonoro do computador) |
| \a | Bell (sinal sonoro do computador) |
| \b | BackSpace|
| \n | New Line (mudança de linha)|
| \r | Carriagem Return|
| \t | Tabulação Horizontal |
| \v | Tabulação Vertical |
| \\\ | Caractere \ (forma de representar o próprio caractere especial \\)
| \\\' | Caractere ' (aspas simples)|
| \\\" | Caractere " (aspas)|
| \\\? | Caractere ? (ponto de interrogação)|
| \000 | Caractere cujo código ASCII em Octal é 000|
| \Xnn | Caractere cujo código ASCII em Hexadecimal é nn|
| %% | Caractere %|

- Os **comentários** são escritos entre **- /*** e ***/ -** para comentar blocos ou **//** para comentar somente uma linha e são ignorados pelo compilador (a menos que se encontrem dentro de *string* ).
***Não pode existir comentários dentro de comentários***
```c
void main() {
  /* inicio do comentario 1
    /* printf("42\n"); Comentário Interno */
  */  
}
```
## :tomato: Capítulo 2
###  Tipos de Dados Básicos

- **Variáveis**: Uma variável é nada mais que um nome que damos a uma determinada posição de memória para conter um valor de um determinado tipo. O valor contido em uma variável pode variar ao longo da execução de um programa. **Uma variável deve ser sempre definida antes de ser usada.**
```c
...
int i; // i é uma variável do tipo inteiro
char ch1, novo_char; // ch1 e novo_char sao vars do tipo char
float resultado, divisao; // [...]
double total; // [...]
...
```
- **Declaração de variáveis tem que ser sempre realizada antes de sua utilização e antes de qualquer intrução**
```c
void main(){
  Declaração de Variáveis

  Intrução1;
  Intrução1;
  ...
}
```
  - ## **Tipos de dados**
    - Inteiros - **int**
      - As variáveis declaradas do tipo inteiro são utilizadas para armazenar valores que pertencem ao conjunto dos números naturais positivos e negativos. **Ex: 2, -42, +232, 0**,

      **Operações sobre Inteiros**

      | Operação | Descrição | Exemplo | Resultado |
      | --- | --- | ---| --- |
      | + | Soma | 40 + 2 | 42|
      | - | Subtração | 44 - 4 | 42|
      | * | Multiplicação | 7 * 6 | 42|
      | / | Divisão Inteira | 42 / 1 | 42|
      | % | Resto da Divisão Inteira (**Módulo**) | 42 % 2020 | 42|
      ***Qualquer operação entre inteiros(int) retorna um inteiro.***
      ```c
      #include <stdio.h>

      void main() {
         int numero = 321;

         printf("O valor de numero = %d e o valor seguinte = %d\n", num, num+1);
         //..."O valor de numero = <inteiro> e o valor seguinte = <inteiro>

         /*
          <inteiro> representa o valor inteiro que está guardado numa variável, contante ou é o resultado de qualquer expressão.

          O formato de escrita de um Inteiro na função printf é %d.
          O primeiro %d será substituido pelo valor da variável 'numero' e o %d seguinte será substituido pelo resultado da soma de 'numero+1'.
         */
      }
      ```



## :memo: Licença

Esse projeto está sob a licença MIT.

---