#pragma once
#include "CoreMinimal.h"
#include "HbkBattleTriggerCollisionMesh.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkBattleTriggerCollisionMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionMeshNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CollisionMeshComponents;
    
    HIBIKI_API FHbkBattleTriggerCollisionMesh();
};

