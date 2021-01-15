/*#include <stdlib.h>
#include <stdio.h>

#include fsm.h"

// etats
typedef enum
{
    STS_A,
    STS_B,
    STS_C,
    STS_NB
}
STS;

// evenements
typedef enum
{
    EVT_X,
    EVT_Y,
    EVT_NB
}
EVT;

// definition des transitions
static int tra_A_to_B_by_X(void* puser)
{
    char* s = puser;

    printf("Action 1: %s\n", s);
    return 0;
}

static int tra_B_to_B_by_Y(void* puser)
{
    char* s = puser;

    printf("Action 2: %s\n", s);
    return 0;
}

static int tra_B_to_C_by_X(void* puser)
{
    char* s = puser;

    printf("pas d'action: %s\n", s);
    return 0;
}

static int tra_C_to_A_by_Y(void* puser)
{
    char* s = puser;

    printf("Action 3: %s\n", s);
    return 0;
}

int main(void)
{
    // creation de la machine
    sFSM* my_fsm = FSM_init(EVT_NB, STS_NB, NULL, STS_A);

    if (my_fsm != NULL)
    {
        // Configuration des transitions
        FSM_transition(my_fsm, tra_A_to_B_by_X, "A->B/X", STS_A, STS_B, EVT_X);
        FSM_transition(my_fsm, tra_B_to_B_by_Y, "B->B/Y", STS_B, STS_B, EVT_Y);
        FSM_transition(my_fsm, tra_B_to_C_by_X, "B->C/X", STS_B, STS_C, EVT_X);
        FSM_transition(my_fsm, tra_C_to_A_by_Y, "C->A/Y", STS_C, STS_A, EVT_Y);

        // Essais (evenements)
        FSM_engine(my_fsm, EVT_Y, "Y1"); // rien
        FSM_engine(my_fsm, EVT_X, "X1"); // -> B
        FSM_engine(my_fsm, EVT_Y, "Y2"); /* B
        FSM_engine(my_fsm, EVT_Y, "Y3"); /* B
        FSM_engine(my_fsm, EVT_X, "X2"); /* -> C
        FSM_engine(my_fsm, EVT_Y, "Y4"); /* -> A

        // destruction de la machine
        FSM_end(my_fsm), my_fsm = NULL;
    }

    // Dev-C++ trick ...
    system("pause");
    return 0;
}*/