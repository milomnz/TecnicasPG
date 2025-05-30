#include <iostream>
#include <cmath>
using namespace std;

const double Epsilon = 0.0001;
const double ThresholdError = 0.0001;

// ==================== FUNCIONES BASE ====================
double Approx(double x, double m, double A, double B) {
    if(x < -B/A) return 0;
    return pow(A * x + B, m);
}

double DerApprox(double x, double m, double A, double B) {
    if(x < -B/A) return 0;
    return A * m * pow(A * x + B, m-1);
}

double Error(double x, double n, double m, double A, double B) {
    return Approx(x, m, A, B) - pow(x, n);
}

// ==================== AQUÍ ESTÁ EL CÁLCULO DIFERENCIAL ====================
double DerError(double x, double n, double m, double A, double B) {
    // Esta es la derivada de la función de error: E'(x)
    // E'(x) = derivada_aproximacion - derivada_original
    return DerApprox(x, m, A, B) - n * pow(x, n-1);
}

// ==================== BÚSQUEDA DE MÁXIMOS USANDO DERIVADAS ====================
double FindMaximumError(double x0, double x1, double n, double m, double A, double B) {
    cout << "\n=== BUSCANDO MÁXIMO DEL ERROR EN [" << x0 << ", " << x1 << "] ===" << endl;
    
    double x, DerErr;
    int iterations = 0;
    
    // BÚSQUEDA BINARIA: Encuentra donde E'(x) = 0
    do {
        x = (x0 + x1) / 2.0;  // Punto medio
        DerErr = DerError(x, n, m, A, B);  // Evalúa la derivada
        
        cout << "Iteración " << ++iterations << ": x=" << x 
             << ", E'(x)=" << DerErr << endl;
        
        // APLICACIÓN DEL TEOREMA: Si E'(x) < 0, el máximo está a la derecha
        if(DerErr < 0) {
            x0 = x;  // Buscar en [x, x1]
            cout << "  -> E'(x) < 0: función decreciente, máximo a la derecha" << endl;
        } else {
            x1 = x;  // Buscar en [x0, x]  
            cout << "  -> E'(x) > 0: función creciente, máximo a la izquierda" << endl;
        }
        
    } while(fabs(x0 - x1) > Epsilon);
    
    // El máximo está en x donde E'(x) ≈ 0
    double max_error = fabs(Error(x, n, m, A, B));
    cout << "MÁXIMO ENCONTRADO en x=" << x << ", Error máximo=" << max_error << endl;
    
    return max_error;
}