#include "StateMachine.h"

#include <cstdio>

StateMachine::StateMachine()
{
    ChangeState(DEFAULT);
}

void StateMachine::ChangeState(States newState)
{
    currentState = newState;
}

void StateMachine::PrintState()
{
    constexpr const char* stateNames[] = {"Default", "IDLE", "RUNNING", "CROUCHING"};
    printf("Current state: %s\n", stateNames[currentState]);
}
