#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_GameEnvState.generated.h"

class UHbkGameEnvState;
class UHbkGameplayTask_GameEnvState;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameplayTask_GameEnvState : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskGameEnvState_End);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskGameEnvState_End OnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvState;
    
    UHbkGameplayTask_GameEnvState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_GameEnvState* EventBeginGameEnvState(UObject* WorldContextObject, FName ChangeGameEnvStateRow, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void EndGameEnvState(float EndBlendTime);
    
};

