#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickVfxSplineMovePointInfo_t.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FHbkGimmickVfxSplineMovePointInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurvePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SplineMovePointVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> SplineMovePointVfxPSC;
    
    HIBIKI_API FHbkGimmickVfxSplineMovePointInfo_t();
};

