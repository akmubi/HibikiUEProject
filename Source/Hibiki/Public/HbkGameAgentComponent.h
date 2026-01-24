#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkGameAgentComponent.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGameAgentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RoleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UHbkGameAgentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSlotAnimation(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotAnimationPlayRate(UAnimSequenceBase* Anim, float NewPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSectionSlotAnimation(FName SectionNameToChange, FName NextSection);
    
    UFUNCTION(BlueprintCallable)
    void PlaySlotAnimation(UAnimSequenceBase* Anim, FName StartSection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaveTag(const FString& ReceiveTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaveCallSign(const FString& ReceiveCallSign) const;
    
};

