enum Neurons
  {ADAL, ADAR, ADEL, ADER, ADFL, ADFR, ADLL, ADLR, AFDL, AFDR, AIAL, AIAR, AIBL,
  AIBR, AIML, AIMR, AINL, AINR, AIYL, AIYR, AIZL, AIZR, ALA, ALML, ALMR, ALNL, ALNR,
  AQR, AS1, AS2, AS3, AS4, AS5, AS6, AS7, AS8, AS9, AS10, AS11, ASEL, ASER, ASGL,
  ASGR, ASHL, ASHR, ASIL, ASIR, ASJL, ASJR, ASKL, ASKR, AUAL, AUAR, AVAL, AVAR, AVBL,
  AVBR, AVDL, AVDR, AVEL, AVER, AVFL, AVFR, AVG, AVHL, AVHR, AVJL, AVJR, AVKL, AVKR,
  AVL, AVM, AWAL, AWAR, AWBL, AWBR, AWCL, AWCR, BAGL, BAGR, BDUL, BDUR, CEPDL, CEPDR,
  CEPVL, CEPVR, DA1, DA2, DA3, DA4, DA5, DA6, DA7, DA8, DA9, DB1, DB2, DB3, DB4, DB5,
  DB6, DB7, DD1, DD2, DD3, DD4, DD5, DD6, DVA, DVB, DVC, FLPL, FLPR, HSNL, HSNR, I1L,
  I1R, I2L, I2R, I3, I4, I5, I6, IL1DL, IL1DR, IL1L, IL1R, IL1VL, IL1VR, IL2DL,
  IL2DR, IL2L, IL2R, IL2VL, IL2VR, LUAL, LUAR, M1, M2L, M2R, M3L, M3R, M4, M5, MCL,
  MCR, MI, NSML, NSMR, OLLL, OLLR, OLQDL, OLQDR, OLQVL, OLQVR, PDA, PDB, PDEL, PDER,
  PHAL, PHAR, PHBL, PHBR, PHCL, PHCR, PLML, PLMR, PLNL, PLNR, PQR, PVCL, PVCR, PVDL,
  PVDR, PVM, PVNL, PVNR, PVPL, PVPR, PVQL, PVQR, PVR, PVT, PVWL, PVWR, RIAL, RIAR,
  RIBL, RIBR, RICL, RICR, RID, RIFL, RIFR, RIGL, RIGR, RIH, RIML, RIMR, RIPL, RIPR,
  RIR, RIS, RIVL, RIVR, RMDDL, RMDDR, RMDL, RMDR, RMDVL, RMDVR, RMED, RMEL, RMER,
  RMEV, RMFL, RMFR, RMGL, RMGR, RMHL, RMHR, SAADL, SAADR, SAAVL, SAAVR, SABD, SABVL,
  SABVR, SDQL, SDQR, SIADL, SIADR, SIAVL, SIAVR, SIBDL, SIBDR, SIBVL, SIBVR, SMBDL,
  SMBDR, SMBVL, SMBVR, SMDDL, SMDDR, SMDVL, SMDVR, URADL, URADR, URAVL, URAVR, URBL,
  URBR, URXL, URXR, URYDL, URYDR, URYVL, URYVR, VA1, VA2, VA3, VA4, VA5, VA6, VA7,
  VA8, VA9, VA10, VA11, VA12, VB1, VB2, VB3, VB4, VB5, VB6, VB7, VB8, VB9, VB10,
  VB11, VC1, VC2, VC3, VC4, VC5, VC6, VD1, VD2, VD3, VD4, VD5, VD6, VD7, VD8, VD9,
  VD10, VD11, VD12, VD13, MDL07, MDL08, MDL09, MDL10, MDL11, MDL12, MDL13, MDL14,
  MDL15, MDL16, MDL17, MDL18, MDL19, MDL20, MDL21, MDL22, MDL23, MVL07, MVL08, MVL09,
  MVL10, MVL11, MVL12, MVL13, MVL14, MVL15, MVL16, MVL17, MVL18, MVL19, MVL20, MVL21,
  MVL22, MVL23, MDR07, MDR08, MDR09, MDR10, MDR11, MDR12, MDR13, MDR14, MDR15, MDR16,
  MDR17, MDR18, MDR19, MDR20, MDR21, MDR22, MDR23, MVR07, MVR08, MVR09, MVR10, MVR11,
  MVR12, MVR13, MVR14, MVR15, MVR16, MVR17, MVR18, MVR19, MVR20, MVR21, MVR22,
  MVR23, MDL05, MDR05, MDL24, MDR24, MVL03, MVR04, MVULVA, MDL01, MDL02, MDL04,
  MDR01, MDR02, MDL03, MVL01, MDR03, MVR03, MVL02, MVR01, MVR02, MVR05, MDR04,
  MVL05, MVR06, MVL04, MVL06, MDL06, MDR06, MVR24};

const int NUM_NEURONS = MVR24 + 1;
const int NUM_NONMOTOR_NEURONS = VD13 + 1;

const char* neuron_names[] = {"ADAL", "ADAR", "ADEL", "ADER", "ADFL", "ADFR", "ADLL",
  "ADLR", "AFDL", "AFDR", "AIAL", "AIAR", "AIBL", "AIBR", "AIML", "AIMR", "AINL",
  "AINR", "AIYL", "AIYR", "AIZL", "AIZR", "ALA", "ALML", "ALMR", "ALNL", "ALNR",
  "AQR", "AS1", "AS2", "AS3", "AS4", "AS5", "AS6", "AS7", "AS8", "AS9", "AS10",
  "AS11", "ASEL", "ASER", "ASGL", "ASGR", "ASHL", "ASHR", "ASIL", "ASIR", "ASJL",
  "ASJR", "ASKL", "ASKR", "AUAL", "AUAR", "AVAL", "AVAR", "AVBL", "AVBR", "AVDL",
  "AVDR", "AVEL", "AVER", "AVFL", "AVFR", "AVG", "AVHL", "AVHR", "AVJL", "AVJR",
  "AVKL", "AVKR", "AVL", "AVM", "AWAL", "AWAR", "AWBL", "AWBR", "AWCL", "AWCR",
  "BAGL", "BAGR", "BDUL", "BDUR", "CEPDL", "CEPDR", "CEPVL", "CEPVR", "DA1", "DA2",
  "DA3", "DA4", "DA5", "DA6", "DA7", "DA8", "DA9", "DB1", "DB2", "DB3", "DB4", "DB5",
  "DB6", "DB7", "DD1", "DD2", "DD3", "DD4", "DD5", "DD6", "DVA", "DVB", "DVC",
  "FLPL", "FLPR", "HSNL", "HSNR", "I1L", "I1R", "I2L", "I2R", "I3", "I4", "I5", "I6",
  "IL1DL", "IL1DR", "IL1L", "IL1R", "IL1VL", "IL1VR", "IL2DL", "IL2DR", "IL2L",
  "IL2R", "IL2VL", "IL2VR", "LUAL", "LUAR", "M1", "M2L", "M2R", "M3L", "M3R", "M4",
  "M5", "MCL", "MCR", "MI", "NSML", "NSMR", "OLLL", "OLLR", "OLQDL", "OLQDR",
  "OLQVL", "OLQVR", "PDA", "PDB", "PDEL", "PDER", "PHAL", "PHAR", "PHBL", "PHBR",
  "PHCL", "PHCR", "PLML", "PLMR", "PLNL", "PLNR", "PQR", "PVCL", "PVCR", "PVDL",
  "PVDR", "PVM", "PVNL", "PVNR", "PVPL", "PVPR", "PVQL", "PVQR", "PVR", "PVT",
  "PVWL", "PVWR", "RIAL", "RIAR", "RIBL", "RIBR", "RICL", "RICR", "RID", "RIFL",
  "RIFR", "RIGL", "RIGR", "RIH", "RIML", "RIMR", "RIPL", "RIPR", "RIR", "RIS",
  "RIVL", "RIVR", "RMDDL", "RMDDR", "RMDL", "RMDR", "RMDVL", "RMDVR", "RMED", "RMEL",
  "RMER", "RMEV", "RMFL", "RMFR", "RMGL", "RMGR", "RMHL", "RMHR", "SAADL", "SAADR",
  "SAAVL", "SAAVR", "SABD", "SABVL", "SABVR", "SDQL", "SDQR", "SIADL", "SIADR",
  "SIAVL", "SIAVR", "SIBDL", "SIBDR", "SIBVL", "SIBVR", "SMBDL", "SMBDR", "SMBVL",
  "SMBVR", "SMDDL", "SMDDR", "SMDVL", "SMDVR", "URADL", "URADR", "URAVL", "URAVR",
  "URBL", "URBR", "URXL", "URXR", "URYDL", "URYDR", "URYVL", "URYVR", "VA1", "VA2",
  "VA3", "VA4", "VA5", "VA6", "VA7", "VA8", "VA9", "VA10", "VA11", "VA12", "VB1",
  "VB2", "VB3", "VB4", "VB5", "VB6", "VB7", "VB8", "VB9", "VB10", "VB11", "VC1",
  "VC2", "VC3", "VC4", "VC5", "VC6", "VD1", "VD2", "VD3", "VD4", "VD5", "VD6", "VD7",
  "VD8", "VD9", "VD10", "VD11", "VD12", "VD13", "MDL07", "MDL08", "MDL09", "MDL10",
  "MDL11", "MDL12", "MDL13", "MDL14", "MDL15", "MDL16", "MDL17", "MDL18", "MDL19",
  "MDL20", "MDL21", "MDL22", "MDL23", "MVL07", "MVL08", "MVL09", "MVL10", "MVL11",
  "MVL12", "MVL13", "MVL14", "MVL15", "MVL16", "MVL17", "MVL18", "MVL19", "MVL20",
  "MVL21", "MVL22", "MVL23", "MDR07", "MDR08", "MDR09", "MDR10", "MDR11", "MDR12",
  "MDR13", "MDR14", "MDR15", "MDR16", "MDR17", "MDR18", "MDR19", "MDR20", "MDR21",
  "MDR22", "MDR23", "MVR07", "MVR08", "MVR09", "MVR10", "MVR11", "MVR12", "MVR13",
  "MVR14", "MVR15", "MVR16", "MVR17", "MVR18", "MVR19", "MVR20", "MVR21", "MVR22",
  "MVR23", "MDL05", "MDR05", "MDL24", "MDR24", "MVL03", "MVR04", "MVULVA", "MDL01",
  "MDL02", "MDL04", "MDR01", "MDR02", "MDL03", "MVL01", "MDR03", "MVR03", "MVL02",
  "MVR01", "MVR02", "MVR05", "MDR04", "MVL05", "MVR06", "MVL04", "MVL06", "MDL06",
  "MDR06", "MVR24"};

const Neurons left_muscle_neurons[] = {MDL07, MDL08, MDL09, MDL10, MDL11, MDL12,
       MDL13, MDL14, MDL15, MDL16, MDL17, MDL18, MDL19, MDL20, MDL21, MDL22, MDL23,
       MVL07, MVL08, MVL09, MVL10, MVL11, MVL12, MVL13, MVL14, MVL15, MVL16, MVL17,
       MVL18, MVL19, MVL20, MVL21, MVL22, MVL23};

const Neurons right_muscle_neurons[] = {MDR07, MDR08, MDR09, MDR10, MDR11, MDR12,
       MDR13, MDR14, MDR15, MDR16, MDR17, MDR18, MDR19, MDR20, MDL21, MDR22, MDR23,
       MVR07, MVR08, MVR09, MVR10, MVR11, MVR12, MVR13, MVR14, MVR15, MVR16, MVR17,
       MVR18, MVR19, MVR20, MVL21, MVR22, MVR23};

const int ADAL_connections[] = {ADAR, 2, ADFL, 1, AIBL, 1, AIBR, 2, ASHL, 1, AVAR,
       2, AVBL, 4, AVBR, 7, AVDL, 1, AVDR, 2, AVEL, 1, AVJR, 5, FLPR, 1, PVQL, 1,
       RICL, 1, RICR, 1, RIML, 3, RIPL, 1, SMDVR, 2};

const int ADAR_connections[] = {ADAL, 1, ADFR, 1, AIBL, 1, AIBR, 1, ASHR, 1, AVAL,
       1, AVBL, 1, AVBR, 5, AVDL, 2, AVEL, 1, AVJL, 3, PVQR, 1, RICL, 1, RIMR, 5,
       RIPR, 1, RIVR, 1, SMDVL, 2};

const int ADEL_connections[] = {ADAL, 1, ADER, 1, AINL, 1, AVAL, 2, AVAR, 3, AVEL,
       1, AVKR, 1, AVL, 1, BDUL, 1, CEPDL, 1, FLPL, 1, IL1L, 1, IL2L, 1, MDL05, 1,
       OLLL, 1, RIAL, 1, RIFL, 1, RIGL, 5, RIGR, 3, RIH, 2, RIVL, 1, RIVR, 1, RMDL,
       2, RMGL, 1, RMHL, 1, SIADR, 1, SIBDR, 1, SMBDR, 1, URBL, 1};

