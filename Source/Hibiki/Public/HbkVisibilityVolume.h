#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ActorActivateInterface.h"
#include "HbkVisibilityVolume.generated.h"

class AActor;
class UHbkGameAgentComponent;
class UHbkSkeletalMeshComponent;
class UHbkStaticMeshComponent;

UCLASS(Blueprintable)
class AHbkVisibilityVolume : public AVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ShowActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> HideActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UHbkStaticMeshComponent>> ShowStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UHbkSkeletalMeshComponent>> ShowSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UHbkStaticMeshComponent>> HideStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UHbkSkeletalMeshComponent>> HideSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActiveState;
    
public:
    AHbkVisibilityVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

