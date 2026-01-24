#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkBossBeChasedInitParam.h"
#include "HbkBossBeChasedComponent.generated.h"

class AHbkBossCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossBeChasedComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBossCharacterBase> OwnerBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBossBeChasedInitParam InitParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCheckBeingChased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeChasedLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeChasedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeChasedLimitResetTime;
    
public:
    UHbkBossBeChasedComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TestDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void TestActivate();
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimit() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FHbkBossBeChasedInitParam& InInitParam);
    
    UFUNCTION(BlueprintCallable)
    void Deactive();
    
    UFUNCTION(BlueprintCallable)
    void Active();
    
};

