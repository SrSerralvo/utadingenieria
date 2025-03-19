#pragma once

enum States
{
    DEFAULT,
    IDLE,
    RUNNING,
    CROUCHING
};

class StateMachine
{
public:
    StateMachine();
    
    States currentState;

    void ChangeState(States newState);
    void PrintState();
};
