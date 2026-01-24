#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakCardboardBoxMeshInfo_t.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakCardboardBoxMeshInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    HIBIKI_API FHbkGimmick_BreakCardboardBoxMeshInfo_t();
};

