#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHbkTitleMenuNpcState.h"
#include "HbkTitleMenuNpcActor.generated.h"

class UAnimMontage;
class UHbkGameAgentComponent;
class UHbkSkeletalMeshComponent;
class UHbkTitleMenuNpcAsset;

UCLASS(Blueprintable)
class AHbkTitleMenuNpcActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkTitleMenuNpcState, UAnimMontage*> AnimMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkTitleMenuNpcAsset* DataAsset;
    
public:
    AHbkTitleMenuNpcActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseHeadHoming(bool bNewFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcState(EHbkTitleMenuNpcState State);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveRandomMotion(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetRandomMotion();
    
    UFUNCTION(BlueprintCallable)
    void ResetNoInputTime();
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotAnimation(FName SectionName, float NewPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseHeadHoming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkTitleMenuNpcState GetNpcState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLookAtRate(float& rRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLookAtLocation(FVector& rLocation) const;
    
};