const int ADER_connections[] = {ADAR, 1, ADEL, 2, ALA, 1, AVAL, 5, AVAR, 1, AVDR,
       2, AVER, 1, AVJR, 1, AVKL, 2, AVKR, 1, CEPDR, 1, FLPL, 1, FLPR, 1, OLLR, 2,
       PVR, 1, RIGL, 7, RIGR, 4, RIH, 1, RMDR, 2, SAAVR, 1};

const int ADFL_connections[] = {ADAL, 2, AIZL, 12, AUAL, 5, OLQVL, 1, RIAL, 15,
       RIGL, 1, RIR, 2, SMBVL, 2};

const int ADFR_connections[] = {ADAR, 2, AIAR, 1, AIYR, 1, AIZR, 8, ASHR, 1, AUAR,
       4, AWBR, 1, PVPR, 1, RIAR, 16, RIGR, 3, RIR, 3, SMBDR, 1, SMBVR, 2, URXR, 1};

const int ADLL_connections[] = {ADLR, 1, AIAL, 6, AIBL, 7, AIBR, 1, ALA, 2, ASER,
       3, ASHL, 2, AVAL, 2, AVAR, 3, AVBL, 2, AVDL, 1, AVDR, 4, AVDR, 1, AVJL, 1,
       AVJR, 3, AWBL, 2, OLQVL, 2, RIPL, 1, RMGL, 1};

const int ADLR_connections[] = {ADLL, 1, AIAR, 10, AIBR, 10, ASER, 1, ASHR, 3,
       AVAR, 2, AVBL, 1, AVBR, 2, AVDL, 5, AVDR, 2, AVJR, 1, AWCR, 3, OLLR, 1, PVCL,
       1, RICL, 1, RICR, 1};

const int AFDL_connections[] = {AFDR, 1, AIBL, 1, AINR, 1, AIYL, 7};

const int AFDR_connections[] = {AFDL, 1, AIBR, 1, AIYR, 13, ASER, 1};

const int AIAL_connections[] = {ADAL, 1, AIAR, 1, AIBL, 10, AIML, 2, AIZL, 1, ASER,
       3, ASGL, 1, ASHL, 1, ASIL, 2, ASKL, 3, AWAL, 1, AWCR, 1, HSNL, 1, RIFL, 1,
       RMGL, 1};

const int AIAR_connections[] = {ADAR, 1, ADFR, 1, ADLR, 2, AIAL, 1, AIBR, 14, AIZR,
       1, ASER, 1, ASGR, 1, ASIR, 2, AWAR, 2, AWCL, 1, AWCR, 3, RIFR, 2};

const int AIBL_connections[] = {AFDL, 1, AIYL, 1, ASER, 1, AVAL, 2, AVBL, 5, DVC,
       1, FLPL, 1, PVT, 1, RIBR, 4, RIFL, 1, RIGR, 1, RIGR, 3, RIML, 2, RIMR, 13,
       RIMR, 1, RIVL, 1, SAADL, 2, SAADR, 2, SMDDR, 4};

const int AIBR_connections[] = {AFDR, 1, AVAR, 1, AVBR, 3, AVEL, 1, DB1, 1, DVC, 2,
       PVT, 1, RIAL, 1, RIBL, 4, RIGL, 3, RIML, 16, RIML, 1, RIMR, 1, RIS, 1, RIVR,
       1, SAADL, 1, SMDDL, 3, SMDVL, 1, VB1, 3};

const int AIML_connections[] = {AIAL, 5, ALML, 1, ASGL, 2, ASKL, 2, AVBR, 2, AVDL,
       1, AVDR, 1, AVER, 1, AVFL, 4, AVFR, 1, AVHL, 2, AVHR, 1, AVJL, 1, PVQL, 1,
       RIFL, 1, SIBDR, 1, SMBVL, 1};

const int AIMR_connections[] = {AIAR, 5, ASGR, 2, ASJR, 2, ASKR, 3, AVDR, 1, AVFL,
       1, AVFR, 1, HSNL, 1, HSNR, 2, OLQDR, 1, PVNR, 1, RIFR, 1, RMGR, 1};

const int AINL_connections[] = {ADEL, 1, AFDR, 5, AINR, 2, ASEL, 3, ASGR, 2, AUAR,
       2, BAGL, 3, RIBL, 1, RIBR, 2};

const int AINR_connections[] = {AFDL, 4, AFDR, 1, AIAL, 2, AIBL, 2, AINL, 2, ASEL,
       1, ASER, 1, ASGL, 1, AUAL, 1, AUAR, 1, BAGR, 3, RIBL, 2, RID, 1};

const int AIYL_connections[] = {AIYR, 1, AIZL, 13, AWAL, 3, AWCL, 1, AWCR, 1, HSNR,
       1, RIAL, 7, RIBL, 4, RIML, 1};

const int AIYR_connections[] = {ADFR, 1, AIYL, 1, AIZR, 8, AWAR, 1, HSNL, 1, RIAR,
       6, RIBR, 2, RIMR, 1};

const int AIZL_connections[] = {AIAL, 3, AIBL, 2, AIBR, 8, AIZR, 2, ASEL, 1, ASGL,
       1, ASHL, 1, AVER, 5, DVA, 1, RIAL, 8, RIGL, 1, RIML, 4, SMBDL, 9, SMBVL, 7,
       VB2, 1};

const int AIZR_connections[] = {AIAR, 1, AIBL, 8, AIBR, 1, AIZL, 2, ASGR, 1, ASHR,
       1, AVEL, 4, AVER, 1, AWAR, 1, DVA, 1, RIAR, 7, RIMR, 4, SMBDR, 5, SMBVR, 3,
       SMDDR, 1};

const int ALA_connections[] = {ADEL, 1, AVAL, 1, AVEL, 2, AVER, 1, RID, 1, RMDR, 1};

const int ALML_connections[] = {AVDR, 1, AVEL, 1, AVM, 1, BDUL, 6, CEPDL, 3, CEPVL,
       2, PVCL, 2, PVCR, 1, PVR, 1, RMDDR, 1, RMGL, 1, SDQL, 1};

const int ALMR_connections[] = {AVM, 1, BDUR, 5, CEPDR, 1, CEPVR, 1, PVCR, 3,
       RMDDL, 1, SIADL, 1};

const int ALNL_connections[] = {SAAVL, 3, SMBDR, 2, SMBDR, 1, SMDVL, 1};

const int ALNR_connections[] = {ADER, 1, RMHR, 1, SAAVR, 2, SMBDL, 2, SMDDR, 1,
       SMDVL, 1};

const int AQR_connections[] = {AVAL, 1, AVAR, 3, AVBL, 3, AVBL, 1, AVBR, 4, AVDL,
       1, AVDR, 1, AVJL, 1, AVKL, 2, AVKR, 1, BAGL, 2, BAGR, 2, PVCR, 2, PVPL, 1,
       PVPL, 7, PVPR, 9, RIAL, 3, RIAR, 1, RIGL, 2, RIGR, 1, URXL, 1};

const int AS1_connections[] = {AVAL, 3, AVAR, 2, DA1, 2, MDL05, 3, MDL08, 3, MDR05,
       3, MDR08, 4, VA3, 1, VD1, 5, VD2, 1};

const int AS2_connections[] = {DA2, 1, DB1, 1, DD1, 1, MDL07, 3, MDL08, 2, MDR07,
       3, MDR08, 3, VA4, 2, VD2, 10};

const int AS3_connections[] = {AVAL, 2, AVAR, 1, DA2, 1, DA3, 1, DD1, 1, MDL09, 3,
       MDL10, 3, MDR09, 3, MDR10, 3, VA5, 2, VD2, 1, VD3, 15};

const int AS4_connections[] = {AS5, 1, DA3, 1, MDL11, 2, MDL12, 2, MDR11, 3, MDR12,
       2, VD4, 11};

const int AS5_connections[] = {AVAL, 1, AVAR, 1, DD2, 1, MDL11, 2, MDL14, 3, MDR11,
       2, MDR14, 3, VA7, 1, VD5, 9};

const int AS6_connections[] = {AVAL, 1, AVAR, 1, AVBR, 1, DA5, 2, MDL13, 3, MDL14,
       2, MDR13, 3, MDR14, 2, VA8, 1, VD6, 13};

const int AS7_connections[] = {AVAL, 6, AVAR, 5, AVBL, 2, AVBR, 2, MDL13, 2, MDL16,
       3, MDR13, 2, MDR16, 3};

const int AS8_connections[] = {AVAL, 4, AVAR, 3, MDL15, 2, MDL18, 3, MDR15, 2,
       MDR18, 3};

const int AS9_connections[] = {AVAL, 4, AVAR, 2, DVB, 7, MDL17, 2, MDL20, 3, MDR17,
       2, MDR20, 3};

const int AS10_connections[] = {AVAL, 1, AVAR, 1, MDL19, 3, MDL20, 2, MDR19, 3,
       MDR20, 2};

const int AS11_connections[] = {MDL21, 1, MDL22, 1, MDL23, 1, MDL24, 1, MDR21, 1,
       MDR22, 1, MDR23, 1, MDR24, 1, PDA, 1, PDB, 1, PDB, 2, VD13, 2};

const int ASEL_connections[] = {ADFR, 1, AIAL, 3, AIBL, 7, AIBR, 2, AIYL, 13, AIYR,
       6, AWCL, 4, AWCR, 1, RIAR, 1};

const int ASER_connections[] = {AFDL, 1, AFDR, 2, AIAL, 1, AIAR, 3, AIBL, 2, AIBR,
       10, AIYL, 2, AIYR, 14, AWAR, 1, AWCL, 1, AWCR, 1};

const int ASGL_connections[] = {AIAL, 9, AIBL, 3, AINR, 2, AIZL, 1, ASKL, 1};

const int ASGR_connections[] = {AIAR, 10, AIBR, 2, AINL, 1, AIYR, 1, AIZR, 1};

const int ASHL_connections[] = {ADAL, 2, ADFL, 3, AIAL, 7, AIBL, 5, AIZL, 1, ASHR,
       1, ASKL, 1, AVAL, 2, AVBL, 6, AVDL, 2, AVDR, 2, RIAL, 4, RICL, 2, RIML, 1,
       RIPL, 1, RMGL, 1};

const int ASHR_connections[] = {ADAR, 3, ADFR, 2, AIAR, 10, AIBR, 3, AIZR, 1, ASHL,
       1, ASKR, 1, AVAR, 5, AVBR, 3, AVDL, 5, AVDR, 1, AVER, 3, HSNR, 1, PVPR, 1,
       RIAR, 2, RICR, 2, RMGR, 2, RMGR, 1};

const int ASIL_connections[] = {AIAL, 2, AIBL, 1, AIYL, 2, AIZL, 1, ASER, 1, ASIR,
       1, ASKL, 2, AWCL, 1, AWCR, 1, RIBL, 1};

const int ASIR_connections[] = {AIAL, 1, AIAR, 3, AIAR, 2, AIBR, 1, ASEL, 2, ASHR,
       1, ASIL, 1, AWCL, 1, AWCR, 1};

const int ASJL_connections[] = {ASJR, 1, ASKL, 4, HSNL, 1, HSNR, 1, PVQL, 14};

const int ASJR_connections[] = {ASJL, 1, ASKR, 4, HSNR, 1, PVQR, 13};

const int ASKL_connections[] = {AIAL, 11, AIBL, 2, AIML, 2, ASKR, 1, PVQL, 5, RMGL,
       1};

const int ASKR_connections[] = {AIAR, 11, AIMR, 1, ASHR, 1, ASKL, 1, AWAR, 1,
       CEPVR, 1, PVQR, 4, RIFR, 1, RMGR, 1};

const int AUAL_connections[] = {AINR, 1, AUAR, 1, AVAL, 3, AVDR, 1, AVEL, 3, AWBL,
       1, RIAL, 5, RIBL, 9};

const int AUAR_connections[] = {AINL, 1, AIYR, 1, AUAL, 1, AVAR, 1, AVER, 4, AWBR,
       1, RIAR, 6, RIBR, 13, URXR, 1};

const int AVAL_connections[] = {AS1, 3, AS10, 3, AS11, 4, AS2, 1, AS3, 3, AS4, 1,
       AS5, 4, AS6, 1, AS7, 14, AS8, 9, AS9, 12, AVAR, 7, AVBR, 1, AVDL, 1, AVHL, 1,
       AVJL, 2, DA1, 4, DA2, 4, DA3, 6, DA4, 10, DA5, 8, DA6, 21, DA7, 4, DA8, 4,
       DA9, 3, DB5, 2, DB6, 4, FLPL, 1, LUAL, 2, PVCL, 12, PVCR, 11, PVPL, 1, RIMR,
       3, SABD, 4, SABVR, 1, SDQR, 1, URYDL, 1, URYVR, 1, VA1, 3, VA10, 6, VA11, 7,
       VA12, 2, VA2, 5, VA3, 3, VA4, 3, VA5, 8, VA6, 10, VA7, 2, VA8, 19, VA9, 8,
       VB9, 5};

