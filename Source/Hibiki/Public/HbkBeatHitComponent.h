#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "HbkBeatHitComponent.generated.h"

class UHbkPlayerBeatHitDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBeatHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerBeatHitDataAsset* BeatHitDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeatHitTypeTag;
    
public:
    UHbkBeatHitComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeat(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnImpactForBeatHit(int32 NoteCount);
    
};

