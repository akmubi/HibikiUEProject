#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg1600ADitherInfo.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg1600ADitherInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialIndexes;
    
    HIBIKI_API FHbkGimmick_bg1600ADitherInfo();
};