const int AVAR_connections[] = {ADER, 1, AS1, 3, AS10, 2, AS11, 6, AS2, 2, AS3, 2,
       AS4, 1, AS5, 2, AS6, 3, AS7, 8, AS8, 9, AS9, 6, AVAL, 6, AVBL, 1, AVDL, 1,
       AVDR, 2, AVEL, 2, AVER, 2, DA1, 8, DA2, 4, DA3, 5, DA4, 8, DA5, 7, DA6, 13,
       DA7, 3, DA8, 9, DA9, 2, DB3, 1, DB5, 3, DB6, 5, LUAL, 1, LUAR, 3, PDEL, 1,
       PDER, 1, PVCL, 7, PVCR, 8, RIGL, 1, RIML, 2, RIMR, 1, SABD, 1, SABVL, 6,
       SABVR, 1, URYDR, 1, URYVL, 1, VA10, 5, VA11, 15, VA12, 1, VA2, 2, VA3, 7, VA4,
       5, VA5, 4, VA6, 5, VA7, 4, VA8, 16, VB9, 10, VD13, 2};

const int AVBL_connections[] = {AQR, 1, AS10, 1, AS3, 1, AS4, 1, AS5, 1, AS6, 1,
       AS7, 2, AS9, 1, AVAL, 7, AVAR, 7, AVBR, 4, AVDL, 1, AVDR, 2, AVEL, 1, AVER, 2,
       AVL, 1, DB3, 1, DB4, 1, DB5, 1, DB6, 2, DB7, 2, DVA, 1, PVNR, 1, RIBL, 1,
       RIBR, 1, RID, 1, SDQR, 1, SIBVL, 1, VA10, 1, VA2, 1, VA7, 1, VB1, 1, VB10, 2,
       VB11, 2, VB2, 4, VB4, 1, VB5, 1, VB6, 1, VB7, 2, VB8, 7, VB9, 1, VC3, 1};

const int AVBR_connections[] = {AS1, 1, AS10, 1, AS3, 1, AS4, 1, AS5, 1, AS6, 2,
       AS7, 3, AVAL, 6, AVAR, 7, AVBL, 4, DA5, 1, DB1, 3, DB2, 1, DB3, 1, DB4, 1,
       DB5, 1, DB6, 1, DB7, 1, DD1, 1, DVA, 1, HSNR, 1, PVNL, 2, RIBL, 1, RIBR, 1,
       RID, 2, SIBVL, 1, VA4, 1, VA8, 1, VA9, 2, VB10, 1, VB11, 1, VB2, 1, VB3, 1,
       VB4, 1, VB6, 2, VB7, 2, VB8, 3, VB9, 6, VD10, 1, VD3, 1};

const int AVDL_connections[] = {ADAR, 2, AS1, 1, AS10, 1, AS11, 2, AS4, 1, AS5, 1,
       AVAL, 13, AVAR, 19, AVM, 2, DA1, 1, DA2, 1, DA3, 4, DA4, 1, DA5, 1, DA8, 1,
       FLPL, 1, FLPR, 1, LUAL, 1, PVCL, 1, SABD, 1, SABVL, 1, SABVR, 1, VA5, 1};

const int AVDR_connections[] = {ADAL, 2, ADLL, 1, AS10, 1, AS5, 1, AVAL, 16, AVAR,
       15, AVBL, 1, AVDL, 2, AVJL, 2, DA1, 2, DA2, 1, DA3, 1, DA4, 1, DA5, 2, DA8, 1,
       DA9, 1, DB4, 1, DVC, 1, FLPR, 1, LUAL, 2, PQR, 1, SABD, 1, SABVL, 3, SABVR, 1,
       VA11, 1, VA2, 1, VA3, 2, VA6, 1};

const int AVEL_connections[] = {AS1, 1, AVAL, 12, AVAR, 7, AVER, 1, DA1, 5, DA2, 1,
       DA3, 3, DA4, 1, PVCR, 1, PVT, 1, RIML, 2, RIMR, 3, RMDVR, 1, RMEV, 1, SABD, 6,
       SABVL, 7, SABVR, 3, VA1, 5, VA3, 3, VD2, 1, VD3, 1};

const int AVER_connections[] = {AS1, 3, AS2, 2, AS3, 1, AVAL, 7, AVAR, 16, AVDR, 1,
       AVEL, 1, DA1, 5, DA2, 3, DA3, 1, DB3, 1, RIML, 3, RIMR, 2, RMDVL, 1, RMDVR, 1,
       RMEV, 1, SABD, 2, SABVL, 3, SABVR, 3, VA1, 1, VA2, 1, VA3, 2, VA4, 1, VA5, 1};

const int AVFL_connections[] = {AVBL, 1, AVBR, 2, AVFR, 30, AVG, 1, AVHL, 4, AVHR,
       7, AVJL, 1, AVJR, 1, AVL, 1, HSNL, 1, MVL11, 1, MVL12, 1, PDER, 1, PVNL, 2,
       PVQL, 1, PVQR, 2, VB1, 1};

const int AVFR_connections[] = {ASJL, 1, ASKL, 1, AVBL, 1, AVBR, 5, AVFL, 24, AVHL,
       4, AVHR, 2, AVJL, 1, AVJR, 1, HSNR, 1, MVL14, 2, MVR14, 2, PVQL, 1, VC4, 1,
       VD11, 1};

const int AVG_connections[] = {AVAR, 3, AVBL, 1, AVBR, 2, AVDR, 1, AVEL, 1, AVER,
       1, AVFL, 1, AVJL, 1, AVL, 1, DA8, 1, PHAL, 2, PVCL, 1, PVNR, 1, PVPR, 1, PVQR,
       1, PVT, 1, RIFL, 1, RIFR, 1, VA11, 1};

const int AVHL_connections[] = {ADFR, 3, AVBL, 1, AVBR, 1, AVDL, 1, AVFL, 1, AVFL,
       2, AVFR, 5, AVHR, 2, AVJL, 1, AWBR, 1, PHBR, 1, PVPR, 2, PVQL, 1, PVQR, 2,
       RIMR, 1, RIR, 3, SMBDR, 1, SMBVR, 1, VD1, 1};

const int AVHR_connections[] = {ADLL, 1, ADLR, 2, AQR, 2, AVBL, 2, AVBR, 1, AVDR,
       1, AVFL, 1, AVFR, 2, AVHL, 2, AVJR, 4, PVNL, 1, PVPL, 3, RIGL, 1, RIR, 4,
       SMBDL, 1, SMBVL, 1};

const int AVJL_connections[] = {AVAL, 2, AVAR, 1, AVBL, 1, AVBR, 4, AVDL, 1, AVDR,
       2, AVEL, 1, AVFR, 1, AVHL, 2, AVJR, 4, HSNR, 1, PLMR, 2, PVCL, 2, PVCR, 5,
       PVNR, 1, RIFR, 1, RIS, 2};

const int AVJR_connections[] = {AVAL, 1, AVAR, 1, AVBL, 3, AVBR, 1, AVDL, 1, AVDR,
       3, AVER, 3, AVJL, 5, PVCL, 3, PVCR, 4, PVQR, 1, SABVL, 1};

const int AVKL_connections[] = {ADER, 1, AQR, 2, AVBL, 1, AVEL, 2, AVER, 1, AVKR,
       2, AVM, 1, DVA, 1, PDEL, 3, PDER, 1, PVM, 1, PVPL, 1, PVPR, 1, PVT, 2, RICL,
       1, RICR, 1, RIGL, 1, RIML, 2, RIMR, 1, RMFR, 1, SAADR, 1, SIAVR, 1, SMBDL, 1,
       SMBDR, 1, SMBVR, 1, SMDDR, 1, VB1, 4, VB10, 1};

const int AVKR_connections[] = {ADEL, 1, AQR, 1, AVKL, 2, BDUL, 1, MVL10, 1, PVPL,
       6, PVQL, 1, RICL, 1, RIGR, 1, RIML, 2, RIMR, 2, RMDR, 1, RMFL, 1, SAADL, 1,
       SMBDL, 2, SMBDR, 2, SMBVR, 1, SMDDL, 1, SMDDR, 2};

const int AVL_connections[] = {AVEL, 1, AVFR, 1, DA2, 1, DD1, 1, DD6, 2, DVB, 1,
       DVC, 9, HSNR, 1, MVL10, 5, MVR10, 5, PVM, 1, PVPR, 1, PVWL, 1, SABD, 5, SABVL,
       4, SABVR, 3, VD12, 4};

const int AVM_connections[] = {ADER, 1, ALML, 1, ALMR, 1, AVBL, 6, AVBR, 6, AVDL,
       2, AVJR, 1, BDUL, 3, BDUR, 2, DA1, 1, PVCL, 4, PVCR, 5, PVNL, 1, PVR, 3, RID,
       1, SIBVL, 1, VA1, 2};

const int AWAL_connections[] = {ADAL, 1, AFDL, 5, AIAL, 1, AIYL, 1, AIZL, 10, ASEL,
       4, ASGL, 1, AWAR, 1, AWBL, 1};

const int AWAR_connections[] = {ADFR, 3, AFDR, 7, AIAR, 1, AIYR, 2, AIZR, 7, AIZR,
       1, ASEL, 1, ASER, 2, AUAR, 1, AWAL, 1, AWBR, 1, RIFR, 2, RIGR, 1, RIR, 2};

const int AWBL_connections[] = {ADFL, 9, AIBR, 1, AIZL, 9, AUAL, 1, AVBL, 1, AWBR,
       1, RIAL, 3, RMGL, 1, SMBDL, 1};

const int AWBR_connections[] = {ADFR, 4, AIZR, 4, ASGR, 1, ASHR, 2, AUAR, 1, AVBR,
       2, AWBL, 1, RIAR, 1, RICL, 1, RIR, 2, RMGR, 1, SMBVR, 1};

const int AWCL_connections[] = {AIAL, 2, AIAR, 4, AIBL, 1, AIBR, 1, AIYL, 10, ASEL,
       1, AVAL, 1, AWCR, 1, RIAL, 3};

const int AWCR_connections[] = {AIAR, 1, AIBR, 4, AIYL, 4, AIYR, 9, ASEL, 1, ASGR,
       1, AWCL, 5};

const int BAGL_connections[] = {AIBL, 1, AVAR, 1, AVEL, 1, AVER, 4, BAGR, 2, RIAR,
       5, RIBL, 1, RIBR, 7, RIGL, 1, RIGR, 4, RIGR, 1, RIR, 1};

const int BAGR_connections[] = {AIYL, 1, AVAL, 1, AVEL, 2, BAGL, 1, RIAL, 5, RIBL,
       4, RIGL, 5, RIGL, 1, RIR, 1};

const int BDUL_connections[] = {ADEL, 3, AVHL, 1, AVJR, 1, HSNL, 1, PVNL, 2, PVNR,
       2, SAADL, 1, URADL, 1};

const int BDUR_connections[] = {ADER, 1, ALMR, 1, AVAL, 3, AVHL, 1, AVJL, 2, HSNR,
       4, PVCL, 1, PVNL, 2, PVNR, 1, SDQL, 1, URADR, 1};

const int CEPDL_connections[] = {AVER, 5, IL1DL, 4, OLLL, 2, OLQDL, 6, OLQDL, 1,
       RIBL, 2, RICL, 1, RICR, 2, RIH, 1, RIPL, 2, RIS, 1, RMDVL, 3, RMGL, 4, RMHR,
       4, SIADR, 1, SMBDR, 1, URADL, 2, URBL, 4, URYDL, 2};

const int CEPDR_connections[] = {AVEL, 6, BDUR, 1, IL1DR, 5, IL1R, 1, OLLR, 8,
       OLQDR, 5, OLQDR, 2, RIBR, 1, RICL, 4, RICR, 3, RIH, 1, RIS, 1, RMDDL, 1,
       RMDVR, 2, RMGR, 1, RMHL, 4, RMHR, 1, SIADL, 1, SMBDR, 1, URADR, 1, URBR, 2,
       URYDR, 1};

const int CEPVL_connections[] = {ADLL, 1, AVER, 3, IL1VL, 2, MVL03, 1, OLLL, 4,
       OLQVL, 6, OLQVL, 1, RICL, 7, RICR, 4, RIH, 1, RIPL, 1, RMDDL, 4, RMHL, 1,
       SIAVL, 1, URAVL, 2};

