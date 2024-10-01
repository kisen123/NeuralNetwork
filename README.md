# Custom Neural Network implementation C++ by Kristian Mølbach Lian
### This project contains details about my portfolio project on making a neural network implementation in C++ from scratch



## To-do-list:
### Handle matrices - MAYBE JUST USE LibTorch to skip this step
- Make support for matrices
- Operator overloading in terms of +, -, and * to begin with


### Make class for the neural network itself
- Implement .train() function on the network object itself, or do it similar to .backward() on the loss?


### Make support for Linear-layers (similar to how it is done in PyTorch)
- Error-handle Linear-layers that do not make sense in terms of dimensions.
- Activation functions, how should they be handled. What about their derivatives.

### Handle the prediction layer

### Lessons learned
- Matrix computations should be written in CUDA