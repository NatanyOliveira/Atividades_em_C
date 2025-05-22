#  A Internet das Nuvens - Gloud Computing

## Descrição do problema

A empresa Gloud Computing fornece aplicações em diversos servidores espalhados pelo mundo. Cada cliente deseja utilizar certas aplicações, e se conecta a **todos os servidores que disponibilizam ao menos uma das aplicações que ele precisa**. O objetivo é contar o **número total de conexões únicas** entre clientes e servidores.

## Regras

- Um cliente se conecta a **todos os servidores** que oferecem **pelo menos uma aplicação** requisitada.
- Uma mesma conexão cliente-servidor conta **apenas uma vez** (mesmo que várias aplicações coincidam).
- O programa lê múltiplos casos de teste e para quando os valores de entrada forem `0 0`.

## Entrada

Cada caso começa com dois inteiros:
- `N`: número de servidores (0 ≤ N ≤ 200)
- `M`: número de clientes (0 ≤ M ≤ 200)

Em seguida:
- Para cada servidor: número de aplicações fornecidas e nomes dessas aplicações;
- Para cada cliente: número de aplicações desejadas e nomes dessas aplicações.

A entrada termina com `0 0`.

## Saída

Para cada caso de teste, o programa imprime o número total de conexões distintas entre clientes e servidores.
