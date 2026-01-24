#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkGimmickBattleInfo_t.h"
#include "HbkGimmickBoneAnimInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickBoneAnimInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneSpaces::Type> BoneSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool scaleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool transEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool rotateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBattleInfo_t InBattleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickBattleInfo_t NoBattleInfo;
    
    HIBIKI_API FHbkGimmickBoneAnimInfo_t();
};

