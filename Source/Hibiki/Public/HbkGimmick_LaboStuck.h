#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LaboStuckSound.h"
#include "HbkGimmick_LaboStuck.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_LaboStuck : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LaboStuckSound Sound;
    
public:
    AHbkGimmick_LaboStuck(const FObjectInitializer& ObjectInitializer);

};

