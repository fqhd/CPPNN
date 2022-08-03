#pragma once
#include <array>

class NeuralNetwork {
public:
    NeuralNetwork(int* model, int numLayers);
    ~NeuralNetwork();
    float* predict(float* inputs, int numInputs);
    int getNumOutputs();
    int getNumInputs();
    int getNumWeights();
    int getNumBiases();

    float* weights;
    float* biases;

private:

    float* realtimeData; // This is used internally to feed forward the network.
    
    int* model;
    int numWeights;
    int numBiases;
    int numLayers;
    int numOutputs;
    int numInputs;

};