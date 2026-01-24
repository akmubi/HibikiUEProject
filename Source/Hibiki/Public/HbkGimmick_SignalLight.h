#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SignalLight_LightInfo_t.h"
#include "HbkGimmick_SignalLight.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SignalLight : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_SignalLight_LightInfo_t> LightInfoArray;
    
    AHbkGimmick_SignalLight(const FObjectInitializer& ObjectInitializer);

};

