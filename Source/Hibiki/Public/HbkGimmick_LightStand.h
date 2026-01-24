#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_LightStandMaterialInfo_t.h"
#include "HbkGimmick_LightStand.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_LightStand : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_LightStandMaterialInfo_t matInfo;
    
public:
    AHbkGimmick_LightStand(const FObjectInitializer& ObjectInitializer);

};

