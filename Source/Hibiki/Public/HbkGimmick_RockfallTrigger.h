#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RockfallTriggerAction.h"
#include "HbkGimmick_RockfallTriggerInterlock.h"
#include "HbkGimmick_RockfallTrigger.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_RockfallTrigger : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallTriggerAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_RockfallTriggerInterlock Interlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActive;
    
public:
    AHbkGimmick_RockfallTrigger(const FObjectInitializer& ObjectInitializer);

};

