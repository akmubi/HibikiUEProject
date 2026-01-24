#pragma once
#include "CoreMinimal.h"
#include "HbkMobActorActivaterExtIntInfo_t.h"
#include "HbkMobActorMeshKitInfo_t.h"
#include "HbkMobActorInfo_t.generated.h"

class UAnimMontage;
class UHbkSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHbkMobActorInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMobActorActivaterExtIntInfo_t> ActivateExtArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeactivateActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMobActorActivaterExtIntInfo_t> DeactivateExtArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMobActorMeshKitInfo_t> MeshKitArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkSkeletalMeshComponent> SkelMesh;
    
    HIBIKI_API FHbkMobActorInfo_t();
};

