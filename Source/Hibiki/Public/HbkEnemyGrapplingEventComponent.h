#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkEnemyGrapplingEventData.h"
#include "HbkGrapplingInfo.h"
#include "HbkEnemyGrapplingEventComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyGrapplingEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessInputRangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuousInputCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkEnemyGrapplingEventData CurrentImpactData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePlayerElapse;
    
public:
    UHbkEnemyGrapplingEventComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnSuccessQTE(bool bPerfect);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreTotalResult() const;
    
};

