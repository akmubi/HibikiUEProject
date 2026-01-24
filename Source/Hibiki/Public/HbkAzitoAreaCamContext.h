#pragma once
#include "CoreMinimal.h"
#include "HbkAzitoCamContext.h"
#include "HbkAzitoAreaCamContext.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAzitoAreaCamContext : public FHbkAzitoCamContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OuterAreaDistance;
    
    FHbkAzitoAreaCamContext();
};

