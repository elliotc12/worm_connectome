const int THRESHOLD = 30;

/* ############### Prototypes ################# */
void initialize_visualization();
void update_visualization(int* network_state, int num_neurons);
int  simulation_is_running();
void terminate_visualization();

/* ################# Worm ##################### */
class Worm {
 public:
  int* network;
  int x;
  int y;
};

