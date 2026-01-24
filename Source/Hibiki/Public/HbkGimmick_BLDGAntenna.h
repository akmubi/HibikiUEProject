#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BLDGAntenna.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_BLDGAntenna : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SaveValue;
    
public:
    AHbkGimmick_BLDGAntenna(const FObjectInitializer& ObjectInitializer);

};

