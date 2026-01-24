#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmDungeonResult.generated.h"

class UHbkGameOverWidget;
class UHbkRhythmDungeonResultWidget;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmDungeonResult : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonResultWidget* pResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameOverWidget* pGameOverWidget;
    
public:
    UHbkGameplayTask_MGRhythmDungeonResult();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void OnReturnStartMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnRetry();
    
    UFUNCTION(BlueprintCallable)
    void OnRestart();
    
    UFUNCTION(BlueprintCallable)
    void OnGameOverYes();
    
    UFUNCTION(BlueprintCallable)
    void OnGameOverNo();
    
};

