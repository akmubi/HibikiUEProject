#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmDungeonChaos.generated.h"

class AHbkGimmick_RDDroneController;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmDungeonChaos : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkGimmick_RDDroneController* pRDDroneController;
    
public:
    UHbkGameplayTask_MGRhythmDungeonChaos();

};

