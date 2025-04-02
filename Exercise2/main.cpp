#include <iostream>
#include "Eigen/Eigen"
#include "funzioni.hpp"
using namespace std;
using namespace Eigen;





//funzione soluzione PALU 



int main()
{
	Vector2d sol;
    sol <<-1.0000e+0, -1.0000e+00; 

	Matrix2d A1;
    A1 << 5.547001962252291e-01, -3.770900990025203e-02,
          8.320502943378437e-01, -9.992887623566787e-01;
    Vector2d b1;
    b1 << -5.169911863249772e-01, 1.672384680188350e-01;
	
	double err_rel_PALU;
    double err_rel_QR;
    solvePALU(A1,b1,sol,err_rel_PALU);
    solveQR(A1,b1,sol,err_rel_QR);
    cout<<"err PALU es 1 "<<err_rel_PALU<<endl;
    cout<<"err QR es 1 "<<err_rel_QR<<endl;

    
	
	
	Matrix2d A2;
    A2 << 5.547001962252291e-01, -5.540607316466765e-01,
          8.320502943378437e-01, -8.324762492991313e-01;
    Vector2d b2;
    b2 << -6.394645785530173e-04, 4.259549612877223e-04;
    solvePALU(A2,b2,sol,err_rel_PALU);
    solveQR(A2,b2,sol,err_rel_QR);
    cout<<"err PALU es 2 "<<err_rel_PALU<<endl;
    cout<<"err QR es 2 "<<err_rel_QR<<endl;
	
	
	Matrix2d A3;
    A3 << 5.547001962252291e-01, -5.547001955851905e-01,
          8.320502943378437e-01, -8.320502947645361e-01;
    Vector2d b3;
    b3 << -6.400391328043042e-10, 4.266924591433963e-10;
    solvePALU(A3,b3,sol,err_rel_PALU);
    solveQR(A3,b3,sol,err_rel_QR);
    cout<<"err PALU es 3 "<<err_rel_PALU<<endl;
    cout<<"err QR es 3 "<<err_rel_QR<<endl;
	
	
    return 0;
}