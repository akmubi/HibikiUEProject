#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHbkCostumeSyncType.h"
#include "HbkPartnerAnimationActor.generated.h"

class UAnimSequenceBase;
class UHbkCostumeComponent;
class UHbkCostumeMeshComponent;
class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPartnerAnimationActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeltalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeMeshComponent* CostumeMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* CostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumeSyncType SyncCostumeType;
    
public:
    AHbkPartnerAnimationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PerformAnimation(UAnimSequenceBase* Animation, float PlayRate);
    
};

