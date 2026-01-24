#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVScrollSignboardForCs0552.generated.h"

class AActor;
class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollSignboardForCs0552;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollSignboardForCs0552 : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollSignboardForCs0552_OnSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSignboardForCs0552_OnSuccess OnNoDamageSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSignboardForCs0552_OnSuccess OnDamageSuccess;
    
    UHbkGameplayTask_EVScrollSignboardForCs0552(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FallingObj_Hidden();
    
    UFUNCTION(BlueprintCallable)
    void FallingObj_Attack(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollSignboardForCs0552* EventScrollSignboardForCs0552(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, FGameplayTag signboardTag, FName signboardCallSign);
    
};

