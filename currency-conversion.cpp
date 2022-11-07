#include <iostream>
#include <string>
#include <cmath>

int main() {
  double pesos, reais, soles, dollars;
  double pesos_conversion_rate = 0.051;
  double reais_conversion_rate = 0.20;
  double soles_conversion_rate = 0.25;
  
  std::cout << "Enter the number of Columbian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (pesos_conversion_rate * pesos) + (reais_conversion_rate * reais) + 
  (soles_conversion_rate * soles);
  dollars = std::ceil(dollars * 100.0) / 100.0;
  std::cout << "US Dollars = $" << dollars << std::endl;
  return 0;
}

