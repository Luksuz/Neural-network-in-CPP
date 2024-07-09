#ifndef Linear_H
#define Linear_H

#include "Neuron.h"
#include <vector>

using namespace std;

class Linear
{
private:
    vector<Neuron> neurons;
    vector<double> a;

public:
    Linear(int in_features, int n_neurons);
    vector<vector<double>> forward(vector<vector<double>> x);
};

#endif