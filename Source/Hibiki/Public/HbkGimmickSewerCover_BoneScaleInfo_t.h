#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "HbkGimmickSewerCover_BoneScaleInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmickSewerCover_BoneScaleInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoneSpaces::Type> BoneSpaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MultiplyValue;
    
    HIBIKI_API FHbkGimmickSewerCover_BoneScaleInfo_t();
};

