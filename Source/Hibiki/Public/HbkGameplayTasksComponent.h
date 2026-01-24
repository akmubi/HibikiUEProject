#pragma once
#include "CoreMinimal.h"
#include "GameplayTasksComponent.h"
#include "HbkGameplayTasksComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGameplayTasksComponent : public UGameplayTasksComponent {
    GENERATED_BODY()
public:
    UHbkGameplayTasksComponent(const FObjectInitializer& ObjectInitializer);

};