const int CEPVR_connections[] = {ASGR, 1, AVEL, 5, IL1VR, 1, IL2VR, 2, MVR04, 1,
       OLLR, 7, OLQVR, 3, OLQVR, 1, RICL, 2, RICR, 2, RIH, 1, RIPR, 1, RIVL, 1,
       RMDDR, 2, RMHR, 2, SIAVR, 2, URAVR, 1};

const int DA1_connections[] = {AVAL, 2, AVAR, 6, DA4, 1, DD1, 4, MDL08, 8, MDR08,
       8, SABVL, 2, SABVR, 3, VD1, 17, VD2, 1};

const int DA2_connections[] = {AS2, 2, AS3, 1, AVAL, 2, AVAR, 2, DD1, 1, MDL07, 2,
       MDL08, 1, MDL09, 2, MDL10, 2, MDR07, 2, MDR08, 2, MDR09, 2, MDR10, 2, SABVL,
       1, VA1, 2, VD1, 2, VD2, 11, VD3, 5};

const int DA3_connections[] = {AS4, 2, AVAR, 2, DA4, 2, DB3, 1, DD2, 1, MDL09, 5,
       MDL10, 5, MDL12, 5, MDR09, 5, MDR10, 5, MDR12, 5, VD3, 25, VD4, 6};

const int DA4_connections[] = {AVAL, 3, AVAR, 2, DA1, 1, DA3, 1, DB3, 2, DD2, 1,
       MDL11, 4, MDL12, 4, MDL14, 5, MDR11, 4, MDR12, 4, MDR14, 5, VB6, 1, VD4, 12,
       VD5, 15};

const int DA5_connections[] = {AS6, 2, AVAL, 1, AVAR, 5, DB4, 1, MDL13, 5, MDL14,
       4, MDR13, 5, MDR14, 4, VA4, 1, VA5, 2, VD5, 1, VD6, 16};

const int DA6_connections[] = {AVAL, 10, AVAR, 2, MDL11, 6, MDL12, 4, MDL13, 4,
       MDL14, 4, MDL16, 4, MDR11, 4, MDR12, 4, MDR13, 4, MDR14, 4, MDR16, 4, VD4, 4,
       VD5, 3, VD6, 3};

const int DA7_connections[] = {AVAL, 2, MDL15, 4, MDL17, 4, MDL18, 4, MDR15, 4,
       MDR17, 4, MDR18, 4};

const int DA8_connections[] = {AVAR, 1, DA9, 1, MDL17, 4, MDL19, 4, MDL20, 4,
       MDR17, 4, MDR19, 4, MDR20, 4};

const int DA9_connections[] = {DA8, 1, DD6, 1, MDL19, 4, MDL21, 4, MDL22, 4, MDL23,
       4, MDL24, 4, MDR19, 4, MDR21, 4, MDR22, 4, MDR23, 4, MDR24, 4, PDA, 1, PHCL,
       1, RID, 1, VD13, 1};

const int DB1_connections[] = {AIBR, 1, AS1, 1, AS2, 1, AS3, 1, AVBR, 3, DB2, 1,
       DB4, 1, DD1, 10, DVA, 1, MDL07, 1, MDL08, 1, MDR07, 1, MDR08, 1, RID, 1, RIS,
       1, VB3, 1, VB4, 1, VD1, 21, VD2, 15, VD3, 1};

const int DB2_connections[] = {AVBR, 1, DA3, 5, DB1, 1, DB3, 6, DD2, 3, MDL09, 3,
       MDL10, 3, MDL11, 3, MDL12, 3, MDR09, 3, MDR10, 3, MDR11, 3, MDR12, 3, VB1, 2,
       VD3, 23, VD4, 14, VD5, 1};

const int DB3_connections[] = {AS4, 1, AS5, 1, AVBL, 1, AVBR, 1, DA4, 1, DB2, 6,
       DB4, 1, DD2, 4, DD3, 10, MDL11, 3, MDL12, 3, MDL13, 4, MDL14, 3, MDR11, 3,
       MDR12, 3, MDR13, 4, MDR14, 3, VD4, 9, VD5, 26, VD6, 7};

const int DB4_connections[] = {AVBL, 1, AVBR, 1, DB1, 1, DB3, 1, DD3, 3, MDL13, 2,
       MDL14, 2, MDL16, 2, MDR13, 2, MDR14, 2, MDR16, 2, VB2, 1, VB4, 1, VD6, 13};

const int DB5_connections[] = {AVAR, 2, AVBL, 1, AVBR, 1, MDL15, 2, MDL17, 2,
       MDL18, 2, MDR15, 2, MDR17, 2, MDR18, 2};

const int DB6_connections[] = {AVAL, 3, AVBL, 2, AVBR, 1, MDL17, 2, MDL19, 2,
       MDL20, 2, MDR17, 2, MDR19, 2, MDR20, 2};

const int DB7_connections[] = {AVBL, 2, AVBR, 1, MDL19, 2, MDL21, 2, MDL22, 2,
       MDL23, 2, MDL24, 2, MDR19, 2, MDR21, 2, MDR22, 2, MDR23, 2, MDR24, 2, VD13, 2};

const int DD1_connections[] = {AVBR, 1, DD2, 3, MDL07, 6, MDL08, 6, MDL09, 7,
       MDL10, 6, MDR07, 6, MDR08, 6, MDR09, 7, MDR10, 6, VD1, 4, VD2, 1, VD2, 2};

const int DD2_connections[] = {DA3, 1, DD1, 1, DD3, 2, MDL09, 6, MDL11, 7, MDL12,
       6, MDR09, 6, MDR11, 7, MDR12, 6, VD3, 1, VD4, 3};

const int DD3_connections[] = {DD2, 2, DD4, 1, MDL11, 7, MDL13, 9, MDL14, 7, MDR11,
       7, MDR13, 9, MDR14, 7};

const int DD4_connections[] = {DD3, 1, MDL13, 7, MDL15, 7, MDL16, 7, MDR13, 7,
       MDR15, 7, MDR16, 7, VC3, 1, VD8, 1};

const int DD5_connections[] = {MDL17, 7, MDL18, 7, MDL20, 7, MDR17, 7, MDR18, 7,
       MDR20, 7, VB8, 1, VD10, 1, VD9, 1};

const int DD6_connections[] = {MDL19, 7, MDL21, 7, MDL22, 7, MDL23, 7, MDL24, 7,
       MDR19, 7, MDR21, 7, MDR22, 7, MDR23, 7, MDR24, 7};

const int DVA_connections[] = {AIZL, 3, AQR, 4, AUAL, 1, AUAR, 1, AVAL, 3, AVAR, 1,
       AVBL, 2, AVBR, 1, AVEL, 9, AVER, 5, DB1, 1, DB2, 1, DB3, 2, DB4, 1, DB5, 1,
       DB6, 2, DB7, 1, PDEL, 3, PVCL, 3, PVCL, 1, PVCR, 1, PVR, 3, PVR, 2, RIAL, 1,
       RIAR, 1, RIMR, 1, RIR, 3, SAADR, 1, SAAVL, 1, SAAVR, 1, SABD, 1, SMBDL, 3,
       SMBDR, 2, SMBVL, 3, SMBVR, 2, VA12, 1, VA2, 1, VB1, 1, VB11, 2};

const int DVB_connections[] = {AS9, 7, AVL, 5, AVL, 1, DA8, 2, DD6, 3, DVC, 3, PDA,
       1, PHCL, 1, PVPL, 1, VA9, 1, VB9, 1};

const int DVC_connections[] = {AIBL, 2, AIBR, 5, AVAL, 5, AVAR, 7, AVBL, 1, AVKL,
       2, AVKR, 1, AVL, 9, PVPL, 2, PVPR, 13, PVT, 1, RIBL, 1, RIBR, 1, RIGL, 5,
       RIGR, 5, RMFL, 2, RMFR, 4, VA9, 1, VD1, 5, VD10, 4};

const int FLPL_connections[] = {ADEL, 2, ADER, 2, AIBL, 1, AIBR, 2, AVAL, 15, AVAR,
       17, AVBL, 4, AVBR, 5, AVDL, 7, AVDR, 13, DVA, 1, FLPR, 3, RIH, 1};

const int FLPR_connections[] = {ADER, 1, AIBR, 1, AVAL, 12, AVAR, 5, AVBL, 5, AVBR,
       1, AVDL, 10, AVDL, 1, AVDR, 2, AVEL, 4, AVER, 2, AVJR, 1, DVA, 1, FLPL, 4,
       PVCL, 2, VB1, 1};

const int HSNL_connections[] = {AIAL, 1, AIZL, 2, AIZR, 1, ASHL, 1, ASHR, 2, ASJR,
       1, ASKL, 1, AVDR, 2, AVFL, 6, AVJL, 1, AWBL, 1, AWBR, 2, HSNR, 3, HSNR, 1,
       MVULVA, 7, RIFL, 3, RIML, 2, SABVL, 2, VC5, 3};

const int HSNR_connections[] = {AIBL, 1, AIBR, 1, AIZL, 1, AIZR, 1, AS5, 1, ASHL,
       2, AVDR, 1, AVFL, 1, AVJL, 1, AVL, 1, AWBL, 1, BDUR, 1, DA5, 1, DA6, 1, HSNL,
       2, MVULVA, 6, PVNR, 2, PVQR, 1, RIFR, 4, RMGR, 1, SABD, 1, SABVR, 1, VA6, 1,
       VC2, 3, VC3, 1, VD4, 2};

const int I1L_connections[] = {I1R, 1, I3, 1, I5, 1, RIPL, 1, RIPR, 1};

const int I1R_connections[] = {I1L, 1, I3, 1, I5, 1, RIPL, 1, RIPR, 1};

const int I2L_connections[] = {I1L, 1, I1R, 1, M1, 4};

const int I2R_connections[] = {I1L, 1, I1R, 1, M1, 4};

const int I3_connections[] = {M1, 4, M2L, 2, M2R, 2};

const int I4_connections[] = {I2L, 5, I2R, 5, I5, 2, M1, 4};

const int I5_connections[] = {I1L, 4, I1R, 3, M1, 2, M5, 2, MI, 4};

const int I6_connections[] = {I2L, 2, I2R, 2, I3, 1, M4, 1, M5, 2, NSML, 2, NSMR,
       2};

const int IL1DL_connections[] = {IL1DR, 1, IL1L, 1, MDL01, 1, MDL02, 1, MDL04, 2,
       OLLL, 1, PVR, 1, RIH, 1, RIPL, 2, RMDDR, 1, RMDVL, 4, RMEV, 1, URYDL, 1};

const int IL1DR_connections[] = {IL1DL, 1, IL1R, 1, MDR01, 4, MDR02, 3, OLLR, 1,
       RIPR, 5, RMDVR, 5, RMEV, 1};

const int IL1L_connections[] = {AVER, 2, IL1DL, 2, IL1VL, 1, MDL01, 3, MDL03, 3,
       MDL05, 4, MVL01, 3, MVL03, 3, RMDDL, 5, RMDL, 1, RMDR, 3, RMDVL, 4, RMDVR, 2,
       RMER, 1};

const int IL1R_connections[] = {AVEL, 1, AVER, 1, IL1DR, 2, IL1VR, 1, MDR01, 3,
       MDR03, 3, MVR01, 3, MVR03, 3, RMDDL, 3, RMDDR, 2, RMDL, 4, RMDR, 2, RMDVL, 1,
       RMDVR, 4, RMEL, 2, RMHL, 1, URXR, 2};

const int IL1VL_connections[] = {IL1L, 2, IL1VR, 1, MVL01, 5, MVL02, 4, RIPL, 4,
       RMDDL, 5, RMED, 1, URYVL, 1};

const int IL1VR_connections[] = {IL1R, 2, IL1VL, 1, IL2R, 1, IL2VR, 1, MVR01, 5,
       MVR02, 5, RIPR, 6, RMDDR, 10, RMER, 1};

const int IL2DL_connections[] = {AUAL, 1, IL1DL, 7, OLQDL, 2, RIBL, 1, RIPL, 10,
       RMEL, 4, RMER, 3, URADL, 3};

const int IL2DR_connections[] = {CEPDR, 1, IL1DR, 7, RICR, 1, RIPR, 11, RMED, 1,
       RMEL, 2, RMER, 2, RMEV, 1, URADR, 3};

const int IL2L_connections[] = {ADEL, 2, AVEL, 1, IL1L, 1, OLQDL, 5, OLQVL, 8,
       RICL, 1, RIH, 7, RMDL, 3, RMDR, 1, RMER, 2, RMEV, 2, RMGL, 1, URXL, 2};

const int IL2R_connections[] = {ADER, 1, IL1R, 1, IL1VR, 1, OLLR, 1, OLQDR, 2,
       OLQVR, 7, RIH, 6, RMDL, 1, RMEL, 2, RMEV, 1, RMGR, 1, URBR, 1, URXR, 1};

const int IL2VL_connections[] = {BAGR, 1, IL1VL, 7, IL2L, 1, OLQVL, 1, RIAL, 1,
       RIH, 2, RIPL, 1, RMEL, 1, RMER, 4, RMEV, 1, URAVL, 3};

