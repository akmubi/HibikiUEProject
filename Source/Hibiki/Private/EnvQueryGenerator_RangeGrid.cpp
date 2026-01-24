#include "EnvQueryGenerator_RangeGrid.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UEnvQueryGenerator_RangeGrid::UEnvQueryGenerator_RangeGrid() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->QueryContext = UEnvQueryContext_Querier::StaticClass();
    this->RangeType = EAreaPointRangeType::None;
}


