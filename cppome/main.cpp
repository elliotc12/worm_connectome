#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "connectome.h"
#include "worm.h"

void initialize_network(int* network_state) {
  for (int i=0; i < NUM_NEURONS; i++) {
    network_state[i] = THRESHOLD;
  }
}

void update_network(int* network_state) {
  int new_network_state[NUM_NEURONS];
  for (int i=0; i < NUM_NEURONS; i++) { new_network_state[i] = 0; }
  printf("new ts\n");
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

void visualize_network(int* network_state) {
  // Update a static image of the worm's neural network based on the innervation
  // state of each neuron
  int sum = 0;
  for (int i=0; i < NUM_NEURONS; i++) {
    sum += network_state[i];
  }
  //printf("total innervation: %d\n", sum);
}

void update_worm(Worm* worm, int* network_state) {
  // Use the states of the muscle neurons in network_state to update the
  // contortion and x,y positions of the worm.
}

void visualize_worm(Worm* worm) {
  // Use the x and y positions (and eventually contortion array) to
  // visualize the worm in its box.
}

int main() {
  int *network_state = (int*) malloc(NUM_NEURONS * sizeof(int));
  Worm *worm = new Worm();
  initialize_network(network_state);
  
  printf("Running network.\n");
  while(1) {
    update_network(network_state);
    update_worm(worm, network_state);
    visualize_network(network_state);
    visualize_worm(worm);
  }
  return 0;
}