const int IL2VR_connections[] = {IL1VR, 6, OLQVR, 1, RIAR, 2, RIH, 3, RIPR, 15,
       RMEL, 3, RMER, 2, RMEV, 3, URAVR, 4, URXR, 1};

const int LUAL_connections[] = {AVAL, 6, AVAR, 6, AVDL, 4, AVDR, 2, AVJL, 1, PHBL,
       1, PLML, 1, PVNL, 1, PVR, 1, PVWL, 1};

const int LUAR_connections[] = {AVAL, 3, AVAR, 7, AVDL, 1, AVDR, 3, AVJR, 1, PLMR,
       1, PQR, 1, PVCR, 3, PVR, 2, PVWL, 1};

const int M1_connections[] = {I2L, 2, I2R, 2, I3, 1, I4, 1};

const int M2L_connections[] = {I1L, 3, I1R, 3, I3, 3, M2R, 1, M5, 1, MI, 4};

const int M2R_connections[] = {I1L, 3, I1R, 3, I3, 3, M3L, 1, M3R, 1, M5, 1, MI, 4};

const int M3L_connections[] = {I1L, 4, I1R, 4, I4, 2, I5, 3, I6, 1, M1, 2, M3R, 1,
       MCL, 1, MCR, 1, MI, 2, NSML, 2, NSMR, 3};

const int M3R_connections[] = {I1L, 4, I1R, 4, I3, 2, I4, 6, I5, 3, I6, 1, M1, 2,
       M3L, 1, MCL, 1, MCR, 1, MI, 2, NSML, 2, NSMR, 3};

const int M4_connections[] = {I3, 1, I5, 13, I6, 3, M2L, 1, M2R, 1, M4, 6, M5, 1,
       NSML, 1, NSMR, 1};

const int M5_connections[] = {I5, 3, I5, 1, I6, 1, M1, 2, M2L, 2, M2R, 2, M5, 4};

const int MCL_connections[] = {I1L, 3, I1R, 3, I2L, 1, I2R, 1, I3, 1, M1, 2, M2L,
       2, M2R, 2};

const int MCR_connections[] = {I1L, 3, I1R, 3, I3, 1, M1, 2, M2L, 2, M2R, 2};

const int MI_connections[] = {I1L, 1, I1R, 1, I3, 1, I4, 1, I5, 2, M1, 1, M2L, 2,
       M2R, 2, M3L, 1, M3R, 1, MCL, 2, MCR, 2};

const int NSML_connections[] = {I1L, 1, I1R, 2, I2L, 6, I2R, 6, I3, 2, I4, 3, I5,
       2, I6, 2, M3L, 2, M3R, 2};

const int NSMR_connections[] = {I1L, 2, I1R, 2, I2L, 6, I2R, 6, I3, 2, I4, 3, I5,
       2, I6, 2, M3L, 2, M3R, 2};

const int OLLL_connections[] = {AVER, 21, CEPDL, 3, CEPVL, 4, IL1DL, 1, IL1VL, 2,
       OLLR, 2, RIBL, 8, RIGL, 1, RMDDL, 7, RMDL, 2, RMDVL, 1, RMEL, 2, SMDDL, 3,
       SMDDR, 4, SMDVR, 4, URYDL, 1};

const int OLLR_connections[] = {AVEL, 16, CEPDR, 1, CEPVR, 6, IL1DR, 3, IL1VR, 1,
       IL2R, 1, OLLL, 2, RIBR, 10, RIGR, 1, RMDDR, 10, RMDL, 3, RMDVR, 3, RMER, 2,
       SMDDR, 1, SMDVL, 4, SMDVR, 3};

const int OLQDL_connections[] = {CEPDL, 1, RIBL, 2, RICR, 1, RIGL, 1, RMDDR, 4,
       RMDVL, 1, SIBVL, 3, URBL, 1};

const int OLQDR_connections[] = {CEPDR, 2, RIBR, 2, RICL, 1, RICR, 1, RIGR, 1, RIH,
       1, RMDDL, 3, RMDVR, 1, RMHR, 1, SIBVR, 2, URBR, 1};

const int OLQVL_connections[] = {ADLL, 1, CEPVL, 1, IL1VL, 1, IL2VL, 1, RIBL, 1,
       RICL, 1, RIGL, 1, RIH, 1, RIPL, 1, RMDDL, 1, RMDVR, 4, SIBDL, 3, URBL, 1};

const int OLQVR_connections[] = {CEPVR, 1, IL1VR, 1, RIBR, 1, RICR, 1, RIGR, 1,
       RIH, 2, RIPR, 2, RMDDR, 1, RMDVL, 4, RMER, 1, SIBDR, 4, URBR, 1};

const int PDA_connections[] = {AS11, 1, DA9, 1, DD6, 1, MDL21, 2, PVNR, 1, VD13, 3};

const int PDB_connections[] = {AS11, 2, MVL22, 1, MVR21, 1, RID, 2, VD13, 2};

const int PDEL_connections[] = {AVKL, 6, DVA, 24, PDER, 1, PDER, 3, PVCR, 1, PVM,
       2, PVM, 1, PVR, 2, VA9, 1, VD11, 1};

const int PDER_connections[] = {AVKL, 16, DVA, 35, PDEL, 3, PVCL, 1, PVCR, 1, PVM,
       1, VA8, 1, VD9, 1};

const int PHAL_connections[] = {AVDR, 1, AVFL, 3, AVG, 5, AVHL, 1, AVHR, 1, DVA, 2,
       PHAR, 5, PHAR, 2, PHBL, 5, PHBR, 5, PVQL, 2};

const int PHAR_connections[] = {AVG, 3, AVHR, 1, DA8, 1, DVA, 1, PHAL, 6, PHAL, 2,
       PHBL, 1, PHBR, 5, PVPL, 3, PVQL, 2};

const int PHBL_connections[] = {AVAL, 9, AVAR, 6, AVDL, 1, PHBR, 1, PHBR, 3, PVCL,
       13, VA12, 1};

const int PHBR_connections[] = {AVAL, 7, AVAR, 7, AVDL, 1, AVDR, 1, AVFL, 1, AVHL,
       1, DA8, 1, PHBL, 1, PHBL, 3, PVCL, 6, PVCR, 3, VA12, 2};

const int PHCL_connections[] = {AVAL, 1, DA9, 7, DA9, 1, DVA, 6, LUAL, 1, PHCR, 1,
       PLML, 1, PVCL, 2, VA12, 3};

const int PHCR_connections[] = {AVHR, 1, DA9, 2, DVA, 8, LUAR, 1, PHCL, 2, PVCR, 9,
       VA12, 2};

const int PLML_connections[] = {HSNL, 1, LUAL, 1, PHCL, 1, PVCL, 1};

const int PLMR_connections[] = {AS6, 1, AVAL, 4, AVAR, 1, AVDL, 1, AVDR, 4, DVA, 5,
       HSNR, 1, LUAR, 1, PDEL, 2, PDER, 3, PVCL, 2, PVCR, 1, PVR, 2};

const int PLNL_connections[] = {SAADL, 5, SMBVL, 6};

const int PLNR_connections[] = {SAADR, 4, SMBVR, 6};

const int PQR_connections[] = {AVAL, 8, AVAR, 11, AVDL, 7, AVDR, 6, AVG, 1, LUAR,
       1, PVNL, 1, PVPL, 4};

const int PVCL_connections[] = {AS1, 1, AVAL, 3, AVAR, 4, AVBL, 5, AVBR, 12, AVDL,
       5, AVDR, 2, AVEL, 3, AVER, 1, AVJL, 4, AVJR, 2, DA2, 1, DA5, 1, DA6, 1, DB2,
       3, DB3, 4, DB4, 3, DB5, 2, DB6, 2, DB7, 3, DVA, 5, PLML, 1, PVCR, 7, RID, 5,
       RIS, 2, SIBVL, 2, VB10, 3, VB11, 1, VB3, 1, VB4, 1, VB5, 1, VB6, 2, VB8, 1,
       VB9, 2};

const int PVCR_connections[] = {AQR, 1, AS2, 1, AVAL, 12, AVAR, 10, AVBL, 8, AVBR,
       6, AVDL, 5, AVDR, 1, AVEL, 1, AVER, 1, AVJL, 3, AVL, 1, DA9, 1, DB2, 1, DB3,
       3, DB4, 4, DB5, 1, DB6, 2, DB7, 1, FLPL, 1, LUAR, 1, PDEL, 2, PHCR, 1, PLMR,
       1, PVCL, 8, PVDL, 1, PVR, 1, PVWL, 2, PVWR, 2, RID, 5, SIBVR, 2, VA8, 2, VA9,
       1, VB10, 1, VB4, 3, VB6, 2, VB7, 3, VB8, 1};

const int PVDL_connections[] = {AVAL, 6, AVAR, 6, DD5, 1, PVCL, 1, PVCR, 6, VD10,
       6};

const int PVDR_connections[] = {AVAL, 6, AVAR, 9, DVA, 3, PVCL, 13, PVCR, 10, PVDL,
       1, VA9, 1};

const int PVM_connections[] = {AVKL, 11, AVL, 1, AVM, 1, DVA, 3, PDEL, 7, PDEL, 1,
       PDER, 8, PDER, 1, PVCL, 2, PVR, 1};

const int PVNL_connections[] = {AVAL, 2, AVBR, 3, AVDL, 3, AVDR, 3, AVEL, 1, AVFR,
       1, AVG, 1, AVJL, 5, AVJR, 5, AVL, 2, BDUL, 1, BDUR, 2, DD1, 2, MVL09, 3, PQR,
       1, PVCL, 1, PVNR, 5, PVQR, 1, PVT, 1, PVWL, 1, RIFL, 1};

const int PVNR_connections[] = {AVAL, 2, AVBL, 1, AVBR, 2, AVDR, 1, AVEL, 3, AVJL,
       4, AVJR, 1, AVL, 2, BDUL, 1, BDUR, 2, DD3, 1, HSNR, 2, MVL12, 1, MVL13, 2,
       PQR, 2, PVCL, 1, PVNL, 1, PVT, 2, PVWL, 2, VC2, 1, VC3, 1, VD12, 1, VD6, 1,
       VD7, 1};

const int PVPL_connections[] = {ADAL, 1, AQR, 8, AVAL, 2, AVAR, 1, AVBL, 5, AVBR,
       6, AVDR, 2, AVER, 1, AVHR, 1, AVKL, 1, AVKR, 6, DVC, 2, PHAR, 3, PQR, 4, PVCR,
       3, PVPR, 1, PVT, 1, RIGL, 2, VD13, 2, VD3, 1};

const int PVPR_connections[] = {ADFR, 1, AQR, 11, ASHR, 1, AVAL, 1, AVAR, 2, AVBL,
       4, AVBR, 5, AVHL, 3, AVKL, 1, AVL, 4, DD2, 1, DVC, 14, PVCL, 4, PVCR, 7, PVPL,
       1, PVQR, 1, RIAR, 2, RIGR, 1, RIMR, 1, RMGR, 1, VD4, 1, VD5, 1};

const int PVQL_connections[] = {ADAL, 1, AIAL, 3, ASJL, 1, ASKL, 4, ASKL, 5, HSNL,
       2, PVQR, 2, RMGL, 1};

const int PVQR_connections[] = {ADAR, 1, AIAR, 7, ASER, 1, ASKR, 8, AVBL, 1, AVFL,
       1, AVFR, 1, AVL, 1, AWAR, 2, DD1, 1, DVC, 1, HSNR, 1, PVNL, 1, PVQL, 1, PVT,
       1, RIFR, 1, VD1, 1};

const int PVR_connections[] = {ADAL, 1, ALML, 1, AS6, 1, AVBL, 4, AVBR, 4, AVJL, 3,
       AVJR, 2, AVKL, 1, DA9, 1, DB2, 1, DB3, 1, DVA, 3, IL1DL, 1, IL1DR, 1, IL1VL,
       1, IL1VR, 1, LUAL, 1, LUAR, 1, PDEL, 1, PDER, 1, PLMR, 2, PVCR, 1, RIPL, 3,
       RIPR, 3, SABD, 1, URADL, 1};

const int PVT_connections[] = {AIBL, 3, AIBR, 5, AVKL, 9, AVKR, 7, AVL, 2, DVC, 2,
       PVPL, 1, RIBL, 1, RIBR, 1, RIGL, 2, RIGR, 3, RIH, 1, RMEV, 1, RMFL, 2, RMFR,
       3, SMBDR, 1};

const int PVWL_connections[] = {AVJL, 1, PVCR, 2, PVT, 2, PVWR, 1, VA12, 1};

const int PVWR_connections[] = {AVAR, 1, AVDR, 1, PVCR, 2, PVT, 1, VA12, 1};

