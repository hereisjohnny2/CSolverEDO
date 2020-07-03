# CSolverEDO

Solver básico para equações diferencias ordinárias escrito em C++. 

Atualmente conta com dois métodos numéricos para a a resolução dos problemas: Métodos de Euler e Runge-Kutta4.

As funções a serem resolvidas podem ser incluidas na função ```main()```. A função deve possuir dois parâmetros y e t. Deve ser adicionada como referência nos argumentos dos construtores dos solvers, como é mostrado no código de ```main.cpp```.

Para compilar digite no terminal o comando ```make all``` e para iniciar, digite em seguida ```./EDOSolver```.

## Update 1 - Classe CFunc

O código foi refatorado para receber funções por meio da classe abstrata ```CFunc```. Dessa forma, agora é possível incluir novas funções por meio da herança a partir da classe abstrada. Atualmente, apenas a função
linear foi incluida, na classe ```CFuncLinear```. 

Além disso, as classes ```RungeKutta``` e ```ForwardEulerSolver``` foram modificadas para receber as condições iniciais do problema na sua inicialização.