#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "header.h"

int main() {
  initialize_visualization();
  Worm* my_worm = new Worm();
  
  while(simulation_is_running()) {
    my_worm->update_network();
    my_worm->update_positions();
    update_visualization(my_worm);
  }
  
  terminate_visualization();
  return 0;
}