const int RIAL_connections[] = {CEPVL, 1, RIAR, 1, RIVL, 2, RIVR, 4, RMDDL, 12,
       RMDDR, 7, RMDL, 6, RMDR, 6, RMDVL, 9, RMDVR, 11, SIADL, 2, SMDDL, 8, SMDDR,
       10, SMDVL, 6, SMDVR, 11};

const int RIAR_connections[] = {CEPVR, 1, IL1R, 1, RIAL, 4, RIVL, 1, RMDDL, 10,
       RMDDR, 11, RMDL, 3, RMDR, 8, RMDVL, 12, RMDVR, 10, SAADR, 1, SIADL, 1, SIADR,
       1, SIAVL, 1, SMDDL, 7, SMDDR, 7, SMDVL, 13, SMDVR, 7};

const int RIBL_connections[] = {AIBR, 2, AUAL, 1, AVAL, 1, AVBL, 1, AVBR, 2, AVDR,
       1, AVEL, 1, AVER, 5, BAGR, 1, OLQDL, 2, OLQVL, 1, PVT, 1, RIAL, 3, RIBL, 1,
       RIBR, 3, RIGL, 1, SIADL, 1, SIAVL, 1, SIBDL, 1, SIBVL, 1, SIBVR, 1, SMBDL, 1,
       SMDDL, 1, SMDVR, 4};

const int RIBR_connections[] = {AIBL, 1, AIZR, 1, AVAR, 2, AVBL, 1, AVBR, 1, AVEL,
       3, AVER, 1, BAGL, 1, OLQDR, 2, OLQVR, 1, PVT, 1, RIAR, 2, RIBL, 3, RIBR, 1,
       RIGR, 2, RIH, 1, SIADR, 1, SIAVR, 1, SIBDR, 1, SIBVR, 1, SMBDR, 1, SMDDL, 2,
       SMDDR, 1, SMDVL, 2};

const int RICL_connections[] = {ADAR, 1, ASHL, 2, AVAL, 5, AVAR, 6, AVKL, 1, AVKR,
       2, AWBR, 1, RIML, 1, RIMR, 3, RIVR, 1, RMFR, 1, SMBDL, 2, SMDDL, 3, SMDDR, 3,
       SMDVR, 1};

const int RICR_connections[] = {ADAR, 1, ASHR, 2, AVAL, 5, AVAR, 5, AVKL, 1, SMBDR,
       1, SMDDL, 4, SMDDR, 3, SMDVL, 2, SMDVR, 1};

const int RID_connections[] = {ALA, 1, AS2, 1, AVBL, 1, AVBR, 2, DA6, 3, DA9, 1,
       DB1, 1, DD1, 4, DD2, 4, DD3, 3, MDL14, 2, MDL21, 3, PDB, 2, VD13, 1, VD5, 1};

const int RIFL_connections[] = {ALML, 2, AVBL, 10, AVBR, 1, AVG, 1, AVHR, 1, AVJR,
       2, PVPL, 3, RIML, 4, VD1, 1};

const int RIFR_connections[] = {ASHR, 2, AVBL, 1, AVBR, 17, AVFL, 1, AVG, 1, AVHL,
       1, AVJL, 1, AVJR, 2, HSNR, 1, PVCL, 1, PVCR, 1, PVPR, 4, RIMR, 4, RIPR, 1};

const int RIGL_connections[] = {AIBR, 3, AIZR, 1, ALNL, 1, AQR, 2, AVEL, 1, AVER,
       1, AVKL, 1, AVKR, 2, BAGR, 2, DVC, 1, OLLL, 1, OLQDL, 1, OLQVL, 1, RIBL, 2,
       RIGR, 3, RIR, 2, RMEL, 2, RMHR, 3, URYDL, 1, URYVL, 1, VB2, 1, VD1, 2};

const int RIGR_connections[] = {AIBL, 3, ALNR, 1, AQR, 1, AVER, 2, AVKL, 4, AVKR,
       2, BAGL, 1, OLLR, 1, OLQDR, 1, OLQVR, 1, RIBR, 2, RIGL, 3, RIR, 1, RMHL, 4,
       URYDR, 1, URYVR, 1};

const int RIH_connections[] = {ADFR, 1, AIZL, 4, AIZR, 4, AUAR, 1, BAGR, 1, CEPDL,
       2, CEPDR, 2, CEPVL, 2, CEPVR, 2, FLPL, 1, IL2L, 2, IL2R, 1, OLQDL, 4, OLQDR,
       2, OLQVL, 1, OLQVR, 6, RIAL, 10, RIAR, 8, RIBL, 5, RIBR, 4, RIPL, 4, RIPR, 6,
       RMER, 2, RMEV, 1, URYVR, 1};

const int RIML_connections[] = {AIBR, 1, AIYL, 1, AVAL, 1, AVAR, 2, AVBL, 2, AVBR,
       3, AVEL, 2, AVER, 3, MDR05, 2, MVR05, 2, RIBL, 1, RIS, 1, RMDL, 1, RMDR, 1,
       RMFR, 1, SAADR, 1, SAAVL, 3, SAAVR, 2, SMDDR, 5, SMDVL, 1};

const int RIMR_connections[] = {ADAR, 1, AIBL, 4, AIBL, 1, AIYR, 1, AVAL, 5, AVAR,
       1, AVBL, 2, AVBR, 5, AVEL, 3, AVER, 2, AVJL, 1, AVKL, 1, MDL05, 1, MDL07, 1,
       MVL05, 1, MVL07, 1, RIBR, 1, RIS, 2, RMDL, 1, RMDR, 1, RMFL, 1, RMFR, 1,
       SAAVL, 3, SAAVR, 3, SMDDL, 2, SMDDR, 4};

const int RIPL_connections[] = {OLQDL, 1, OLQDR, 1, RMED, 1};

const int RIPR_connections[] = {OLQDL, 1, OLQDR, 1, RMED, 1};

const int RIR_connections[] = {AFDR, 1, AIZL, 3, AIZR, 5, AUAL, 1, AWBR, 1, BAGL,
       1, BAGR, 2, DVA, 2, HSNL, 1, PVPL, 1, RIAL, 5, RIAR, 1, RIGL, 1, URXL, 5,
       URXR, 1};

const int RIS_connections[] = {AIBR, 1, AVEL, 7, AVER, 7, AVJL, 1, AVKL, 1, AVKR,
       4, AVL, 2, CEPDR, 1, CEPVL, 2, CEPVR, 1, DB1, 1, OLLR, 1, RIBL, 3, RIBR, 5,
       RIML, 2, RIMR, 5, RMDDL, 1, RMDL, 2, RMDR, 4, SMDDL, 1, SMDDR, 3, SMDVL, 1,
       SMDVR, 1, URYVR, 1};

const int RIVL_connections[] = {AIBL, 1, MVR05, 2, MVR06, 2, MVR08, 3, RIAL, 1,
       RIAR, 1, RIVR, 2, RMDL, 2, SAADR, 3, SDQR, 2, SIAVR, 2, SMDDR, 1, SMDVL, 1};

const int RIVR_connections[] = {AIBR, 1, MVL05, 2, MVL06, 2, MVL08, 2, MVR04, 2,
       MVR06, 2, RIAL, 2, RIAR, 1, RIVL, 2, RMDDL, 1, RMDR, 1, RMDVR, 1, RMEV, 1,
       SAADL, 2, SDQR, 2, SIAVL, 2, SMDDL, 2, SMDVR, 4};

const int RMDDL_connections[] = {MDR01, 1, MDR02, 1, MDR03, 1, MDR04, 1, MDR08, 2,
       MVR01, 1, OLQVL, 1, RMDL, 1, RMDVL, 1, RMDVR, 7, SMDDL, 1};

const int RMDDR_connections[] = {MDL01, 1, MDL02, 1, MDL03, 2, MDL04, 1, MDR04, 1,
       MVR01, 1, MVR02, 1, OLQVR, 1, RMDVL, 12, RMDVR, 1, SAADR, 1, SMDDR, 1, URYDL,
       1};

const int RMDL_connections[] = {MDL03, 1, MDL05, 2, MDR01, 1, MDR03, 1, MVL01, 1,
       MVR01, 1, MVR03, 1, MVR05, 2, MVR07, 1, OLLR, 2, RIAL, 4, RIAR, 3, RMDDL, 1,
       RMDDR, 1, RMDR, 3, RMDVL, 1, RMER, 1, RMFL, 1};

const int RMDR_connections[] = {AVKL, 1, MDL03, 1, MDL05, 1, MDR05, 1, MVL03, 1,
       MVL05, 1, RIAL, 3, RIAR, 7, RIMR, 2, RIS, 1, RMDDL, 1, RMDL, 1, RMDVR, 1};

const int RMDVL_connections[] = {AVER, 1, MDR01, 1, MVL04, 1, MVR01, 1, MVR02, 1,
       MVR03, 1, MVR04, 1, MVR05, 1, MVR06, 1, MVR08, 1, OLQDL, 1, RMDDL, 1, RMDDR,
       6, RMDL, 1, RMDVR, 1, SAAVL, 1, SMDVL, 1};

const int RMDVR_connections[] = {AVEL, 1, AVER, 1, MDL01, 1, MVL01, 1, MVL02, 1,
       MVL03, 1, MVL04, 1, MVL05, 1, MVL06, 1, MVL08, 1, MVR04, 1, MVR06, 1, MVR08,
       1, OLQDR, 1, RMDDL, 4, RMDDR, 1, RMDR, 1, RMDVL, 1, SAAVR, 1, SIBDR, 1, SIBVR,
       1, SMDVR, 1};

const int RMED_connections[] = {IL1VL, 1, MVL02, 4, MVL04, 4, MVL06, 4, MVR02, 4,
       MVR04, 4, RIBL, 1, RIBR, 1, RIPL, 1, RIPR, 1, RMEV, 2};

const int RMEL_connections[] = {MDR01, 5, MDR03, 5, MVR01, 5, MVR03, 5, RIGL, 1,
       RMEV, 1};

const int RMER_connections[] = {MDL01, 7, MDL03, 7, MVL01, 7, RMEV, 1};

const int RMEV_connections[] = {AVEL, 1, AVER, 1, IL1DL, 1, IL1DR, 1, MDL02, 3,
       MDL04, 3, MDL06, 3, MDR02, 3, MDR04, 3, RMED, 2, RMEL, 1, RMER, 1, SMDDR, 1};

const int RMFL_connections[] = {AVKL, 4, AVKR, 4, MDR03, 1, MVR01, 1, MVR03, 1,
       PVT, 1, RIGR, 1, RMDR, 3, RMGR, 1, URBR, 1};

const int RMFR_connections[] = {AVKL, 3, AVKR, 3, RMDL, 2};

const int RMGL_connections[] = {ADAL, 1, ADLL, 1, AIBR, 1, ALML, 1, ALNL, 1, ASHL,
       2, ASKL, 2, AVAL, 1, AVBR, 2, AVEL, 2, AWBL, 1, CEPDL, 1, IL2L, 1, MDL05, 2,
       MVL05, 2, RID, 1, RMDL, 1, RMDR, 3, RMDVL, 3, RMHL, 3, RMHR, 1, SIAVL, 1,
       SIBVL, 3, SIBVR, 1, SMBVL, 1, URXL, 2};

const int RMGR_connections[] = {ADAR, 1, AIMR, 1, ALNR, 1, ASHR, 2, ASKR, 1, AVAR,
       1, AVBR, 1, AVDL, 1, AVER, 3, AVJL, 1, AWBR, 1, IL2R, 1, MDR05, 1, MVR05, 1,
       MVR07, 1, RIR, 1, RMDL, 4, RMDR, 2, RMDVR, 5, RMHR, 1, URXR, 2};

const int RMHL_connections[] = {MDR01, 2, MDR03, 3, MVR01, 2, RMDR, 1, RMGL, 3,
       SIBVR, 1};

const int RMHR_connections[] = {MDL01, 2, MDL03, 2, MDL05, 2, MVL01, 2, RMER, 1,
       RMGL, 1, RMGR, 1};

const int SAADL_connections[] = {AIBL, 1, AVAL, 6, RIML, 3, RIMR, 6, RMGR, 1,
       SMBDL, 1};

const int SAADR_connections[] = {AIBR, 1, AVAR, 3, OLLL, 1, RIML, 4, RIMR, 5,
       RMDDR, 1, RMFL, 1, RMGL, 1};

const int SAAVL_connections[] = {AIBL, 1, ALNL, 1, AVAL, 16, OLLR, 1, RIML, 2,
       RIMR, 12, RMDVL, 2, RMFR, 2, SMBVR, 3, SMDDR, 8};

const int SAAVR_connections[] = {AVAR, 13, RIML, 5, RIMR, 2, RMDVR, 1, SMBVL, 2,
       SMDDL, 6};

const int SABD_connections[] = {AVAL, 4, VA2, 4, VA3, 2, VA4, 1};

