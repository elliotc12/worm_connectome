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
  int* x;
  int* y;
};

/* ############### Visualization Fns ################# */
void initialize_visualization();
void update_visualization(Worm* worm);
int  simulation_is_running();
void terminate_visualization();
