Foram implementadas 2 otimizações ambas voltadas para operações aritiméticas:

Primeiramente operações aritiméticas compostas por 2 operadores imediatos foram substituidas por uma operção de carga do resutaldo ( calculado em tempo de compilação) no registrador destino. Em nossa forma de gerar código essa otimização transforma 2 loads e um instrução aritimética em apenas 1 load. Usamos uma janela de 3 operações para identificar o padrão e conseguimos remover as instruções necessárias em uma passagem.

Além disso foi implementado o reconhecimento de instruções aritméticas sem efeito ( soma/subtração com 0 e multiplicação/divisão por 1). Dessa forma, são decartadas as operações que fazem a carga dos imediatos 0 e 1 que seriam utilizados apenas nessas operações, as instruções ariméticas também são ignoradas e o registrador que seria utilizado para guardar o valor é substituído em todos os usos pelo registrador que armazena o valor que não seria alterado(por exemplo o registrador que teria seu valor somado com 0).

AS alterações foram feitas em cima do código intermediário ILOC, portanto os ganhos para o código ASM gerado são ainda maiores (cada registrador suprimido evita uma sequência de pop e push na pilha, já que fizemos o derramamento de todos os registradores).

-----------------------------------------------------------------------------------------------------
CÓDIGOS EXEMPLO FORNECIDOS:

imediatos:
    ex_imed_1 e ex_imed_2 sao usado para mostrar a otimização em realção a operações aritiméticas entre valores imediatos (constantes). 
    
    Resultados:
        -> ex_imed_1 quando compilado sem a flag -O gera um código ASM de 52 linhas, ao usarmos a flag -O o código gerado passa a ter 22 linhas

        ->ex_imed_2 sem otimização gera um códgio de 80 linhas e com a otimização gera apenas 40 linhas

aritiméticos:
    ex_arit_1-0_1 e ex_arit_1-0_2 são usados para mostrar a otimização em operações aritiméticas denecessárias. (+0, *1,...)

    Resultados:
        ->ex_arit_1-0_1 quando compilado sem a flag de otimização gera um código de 98 linhas, já ao usarmos a flag diminuimos esse número para 67 linhas

        ->ex_arit_1-0_2 quando compilado sem a flag de otimização gera um código de 155 linhas ao usarmos a flag o numero de linhas cai para 83

extrapolado:
    ex_extrapolado é usado para simular um caso onde muitas operações ineficientes sem otimização são executas. Ele apresenta um caso irreal com um loop e muitas operações iguais, porém permite simular uma situação onde temos muito código ineficiente que pode ser otimizado.

    Resultados:
        -> Sem otimização foi gerado um código com 769 linhas, com a flag -O o nosso compilador gerou um código com 310 linhas.
        -> Em relação ao tempo de execução (usando o comando time) o código não otimizado rodou em 148 ms (em média) enquanto o código otimizado executou por completo em apenas 47 ms (também em média)
