#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_ScrollActorMeshInfo_t.h"
#include "HbkGimmick_ScrollActorInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_ScrollActorInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_ScrollActorMeshInfo_t> MeshInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetVec;
    
    HIBIKI_API FHbkGimmick_ScrollActorInfo_t();
};

