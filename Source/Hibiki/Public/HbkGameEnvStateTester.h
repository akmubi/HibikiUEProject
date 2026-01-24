#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameEnvStateTester.generated.h"

class UHbkGameEnvState;

UCLASS(Blueprintable)
class UHbkGameEnvStateTester : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvState;
    
    UHbkGameEnvStateTester();

    UFUNCTION(BlueprintCallable)
    void EndToonMotionBlurAfterImageTest();
    
    UFUNCTION(BlueprintCallable)
    void EndStateGameplayTask();
    
    UFUNCTION(BlueprintCallable)
    void EndPostProcessMaterialTest();
    
    UFUNCTION(BlueprintCallable)
    void EndGamePostTest();
    
    UFUNCTION(BlueprintCallable)
    void EndGameEnvTest(const float BlendDuration);
    
    UFUNCTION(BlueprintCallable)
    void EndAllGameEnvTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginToonMotionBlurAfterImageTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginStateGameplayTask(FName TableRowName);
    
    UFUNCTION(BlueprintCallable)
    void BeginPostProcessMaterialTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginGamePostTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginGameEnvTest(FName TableRowName, const float BlendDuration, const FName DataTableName);
    
};

