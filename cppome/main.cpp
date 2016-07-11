#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "connectome.h"
#include "header.h"

void initialize_network(int* network_state) {
  for (int i=0; i < NUM_NEURONS; i++) {
    network_state[i] = THRESHOLD;
  }
}

void update_network(int* network_state) {
  int new_network_state[NUM_NEURONS];
  for (int i=0; i < NUM_NEURONS; i++) { new_network_state[i] = 0; }
  for (int i=0; i < NUM_NONMOTOR_NEURONS; i++) { // iterate over non-motor neurons
    if (network_state[i] >= THRESHOLD) {
      printf("%d firing!\n", i);
      for (int j=0; j<num_connections[i]; j++) { // neuron fires
  	new_network_state[connectome[i][2*j]] += connectome[i][2*j+1]; // fix this sometime, connectome should not have weights
      }
    }
  }
  memcpy(network_state, &new_network_state, NUM_NEURONS*sizeof(int));
}

int main() {
  int *network_state = (int*) malloc(NUM_NEURONS * sizeof(int));
  initialize_network(network_state);
  initialize_visualization();
  
  while(simulation_is_running()) {
    update_network(network_state);
    update_visualization(network_state, NUM_NEURONS);
  }
  
  terminate_visualization();
  return 0;
}
