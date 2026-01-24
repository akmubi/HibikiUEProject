#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_BeltConveyor.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_BeltConveyor : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    AHbkGimmick_BeltConveyor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void BeatEvent(const int32 BeatCount);
    
};

