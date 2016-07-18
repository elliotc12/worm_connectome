#include <cstdlib>
#include <cstdio>
#include <cstring>

#include "connectome.h"
#include "header.h"

Worm::Worm() {
  network = (int*) malloc(NUM_NEURONS * sizeof(int));
  x = (int*) malloc(NUM_NEURONS * sizeof(int));
  y = (int*) malloc(NUM_NEURONS * sizeof(int));
  
  for (int i=0; i < NUM_NEURONS; i++) {
    network[i] = 0;
  }

  for (int i=0; i < NUM_NEURONS; i++) {
    x[i] = 0;
    y[i] = 0;
  }
  
}

void Worm::update_network() {
  int new_network_state[NUM_NEURONS];
  for (int i=0; i < NUM_NEURONS; i++) { new_network_state[i] = 0; }
  for (int i=0; i < NUM_NONMOTOR_NEURONS; i++) { // iterate over non-motor neurons
    if (network[i] >= THRESHOLD) {
      printf("%d firing!\n", i);
      for (int j=0; j<num_connections[i]; j++) { // neuron fires
  	new_network_state[connectome[i][2*j]] += connectome[i][2*j+1]; // fix this sometime, connectome should not have weights
      }
    }
  }
  memcpy(network, &new_network_state, NUM_NEURONS*sizeof(int));
}

void Worm::update_positions() {
}
