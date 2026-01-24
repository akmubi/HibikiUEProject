#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkOverlapEventLinkComponent.generated.h"

class AActor;
class ATriggerBase;
class AVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkOverlapEventLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool linkBeginOverlapFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool linkEndOverlapFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool linkOnActivateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool linkOnDeactivateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBase*> linkTriggerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> linkVolumeArray;
    
public:
    UHbkOverlapEventLinkComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEventLinkEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEventLinkBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

