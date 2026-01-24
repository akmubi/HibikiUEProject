#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickEmissiveCollisionParam_t.h"
#include "HbkGimmickEmissiveExtIntParam_t.h"
#include "HbkGimmickEmissiveParam_t.h"
#include "HbkGimmickEmissiveInfo_t.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmickEmissiveInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* pMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> DefaultParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> ActivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> DeactivateParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveCollisionParam_t> CollisionParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> BeginBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> EndBattleParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> MoveEndParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveExtIntParam_t> ActivateExtIntParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveExtIntParam_t> DeactivateExtIntParamArray;
    
    HIBIKI_API FHbkGimmickEmissiveInfo_t();
};