const int SABVL_connections[] = {AVAR, 3, DA1, 2, DA2, 1};

const int SABVR_connections[] = {AVAL, 1, AVAR, 1, DA1, 3};

const int SDQL_connections[] = {ALML, 2, AVAL, 1, AVAR, 3, AVEL, 1, FLPL, 1, RICR,
       1, RIS, 3, RMFL, 1, SDQR, 1};

const int SDQR_connections[] = {ADLL, 1, AIBL, 2, AVAL, 3, AVBL, 7, AVBR, 4, DVA,
       3, RICR, 1, RIVL, 2, RIVR, 2, RMHL, 2, RMHR, 1, SDQL, 1, SIBVL, 1};

const int SIADL_connections[] = {RIBL, 1};

const int SIADR_connections[] = {RIBR, 1};

const int SIAVL_connections[] = {RIBL, 1};

const int SIAVR_connections[] = {RIBR, 1};

const int SIBDL_connections[] = {RIBL, 1, SIBVL, 1};

const int SIBDR_connections[] = {AIML, 1, RIBR, 1, SIBVR, 1};

const int SIBVL_connections[] = {AVBL, 1, AVBR, 1, RIBL, 1, SDQR, 1, SIBDL, 1};

const int SIBVR_connections[] = {RIBL, 1, RIBR, 1, RMHL, 1, SIBDR, 1};

const int SMBDL_connections[] = {AVAR, 1, AVKL, 1, AVKR, 1, MDR01, 2, MDR02, 2,
       MDR03, 2, MDR04, 2, MDR06, 3, RIBL, 1, RMED, 3, SAADL, 1, SAAVR, 1};

const int SMBDR_connections[] = {ALNL, 1, AVAL, 1, AVKL, 1, AVKR, 2, MDL02, 1,
       MDL03, 1, MDL04, 1, MDL06, 2, MDR04, 1, MDR08, 1, RIBR, 1, RMED, 4, SAAVL, 3};

const int SMBVL_connections[] = {MVL01, 1, MVL02, 1, MVL03, 1, MVL04, 1, MVL05, 1,
       MVL06, 1, MVL08, 1, PLNL, 1, RMEV, 5, SAADL, 3, SAAVR, 2};

const int SMBVR_connections[] = {AVKL, 1, AVKR, 1, MVR01, 1, MVR02, 1, MVR03, 1,
       MVR04, 1, MVR06, 1, MVR07, 1, RMEV, 3, SAADR, 4, SAAVL, 3};

const int SMDDL_connections[] = {MDL04, 1, MDL06, 1, MDL08, 1, MDR02, 1, MDR03, 1,
       MDR04, 1, MDR05, 1, MDR06, 1, MDR07, 1, MVL02, 1, MVL04, 1, RIAL, 1, RIAR, 1,
       RIBL, 1, RIBR, 1, RIS, 1, RMDDL, 1, SMDVR, 2};

const int SMDDR_connections[] = {MDL04, 1, MDL05, 1, MDL06, 1, MDL08, 1, MDR04, 1,
       MDR06, 1, MVR02, 1, RIAL, 2, RIAR, 1, RIBR, 1, RIS, 1, RMDDR, 1, VD1, 1};

const int SMDVL_connections[] = {MVL03, 1, MVL06, 1, MVR02, 1, MVR03, 1, MVR04, 1,
       MVR06, 1, PVR, 1, RIAL, 3, RIAR, 8, RIBR, 2, RIS, 1, RIVL, 2, RMDDR, 1, RMDVL,
       1, SMDDR, 4, SMDVR, 1};

const int SMDVR_connections[] = {MVL02, 1, MVL03, 1, MVL04, 1, MVR07, 1, RIAL, 7,
       RIAR, 5, RIBL, 2, RIVR, 1, RIVR, 2, RMDDL, 1, RMDVR, 1, SMDDL, 2, SMDVL, 1,
       VB1, 1};

const int URADL_connections[] = {IL1DL, 2, MDL02, 2, MDL03, 2, MDL04, 2, RIPL, 3,
       RMEL, 1};

const int URADR_connections[] = {IL1DR, 1, MDR01, 3, MDR02, 2, MDR03, 3, RIPR, 3,
       RMDVR, 1, RMED, 1, RMER, 1, URYDR, 1};

const int URAVL_connections[] = {MVL01, 2, MVL02, 2, MVL03, 3, MVL04, 2, RIPL, 3,
       RMEL, 1, RMER, 1, RMEV, 2};

const int URAVR_connections[] = {IL1R, 1, MVR01, 2, MVR02, 2, MVR03, 2, MVR04, 2,
       RIPR, 3, RMDVL, 1, RMER, 2, RMEV, 2};

const int URBL_connections[] = {AVBL, 1, CEPDL, 1, IL1L, 1, OLQDL, 1, OLQVL, 1,
       RICR, 1, RMDDR, 1, SIAVL, 1, SMBDR, 1, URXL, 2};

const int URBR_connections[] = {ADAR, 1, AVBR, 1, CEPDR, 1, IL1R, 3, IL2R, 1,
       OLQDR, 1, OLQVR, 1, RICR, 1, RMDL, 1, RMDR, 1, RMFL, 1, SIAVR, 2, SMBDL, 1,
       URXR, 4};

const int URXL_connections[] = {ASHL, 1, AUAL, 5, AVBL, 1, AVEL, 4, AVJR, 1, RIAL,
       8, RICL, 1, RIGL, 3, RMGL, 2, RMGL, 1};

const int URXR_connections[] = {AUAR, 4, AVBL, 1, AVBR, 2, AVER, 2, IL2R, 1, OLQVR,
       1, RIAR, 3, RIGR, 2, RIPR, 3, RMDR, 1, RMGR, 2, SIAVR, 1};

const int URYDL_connections[] = {AVAL, 1, AVER, 2, RIBL, 1, RIGL, 1, RMDDR, 4,
       RMDVL, 6, SMDDL, 1, SMDDR, 1};

const int URYDR_connections[] = {AVAR, 1, AVEL, 2, AVER, 2, RIBR, 1, RIGR, 1,
       RMDDL, 3, RMDVR, 5, SMDDL, 4};

const int URYVL_connections[] = {AVAR, 1, AVBR, 1, AVER, 5, IL1VL, 1, RIAL, 1,
       RIBL, 2, RIGL, 1, RIH, 1, RIS, 1, RMDDL, 4, RMDVR, 2, SIBVR, 1, SMDVR, 4};

const int URYVR_connections[] = {AVAL, 2, AVEL, 6, IL1VR, 1, RIAR, 1, RIBR, 1,
       RIGR, 1, RMDDR, 6, RMDVL, 4, SIBDR, 1, SIBVL, 1, SMDVL, 3};

const int VA1_connections[] = {AVAL, 3, DA2, 2, DD1, 9, MVL07, 3, MVL08, 3, MVR07,
       3, MVR08, 3, VD1, 2};

const int VA2_connections[] = {AVAL, 5, DD1, 13, MVL07, 5, MVL10, 5, MVR07, 5,
       MVR10, 5, SABD, 3, VA3, 2, VB1, 2, VD1, 2, VD1, 1, VD2, 11};

const int VA3_connections[] = {AS1, 1, AVAL, 1, AVAR, 2, DD1, 18, DD2, 11, MVL09,
       5, MVL10, 5, MVL12, 5, MVR09, 5, MVR10, 5, MVR12, 5, SABD, 2, VA4, 1, VD2, 3,
       VD3, 3};

const int VA4_connections[] = {AS2, 2, AVAL, 1, AVAR, 2, AVDL, 1, DA5, 1, DD2, 21,
       MVL11, 6, MVL12, 6, MVR11, 6, MVR12, 6, SABD, 1, VB3, 2, VD4, 3};

const int VA5_connections[] = {AS3, 2, AVAL, 5, AVAR, 3, DA5, 2, DD2, 5, DD3, 13,
       MVL11, 5, MVL14, 5, MVR11, 5, MVR14, 5, VD5, 2};

const int VA6_connections[] = {AVAL, 6, AVAR, 2, DD3, 24, MVL13, 5, MVL14, 5,
       MVR13, 5, MVR14, 5, VB5, 2, VD5, 1, VD6, 2};

const int VA7_connections[] = {AS5, 1, AVAL, 2, AVAR, 4, DD3, 3, DD4, 12, MVL13, 4,
       MVL15, 4, MVL16, 4, MVR13, 4, MVR15, 4, MVR16, 4, MVULVA, 4, VB3, 1, VD7, 9};

const int VA8_connections[] = {AS6, 1, AVAL, 10, AVAR, 4, AVBR, 1, DD4, 21, MVL15,
       6, MVL16, 6, MVR15, 6, MVR16, 6, PDER, 1, PVCR, 2, VA8, 1, VA9, 1, VB6, 1,
       VB8, 1, VB8, 3, VB9, 3, VD7, 5, VD8, 5, VD8, 1};

const int VA9_connections[] = {AVAL, 1, AVBR, 1, DD4, 3, DD5, 15, DVB, 1, DVC, 1,
       MVL15, 5, MVL18, 5, MVR15, 5, MVR18, 5, PVCR, 1, PVT, 1, VB8, 6, VB8, 1, VB9,
       4, VD7, 1, VD9, 10};

const int VA10_connections[] = {AVAL, 1, AVAR, 1, MVL17, 5, MVL18, 5, MVR17, 5,
       MVR18, 5};

const int VA11_connections[] = {AVAL, 1, AVAR, 7, DD6, 10, MVL19, 5, MVL20, 5,
       MVR19, 5, MVR20, 5, PVNR, 2, VB10, 1, VD12, 4};

const int VA12_connections[] = {AS11, 2, AVAR, 1, DA8, 3, DA9, 5, DB7, 4, DD6, 2,
       LUAL, 2, MVL21, 5, MVL22, 5, MVL23, 5, MVR21, 5, MVR22, 5, MVR23, 5, MVR24, 5,
       PHCL, 1, PHCR, 1, PVCL, 2, PVCR, 3, VA11, 1, VB11, 1, VD12, 3, VD13, 11};

const int VB1_connections[] = {AIBR, 1, AVBL, 1, AVKL, 4, DB2, 2, DD1, 1, DVA, 1,
       MVL07, 1, MVL08, 1, MVR07, 1, MVR08, 1, RIML, 2, RMFL, 2, SAADL, 9, SAADR, 2,
       SABD, 1, SMDVR, 1, VA1, 3, VA3, 1, VB2, 4, VD1, 3, VD2, 1};

const int VB2_connections[] = {AVBL, 3, AVBR, 1, DB4, 1, DD1, 20, DD2, 1, MVL07, 4,
       MVL09, 4, MVL10, 4, MVL12, 4, MVR07, 4, MVR09, 4, MVR10, 4, MVR12, 4, RIGL, 1,
       VA2, 1, VB1, 4, VB3, 1, VB5, 1, VB7, 2, VC2, 1, VD2, 9, VD3, 3};

const int VB3_connections[] = {AVBR, 1, DB1, 1, DD2, 37, MVL11, 6, MVL12, 6, MVL14,
       6, MVR11, 6, MVR12, 6, MVR14, 6, VA4, 1, VA7, 1, VB2, 1};

const int VB4_connections[] = {AVBL, 1, AVBR, 1, DB1, 1, DB4, 1, DD2, 6, DD3, 16,
       MVL11, 5, MVL14, 5, MVR11, 5, MVR14, 5, VB5, 1};

const int VB5_connections[] = {AVBL, 1, DD3, 27, MVL13, 6, MVL14, 6, MVR13, 6,
       MVR14, 6, VB2, 1, VB4, 1, VB6, 8};

const int VB6_connections[] = {AVBL, 1, AVBR, 2, DA4, 1, DD4, 30, MVL15, 6, MVL16,
       6, MVR15, 6, MVR16, 6, MVULVA, 6, VA8, 1, VB5, 1, VB7, 1, VD6, 1, VD7, 8};

const int VB7_connections[] = {AVBL, 2, AVBR, 2, DD4, 2, MVL15, 5, MVR15, 5, VB2,
       2};

const int VB8_connections[] = {AVBL, 7, AVBR, 3, DD5, 30, MVL17, 5, MVL18, 5,
       MVL20, 5, MVR17, 5, MVR18, 5, MVR20, 5, VA8, 3, VA9, 9, VA9, 1, VB9, 6, VD10,
       1, VD9, 10};

const int VB9_connections[] = {AVAL, 5, AVAR, 4, AVBL, 1, AVBR, 6, DD5, 8, DVB, 1,
       MVL17, 6, MVL20, 6, MVR17, 6, MVR20, 6, PVCL, 2, VA8, 3, VA9, 4, VB8, 1, VB8,
       3, VD10, 5};

const int VB10_connections[] = {AVBL, 2, AVBR, 1, AVKL, 1, DD6, 9, MVL19, 5, MVL20,
       5, MVR19, 5, MVR20, 5, PVCL, 1, PVT, 1, VD11, 1, VD12, 2};

