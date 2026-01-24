#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_PopupEmbankmentBase.h"
#include "HbkEm6000_PopupEmbankment.generated.h"

class UAnimMontage;
class UHbkSkeletalMeshComponent;
class UHbkStaticMeshComponent;
class USphereComponent;

UCLASS(Blueprintable)
class AHbkEm6000_PopupEmbankment : public AHbkEm6000_PopupEmbankmentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* EmbankmentSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* FlagStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MoveAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagAttachedSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionAttachedSocketName;
    
public:
    AHbkEm6000_PopupEmbankment(const FObjectInitializer& ObjectInitializer);

};

