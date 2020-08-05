## :tomato: Capítulo 1
#  Primeiros conceitos de C
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
    // printf("42\n"); 
  */
}
```