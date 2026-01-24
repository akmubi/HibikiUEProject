#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BattleAreaDecal.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_BattleAreaDecal : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSave;
    
public:
    AHbkGimmick_BattleAreaDecal(const FObjectInitializer& ObjectInitializer);

};

