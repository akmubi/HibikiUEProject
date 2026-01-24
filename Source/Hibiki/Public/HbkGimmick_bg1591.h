#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg1591.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_bg1591 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveState;
    
public:
    AHbkGimmick_bg1591(const FObjectInitializer& ObjectInitializer);

};

