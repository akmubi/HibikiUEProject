#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkPlayerRDGrowthType.h"
#include "HbkPlayerRDGrowthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerRDGrowthComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BurnDamageTag;
    
public:
    UHbkPlayerRDGrowthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrowth(EHbkPlayerRDGrowthType GrowthType) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugAddGrowth(const TArray<FString>& Args);
    
};

