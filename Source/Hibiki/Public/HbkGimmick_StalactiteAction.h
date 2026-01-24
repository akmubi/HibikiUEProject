#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.h"
#include "HbkGimmick_StalactiteAction.generated.h"

class UHbkStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FallMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* FallMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickCurveType_t curveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallLength;
    
    HIBIKI_API FHbkGimmick_StalactiteAction();
};

