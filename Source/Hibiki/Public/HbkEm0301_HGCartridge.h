#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "HbkEm0301_HGCartridge.generated.h"

class UHbkSkeletalMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AHbkEm0301_HGCartridge : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImpulseBoneName;
    
public:
    AHbkEm0301_HGCartridge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartImpulse();
    
    UFUNCTION(BlueprintCallable)
    void SetParentLocation(const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetAddImpulseValue(const float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkSkeletalMeshComponent* GetMesh() const;
    
};

