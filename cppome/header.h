#ifndef _HEADER
#define _HEADER
const int THRESHOLD = 30;

/* ################# Worm ##################### */
class Worm {
 public:
  //Functions
  Worm();
  void update_network();
  void update_positions();
  //Members
  int* network;
  double* x;
  double* y;
};

/* ############### Visualization Fns ################# */
void initialize_visualization();
void update_visualization(Worm* worm);
int  simulation_is_running();
void terminate_visualization();
#endif
