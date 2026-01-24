#pragma once
#include "CoreMinimal.h"
#include "HbkTalkable_SyncMeshInfo2_t.generated.h"

class UAnimMontage;
class UHbkSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHbkTalkable_SyncMeshInfo2_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkSkeletalMeshComponent> SkelMesh;
    
    HIBIKI_API FHbkTalkable_SyncMeshInfo2_t();
};

