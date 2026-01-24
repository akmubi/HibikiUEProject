#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_GroundLight.generated.h"

UCLASS(Blueprintable)
class AHbkGimmick_GroundLight : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultDeactivate;
    
    AHbkGimmick_GroundLight(const FObjectInitializer& ObjectInitializer);

};

