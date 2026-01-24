#pragma once
#include "CoreMinimal.h"
#include "EHbkSolidVocalLyricsType.h"
#include "HbkSolidVoiceControlPoint.generated.h"

class AHbkProjectile_SolidVocal;
class USceneComponent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSolidVoiceControlPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIgnition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkSolidVocalLyricsType LyricsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkProjectile_SolidVocal> Projectile;
    
    FHbkSolidVoiceControlPoint();
};

