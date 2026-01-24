#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkPhotoItemActor.generated.h"

class UHbkCostumeComponent;
class UHbkSkeletalMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPhotoItemActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCostumeComponent* HbkCostumeComp;
    
public:
    AHbkPhotoItemActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupItem();
    
};

