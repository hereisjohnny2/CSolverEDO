#include <iostream>
#include <cstdlib>
#include <cassert>

#include "headers/EDOSolver.hpp"

#include "headers/ForwardEulerSolver.hpp"
#include "headers/RungeKutta.hpp"

#include "headers/CFuncLinear.hpp"
#include "headers/CFuncQuad.hpp"

void EDOSolver::RunSolver() {
    std::cout << "---------------------------------------------------" << std::endl;
    std::cout << "------------------EDOSolver-v.0.5------------------" << std::endl;
    std::cout << "---------------------------------------------------" << std::endl;

    int funcaoEscolha;
    CFunc* funcao;

    do
    {
        std::cout << "\n\t1 - Linear" << std::endl;   
        std::cout << "\t2 - Quadrática" << std::endl;
        std::cout << "\nEscolha o tipo de função: ";
        std::cin >> funcaoEscolha; std::cin.get();
    } while (funcaoEscolha > 2 || funcaoEscolha < 1);
    
    switch (funcaoEscolha)
    {
    case 1:
        funcao = new CFuncLinear;
        break;
    case 2:
        funcao = new CFuncQuad;
        break;
    }

    funcao->DataInput(std::cin, std::cout);

    int solverEscolha;
    AbstractOdeSolver* solver;

    do
    {
        std::cout << "\n\t1 - Euler" << std::endl;   
        std::cout << "\t2 - Runge-Kutta" << std::endl;
        std::cout << "\nEscolha o método do solver: ";
        std::cin >> solverEscolha; std::cin.get();
    } while (solverEscolha > 2 || solverEscolha < 1);
    
    switch (solverEscolha)
    {
    case 1:
        solver = new ForwardEulerSolver;
        break;
    case 2:
        solver = new RungeKutta;
        break;
    }

    solver->DataInput();

    std::cout << "\nResultado do Solver: ";
    std::cout << solver->SolveEquation(funcao) << std::endl;
}