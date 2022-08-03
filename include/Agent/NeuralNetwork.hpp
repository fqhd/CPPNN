#pragma once
#include <array>
#include <Agent/Random.hpp>

class NeuralNetwork {
public:
    NeuralNetwork(int* model, int numLayers, Random* random);
    ~NeuralNetwork();
    float* predict(float* inputs, int numInputs);
    int getNumOutputs();
    int getNumInputs();
    void mutate(double chance, float range);

private:

    void initRandomWeightsAndBiases();

    float* realtimeData; // This is used internally to feed forward the network.
    float* weights;
    float* biases;
    int* model;
    int numWeights;
    int numBiases;
    int numLayers;
    int numOutputs;
    int numInputs;
    Random* random;
};