#pragma once
#include "CoreMinimal.h"
#include "HbkGraffitiPolaroidVisibilityParam.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGraffitiPolaroidVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoundHiddenInGame;
    
    HIBIKI_API FHbkGraffitiPolaroidVisibilityParam();
};

