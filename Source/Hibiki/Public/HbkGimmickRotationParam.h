#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickRotationAnimParam.h"
#include "HbkGimmickRotationExtIntParam.h"
#include "HbkGimmickRotationParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickRotationParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationAnimParam ActivateAnimParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationAnimParam DeactivateAnimParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickRotationExtIntParam> ActivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickRotationExtIntParam> DeactivateExtIntParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationAnimParam BeginBattleAnimParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationAnimParam EndBattleAnimParam;
    
    HIBIKI_API FHbkGimmickRotationParam();
};

