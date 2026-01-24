#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_SecD2DLightPlateA.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SecD2DLightPlateA : public AHbkGimmickBase {
    GENERATED_BODY()
public:
    AHbkGimmick_SecD2DLightPlateA(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent_SecD2DLightPlateA(int32 NoteCount);
    
};

