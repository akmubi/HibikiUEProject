#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmTowerResult.generated.h"

class UHbkGameplayTask_MGRhythmTowerSound;
class UHbkRhythmTowerResultWidget;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTowerResult : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerResultWidget* pResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmTowerSound* pRTSound;
    
public:
    UHbkGameplayTask_MGRhythmTowerResult();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void OnRetry();
    
};

