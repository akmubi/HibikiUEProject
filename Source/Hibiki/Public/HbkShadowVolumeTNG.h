#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "HbkShadowVolumeTNG.generated.h"

class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class AHbkShadowVolumeTNG : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* ShadowColorLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistAttenConst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistAttenLinear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistAttenExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseDistAtten;
    
    AHbkShadowVolumeTNG(const FObjectInitializer& ObjectInitializer);

};

