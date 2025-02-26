#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

// Function to calculate prey and predator populations
void eulerMethod(double alpha, double beta, double delta, double gamma, double h, int T, 
                 double x0, double y0, vector<double>& x, vector<double>& y, vector<double>& time) {
    // Initial conditions
    x[0] = x0;
    y[0] = y0;
    
    // Euler's method for predator-prey model
    for (int t = 1; t < T; ++t) {
        double dx_dt = alpha * x[t-1] - beta * x[t-1] * y[t-1];
        double dy_dt = delta * x[t-1] * y[t-1] - gamma * y[t-1];
        
        x[t] = x[t-1] + h * dx_dt;
        y[t] = y[t-1] + h * dy_dt;w
        time[t] = t * h; // Time at each step
    }
}

int main() {
    // Parameters
    double alpha = 0.1; // Natural growth rate of prey
    double beta = 0.02; // Rate at which predators kill prey
    double delta = 0.01; // Rate at which predators increase by consuming prey
    double gamma = 0.1; // Natural death rate of predators
    double h = 0.1; // Step size (0.1 years)
    int T = 100; // Number of time steps (100 steps for 1 year)
    
    // Initial populations
    double x0 = 40; // Initial prey population
    double y0 = 9; // Initial predator population
    
    // Vectors to store results
    vector<double> x(T), y(T), time(T);
    
    // Call the function to apply Euler's method
    eulerMethod(alpha, beta, delta, gamma, h, T, x0, y0, x, y, time);
    
    // Writing results to a file
    ofstream outFile("predator_prey_population.csv");
    outFile << "Time,Prey Population,Predator Population\n";
    for (int i = 0; i < T; ++i) {
        outFile << time[i] << "," << x[i] << "," << y[i] << "\n";
    }
    outFile.close();
    
    // Output the results to console
    for (int i = 0; i < T; ++i) {
        cout << "Time: " << time[i] << " years | Prey: " << x[i] << " | Predator: " << y[i] << endl;
    }

    return 0;
}

