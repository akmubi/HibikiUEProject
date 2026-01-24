#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_bg0260.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_bg0260 : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultEmissiveRed;
    
public:
    AHbkGimmick_bg0260(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCommonResourceSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatSynchroAction(const int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIdleType();
    
};

