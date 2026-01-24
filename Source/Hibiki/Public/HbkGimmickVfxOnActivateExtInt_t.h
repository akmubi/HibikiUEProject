#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickVfxPlayMode.h"
#include "HbkGimmickVfxOnActivateExtInt_t.generated.h"

class UAkAudioEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkGimmickVfxOnActivateExtInt_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmickVfxPlayMode OnActivateExtIntPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SFX;
    
    HIBIKI_API FHbkGimmickVfxOnActivateExtInt_t();
};

