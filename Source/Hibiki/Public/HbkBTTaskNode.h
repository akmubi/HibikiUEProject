#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "HbkBTTaskNode.generated.h"

UCLASS(Abstract, Blueprintable)
class HIBIKI_API UHbkBTTaskNode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UHbkBTTaskNode();

};

