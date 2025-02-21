# Carrinho Autônomo com Arduino

## Descrição

Este projeto é um carrinho autônomo desenvolvido utilizando o Arduino, circuitos eletrônicos e motores **stepper**. O objetivo principal é criar um veículo capaz de navegar por um ambiente, evitando obstáculos, como paredes, utilizando sensores, com a finalidade de transportar medicamentos para pacientes em hospitais.

## Objetivos

- **Movimento Autônomo**: O carrinho se move utilizando motores **stepper**, controlados pelo Arduino.
- **Evitação de Obstáculos**: Equipado com sensores, o carrinho é capaz de detectar e evitar obstáculos durante o trajeto.
- **Aplicação Hospitalar**: A ideia é criar um protótipo capaz de transportar medicamentos para pacientes, reduzindo a necessidade de intervenção humana para transporte dentro do ambiente hospitalar.

## Componentes Utilizados

- **Arduino Mega**: Para o controle central do carrinho.
- **Motores Stepper**: Para movimentar o carrinho em diferentes direções.
- **Sensores Ultrasonicos**: Para detectar obstáculos e evitar colisões.
- **Drivers de Motor**: Para controlar a velocidade e direção dos motores stepper.
- **Estrutura do Carrinho**: Peças de circuito e outros materiais para montar a base do carrinho.

## Funcionalidade

1. **Movimento**: O carrinho pode se mover para frente, para trás e fazer curvas, tudo controlado por sinais enviados do Arduino para os motores stepper.
2. **Detecção de Obstáculos**: Sensores de ultrassom instalados no carrinho detectam objetos à frente. Se um obstáculo for detectado, o carrinho muda de direção automaticamente para evitá-lo.
3. **Autonomia**: O carrinho pode percorrer áreas hospitalares sem a necessidade de intervenção humana, entregando medicamentos diretamente aos pacientes.

## Como Funciona

O carrinho é programado com um código em Arduino que utiliza os sensores de ultrassom para identificar paredes ou outros obstáculos. Quando um obstáculo é detectado, o carrinho automaticamente ajusta seu percurso, garantindo que ele não colida com nenhum objeto. Ele pode navegar em corredores e entregar os medicamentos de forma autônoma.

## Como Rodar o Projeto

1. **Conecte os Componentes**: Siga o diagrama de ligação dos componentes (Arduino, sensores e motores stepper).
2. **Carregue o Código**: Utilize a IDE do Arduino para carregar o código no seu Arduino Uno.
3. **Testes**: Realize testes para ajustar o comportamento do carrinho, principalmente a distância de detecção dos sensores de ultrassom.
