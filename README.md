# CSolverEDO

Solver básico para equações diferencias ordinárias escrito em C++. 

Atualmente conta com dois métodos numéricos para a a resolução dos problemas: Métodos de Euler e Runge-Kutta4.

As funções a serem resolvidas podem ser incluidas na função ```main()```. A função deve possuir dois parâmetros y e t. Deve ser adicionada como referência nos argumentos dos construtores dos solvers, como é mostrado no código de ```main.cpp```.

Para compilar digite no terminal o comando ```make file``` e para iniciar, digite em seguida ```./EDOSolver```.