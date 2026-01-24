#pragma once
#include "CoreMinimal.h"
#include "EHbkRestartEventType.h"
#include "HbkGimmickBase_NoSave.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_MagmaWaterfall.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class AHbkGimmick_MagmaWaterfall : public AHbkGimmickBase_NoSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkRestartEventType RestartEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
public:
    AHbkGimmick_MagmaWaterfall(const FObjectInitializer& ObjectInitializer);

};

