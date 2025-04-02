#pragma once
#include <iostream>
#include "Eigen/Eigen"
#include "funzioni.hpp"
using namespace std;
using namespace Eigen;

int solvePALU(const Matrix2d& A,
    const Vector2d& b,
    const Vector2d& sol,
    double& err_rel_PALU)
{
Vector2d solPALU = A.fullPivLu().solve(b);
err_rel_PALU = (solPALU-sol).norm()/sol.norm();
return 0;
}

//funzione soluzione QR

int solveQR(const MatrixXd& A,
  const VectorXd& b,
  const Vector2d& sol,
  double& err_rel_QR)
{
Vector2d solQR = A.colPivHouseholderQr().solve(b);
err_rel_QR = (solQR-sol).norm()/sol.norm();
return 0;
}