#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObjectMesh.generated.h"

class UHbkSkeletalMeshComponent;
class UHbkStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakObjectMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BreakMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* BreakMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BreakBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* CollisionMeshComp;
    
    HIBIKI_API FHbkGimmick_BreakObjectMesh();
};

