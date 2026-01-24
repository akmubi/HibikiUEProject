#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_JukeboxPanelLight.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_JukeboxPanelLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    HIBIKI_API FHbkGimmick_JukeboxPanelLight();
};

