#pragma once
#include "CoreMinimal.h"
#include "HbkProjectile.h"
#include "HbkProjectileWithMesh.generated.h"

class UHbkSkeletalMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkProjectileWithMesh : public AHbkProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComp;
    
public:
    AHbkProjectileWithMesh(const FObjectInitializer& ObjectInitializer);

};