const int VB11_connections[] = {AVBL, 2, AVBR, 1, DD6, 7, MVL21, 5, MVL22, 5,
       MVL23, 5, MVR21, 5, MVR22, 5, MVR23, 5, MVR24, 5, PVCR, 1, VA12, 2};

const int VC1_connections[] = {AVL, 2, DD1, 7, DD2, 6, DD3, 6, DVC, 1, MVULVA, 6,
       PVT, 2, VC2, 9, VC3, 3, VD1, 5, VD2, 1, VD3, 1, VD4, 2, VD5, 5, VD6, 1};

const int VC2_connections[] = {DB4, 1, DD1, 6, DD2, 4, DD3, 9, DVC, 1, MVULVA, 10,
       PVCR, 1, PVQR, 1, PVT, 2, VC1, 10, VC3, 6, VD1, 2, VD2, 2, VD4, 5, VD5, 5,
       VD6, 1};

const int VC3_connections[] = {AVL, 1, DD1, 2, DD2, 4, DD3, 5, DD4, 13, DVC, 1,
       HSNR, 1, MVULVA, 11, PVNR, 1, PVPR, 1, PVQR, 4, VC1, 4, VC2, 3, VC4, 1, VC5,
       2, VD1, 1, VD2, 1, VD3, 1, VD4, 2, VD5, 4, VD6, 4, VD7, 5};

const int VC4_connections[] = {AVBL, 1, AVFR, 1, AVHR, 1, MVULVA, 7, VC1, 1, VC3,
       5, VC5, 2};

const int VC5_connections[] = {AVFL, 1, AVFR, 1, DVC, 2, HSNL, 1, MVULVA, 2, OLLR,
       1, PVT, 1, URBL, 3, VC3, 3, VC4, 2};

const int VC6_connections[] = {MVULVA, 1};

const int VD1_connections[] = {DD1, 5, DVC, 5, MVL05, 5, MVL08, 5, MVR05, 5, MVR08,
       5, RIFL, 1, RIGL, 2, SMDDR, 1, VA1, 2, VA2, 1, VC1, 1, VD2, 7};

const int VD2_connections[] = {AS1, 1, DD1, 3, MVL07, 7, MVL10, 7, MVR07, 7, MVR10,
       7, VA2, 9, VB2, 3, VD1, 7, VD3, 2};

const int VD3_connections[] = {MVL09, 7, MVL12, 9, MVR09, 7, MVR12, 7, PVPL, 1,
       VA3, 2, VB2, 2, VD2, 2, VD4, 1};

const int VD4_connections[] = {DD2, 2, MVL11, 9, MVL12, 9, MVR11, 9, MVR12, 9,
       PVPR, 1, VD3, 1, VD5, 1};

const int VD5_connections[] = {AVAR, 1, MVL14, 17, MVR14, 17, PVPR, 1, VA5, 2, VB4,
       2, VD4, 1, VD6, 2};

const int VD6_connections[] = {AVAL, 1, MVL13, 7, MVL14, 7, MVL16, 7, MVR13, 7,
       MVR14, 7, MVR16, 7, VA6, 1, VB5, 2, VD5, 2, VD7, 1};

const int VD7_connections[] = {MVL15, 7, MVL16, 7, MVR15, 7, MVR16, 7, MVULVA, 15,
       VA9, 1, VD6, 1};

const int VD8_connections[] = {DD4, 2, MVL15, 18, MVR15, 18, VA8, 5};

const int VD9_connections[] = {MVL17, 10, MVL18, 10, MVR17, 10, MVR18, 10, PDER, 1,
       VD10, 5};

const int VD10_connections[] = {AVBR, 1, DD5, 2, DVC, 4, MVL17, 9, MVL20, 9, MVR17,
       9, MVR20, 9, VB9, 2, VD9, 5};

const int VD11_connections[] = {AVAR, 2, MVL19, 9, MVL20, 9, MVR19, 9, MVR20, 9,
       VA11, 1, VB10, 1};

const int VD12_connections[] = {MVL19, 5, MVL21, 5, MVR19, 5, MVR22, 5, VA11, 3,
       VA12, 2, VB10, 1, VB11, 1};

const int VD13_connections[] = {AVAR, 2, MVL21, 9, MVL22, 9, MVL23, 9, MVR21, 9,
       MVR22, 9, MVR23, 9, MVR24, 9, PVCL, 1, PVCR, 1, PVPL, 2, VA12, 1};

const int* connectome[NUM_NONMOTOR_NEURONS] = {ADAL_connections, ADAR_connections,
  ADEL_connections, ADER_connections, ADFL_connections,
  ADFR_connections, ADLL_connections, ADLR_connections,
  AFDL_connections, AFDR_connections, AIAL_connections,
  AIAR_connections, AIBL_connections, AIBR_connections,
  AIML_connections, AIMR_connections, AINL_connections,
  AINR_connections, AIYL_connections, AIYR_connections,
  AIZL_connections, AIZR_connections, ALA_connections,
  ALML_connections, ALMR_connections, ALNL_connections,
  ALNR_connections, AQR_connections, AS1_connections, AS2_connections,
  AS3_connections, AS4_connections, AS5_connections, AS6_connections,
  AS7_connections, AS8_connections, AS9_connections, AS10_connections,
  AS11_connections, ASEL_connections, ASER_connections,
  ASGL_connections, ASGR_connections, ASHL_connections,
  ASHR_connections, ASIL_connections, ASIR_connections,
  ASJL_connections, ASJR_connections, ASKL_connections,
  ASKR_connections, AUAL_connections, AUAR_connections,
  AVAL_connections, AVAR_connections, AVBL_connections,
  AVBR_connections, AVDL_connections, AVDR_connections,
  AVEL_connections, AVER_connections, AVFL_connections,
  AVFR_connections, AVG_connections, AVHL_connections,
  AVHR_connections, AVJL_connections, AVJR_connections,
  AVKL_connections, AVKR_connections, AVL_connections,
  AVM_connections, AWAL_connections, AWAR_connections,
  AWBL_connections, AWBR_connections, AWCL_connections,
  AWCR_connections, BAGL_connections, BAGR_connections,
  BDUL_connections, BDUR_connections, CEPDL_connections,
  CEPDR_connections, CEPVL_connections, CEPVR_connections,
  DA1_connections, DA2_connections, DA3_connections, DA4_connections,
  DA5_connections, DA6_connections, DA7_connections, DA8_connections,
  DA9_connections, DB1_connections, DB2_connections, DB3_connections,
  DB4_connections, DB5_connections, DB6_connections, DB7_connections,
  DD1_connections, DD2_connections, DD3_connections, DD4_connections,
  DD5_connections, DD6_connections, DVA_connections, DVB_connections,
  DVC_connections, FLPL_connections, FLPR_connections,
  HSNL_connections, HSNR_connections, I1L_connections,
  I1R_connections, I2L_connections, I2R_connections, I3_connections,
  I4_connections, I5_connections, I6_connections, IL1DL_connections,
  IL1DR_connections, IL1L_connections, IL1R_connections,
  IL1VL_connections, IL1VR_connections, IL2DL_connections,
  IL2DR_connections, IL2L_connections, IL2R_connections,
  IL2VL_connections, IL2VR_connections, LUAL_connections,
  LUAR_connections, M1_connections, M2L_connections, M2R_connections,
  M3L_connections, M3R_connections, M4_connections, M5_connections,
  MCL_connections, MCR_connections, MI_connections, NSML_connections,
  NSMR_connections, OLLL_connections, OLLR_connections,
  OLQDL_connections, OLQDR_connections, OLQVL_connections,
  OLQVR_connections, PDA_connections, PDB_connections,
  PDEL_connections, PDER_connections, PHAL_connections,
  PHAR_connections, PHBL_connections, PHBR_connections,
  PHCL_connections, PHCR_connections, PLML_connections,
  PLMR_connections, PLNL_connections, PLNR_connections,
  PQR_connections, PVCL_connections, PVCR_connections,
  PVDL_connections, PVDR_connections, PVM_connections,
  PVNL_connections, PVNR_connections, PVPL_connections,
  PVPR_connections, PVQL_connections, PVQR_connections,
  PVR_connections, PVT_connections, PVWL_connections,
  PVWR_connections, RIAL_connections, RIAR_connections,
  RIBL_connections, RIBR_connections, RICL_connections,
  RICR_connections, RID_connections, RIFL_connections,
  RIFR_connections, RIGL_connections, RIGR_connections,
  RIH_connections, RIML_connections, RIMR_connections,
  RIPL_connections, RIPR_connections, RIR_connections,
  RIS_connections, RIVL_connections, RIVR_connections,
  RMDDL_connections, RMDDR_connections, RMDL_connections,
  RMDR_connections, RMDVL_connections, RMDVR_connections,
  RMED_connections, RMEL_connections, RMER_connections,
  RMEV_connections, RMFL_connections, RMFR_connections,
  RMGL_connections, RMGR_connections, RMHL_connections,
  RMHR_connections, SAADL_connections, SAADR_connections,
  SAAVL_connections, SAAVR_connections, SABD_connections,
  SABVL_connections, SABVR_connections, SDQL_connections,
  SDQR_connections, SIADL_connections, SIADR_connections,
  SIAVL_connections, SIAVR_connections, SIBDL_connections,
  SIBDR_connections, SIBVL_connections, SIBVR_connections,
  SMBDL_connections, SMBDR_connections, SMBVL_connections,
  SMBVR_connections, SMDDL_connections, SMDDR_connections,
  SMDVL_connections, SMDVR_connections, URADL_connections,
  URADR_connections, URAVL_connections, URAVR_connections,
  URBL_connections, URBR_connections, URXL_connections,
  URXR_connections, URYDL_connections, URYDR_connections,
  URYVL_connections, URYVR_connections, VA1_connections,
  VA2_connections, VA3_connections, VA4_connections, VA5_connections,
  VA6_connections, VA7_connections, VA8_connections, VA9_connections,
  VA10_connections, VA11_connections, VA12_connections,
  VB1_connections, VB2_connections, VB3_connections, VB4_connections,
  VB5_connections, VB6_connections, VB7_connections, VB8_connections,
  VB9_connections, VB10_connections, VB11_connections,
  VC1_connections, VC2_connections, VC3_connections, VC4_connections,
  VC5_connections, VC6_connections, VD1_connections, VD2_connections,
  VD3_connections, VD4_connections, VD5_connections, VD6_connections,
  VD7_connections, VD8_connections, VD9_connections, VD10_connections,
  VD11_connections, VD12_connections, VD13_connections};

const int num_connections[NUM_NONMOTOR_NEURONS] = {19, 17, 29, 20, 8,
14, 19, 16, 4, 4, 15, 13, 19, 19, 17, 13, 9, 13, 9, 8, 15, 15, 6, 12,
7, 4, 6, 21, 10, 9, 12, 7, 9, 10, 8, 6, 7, 6, 12, 9, 11, 5, 5, 16, 18,
10, 9, 5, 4, 6, 9, 8, 9, 51, 56, 42, 40, 23, 28, 21, 24, 17, 15, 19,
19, 16, 17, 12, 28, 19, 17, 17, 9, 14, 9, 12, 9, 7, 12, 9, 8, 11, 19,
22, 15, 17, 10, 18, 13, 15, 12, 15, 7, 8, 16, 20, 17, 20, 14, 9, 9,
13, 13, 11, 8, 9, 9, 10, 39, 11, 20, 13, 16, 19, 26, 5, 5, 3, 3, 3, 4,
5, 7, 13, 8, 14, 17, 8, 9, 8, 9, 13, 13, 11, 10, 10, 10, 4, 6, 7, 12,
13, 9, 7, 8, 6, 12, 10, 10, 16, 16, 8, 11, 13, 12, 6, 5, 10, 8, 11,
10, 7, 12, 9, 7, 4, 13, 2, 2, 8, 34, 38, 6, 7, 10, 21, 24, 20, 22, 8,
17, 26, 16, 5, 5, 15, 18, 24, 24, 15, 10, 15, 9, 14, 22, 16, 25, 20,
26, 3, 3, 15, 24, 13, 18, 11, 13, 18, 13, 17, 22, 11, 6, 4, 13, 10, 3,
26, 21, 6, 7, 6, 8, 10, 6, 4, 3, 3, 9, 13, 1, 1, 1, 1, 2, 3, 5, 4, 12,
13, 11, 11, 18, 13, 16, 14, 6, 9, 8, 9, 10, 14, 10, 12, 8, 8, 13, 11,
8, 12, 15, 13, 11, 10, 14, 20, 17, 6, 10, 22, 21, 22, 12, 11, 9, 14,
6, 15, 16, 12, 12, 15, 16, 22, 7, 10, 1, 13, 10, 9, 8, 8, 11, 7, 4, 6,
9, 7, 8, 12};
