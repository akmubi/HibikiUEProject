#include "EnvQueryGenerator_SquareGrid.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_SquareGrid::UEnvQueryGenerator_SquareGrid() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


