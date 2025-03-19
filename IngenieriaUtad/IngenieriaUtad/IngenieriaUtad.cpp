
#include "StateMachine.h"

int main(int argc, char* argv[])
{
    StateMachine machine;
    machine.PrintState();
    machine.ChangeState(IDLE);
    machine.PrintState();
    return 0;
}
