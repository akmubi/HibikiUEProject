#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_ReverbLaserAudioAssetInfo_t.h"
#include "HbkGimmick_ReverbLaserVFXAssetInfo_t.h"
#include "HbkGimmick_ReverbLaser.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_ReverbLaser : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ReverbLaserAudioAssetInfo_t AudioAssetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmick_ReverbLaserVFXAssetInfo_t VFXAssetInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> pLaserStartVFXComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> pLaserHitVFXComp;
    
public:
    AHbkGimmick_ReverbLaser(const FObjectInitializer& ObjectInitializer);

};

