//Numpy array shape [252, 15]
//Min -0.500000000000
//Max 0.500000000000
//Number of zeros 1765

#ifndef W2_H_
#define W2_H_

#ifndef __SYNTHESIS__
weight2_t w2[3780];
#else
weight2_t w2[3780] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, -0.5, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, -0.5, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, -0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, -0.5, -0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.5, -0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, -0.5, -0.5, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, -0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.5, -0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, -0.5, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.5, 0.0, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, -0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, -0.5, 0.0, -0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, 0.5, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, -0.5, 0.5, -0.5, 0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.5, -0.5, -0.5, -0.5, -0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.5, 0.5, 0.0, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, -0.5, -0.5, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, -0.5, -0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, 0.0, 0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, 0.0, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.0, -0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, -0.5, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, -0.5, 0.5, 0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, -0.5, 0.0, -0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, -0.5, 0.5, -0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, 0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, -0.5, -0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.0, 0.5, -0.5, 0.5, 0.0, -0.5, 0.5, 0.5, 0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, -0.5, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.0, -0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, -0.5, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.0, 0.5, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, -0.5, 0.0, -0.5, -0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, -0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.5, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.5, -0.5, -0.5, 0.5, 0.0, -0.5, 0.5, -0.5, 0.0, 0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, -0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.0, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, -0.5, 0.0, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, -0.5, 0.0, 0.0, -0.5, 0.5, -0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, -0.5, -0.5, -0.5, 0.0, 0.5, 0.5, 0.0, 0.0, -0.5, -0.5, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.5, -0.5, 0.5, 0.0, 0.5, 0.5, 0.0, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.5, 0.0, 0.0, -0.5, 0.0, 0.0, -0.5, 0.5, 0.0, -0.5, 0.5, 0.0, 0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, 0.5, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, 0.5, 0.0, 0.0, 0.0, 0.5, -0.5, 0.0, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, -0.5, 0.5, 0.5, 0.5, -0.5, -0.5, 0.0, 0.0, -0.5, -0.5, -0.5, -0.5, 0.0, 0.5, -0.5, -0.5, 0.0, 0.0, 0.0};
#endif

#endif