#pragma once
#include "CoreMinimal.h"
#include "HbkMeshKitState.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkMeshKitState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    FHbkMeshKitState();
};

