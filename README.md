<h3 align="center">
  Linguagem C
</h3>

<p align="center">“Se você quiser fazer uma torta de maçã do nada, primeiro tem que inventar o universo”!</blockquote>

<p align="center">
  <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/rocketseat/bootcamp-gostack-desafio-01?color=%2304D361">

  <img alt="License" src="https://img.shields.io/badge/license-MIT-%2304D361">

  <a href="https://github.com/fdAssis/desafio-01/stargazers">
    <img alt="Stargazers" src="https://img.shields.io/github/stars/fdAssis/desafio-01?style=social">
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
printf("Grandes poderes trazem grandes responsabilidades");

system("pause");
...
```
- A "arrumação" do código é arbitrária e depende das preferências de cada programador.

- C faz distinção entre minúsculas e maiúsculas - **Case Sensitive** -.

- As *string*s em C são delimitadas pelo caractere aspas **"**.

- Para escrever uma mensagem na tela usa-se a função **printf()**.
```c
void main() {
  printf("Não se apegue ás coisas as vezes é preciso se desprender");

}
```
- A funções **printf** não faz parte da lingugem C. Pertence à sua extensa biblioteca de funções. Para termos acesso a esta e a outras funções de entrada/saída devemos incluir nos nossos programas o arquivo **stdio.h**.
```c
#include <stdio.h>

void main(){
  printf("Posso fazer isso o dia todo."); 

}
```
- As linhas começadas por **#** ( **#include, #define, etc.** ) não são C, mas sim diretivas ao pré-processador. Por isso não devem ser seguidas de ponto-e-vírgula.

- A representação de caracteres especias ou de caracteres que, de outra forma, seriam dificeis de representar faz-se através de um conjunto de dois ou mais caracteres, sendo em geral o primeiro caractere a barra invertida ( **\ - Backslash** ).
```c
...
// Forma de escrever uma string em que as aspas sejam um caractere não delimitador 
printf("Chama no \"Zap"\ bb");
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
|


- Os **comentários** são escritos entre **- /*** e ***/ -** para comentar blocos ou **//** para comentar somente uma linha e são ignorados pelo compilador (a menos que se encontrem dentro de *string* ).
***Não pode existir comentários dentro de comentários***
```c
void main() {
  /* inicio do comentario 1
    /* printf("Ola\n"); Comentário Interno */
  */  
}
```

## :memo: Licença

Esse projeto está sob a licença MIT.

---