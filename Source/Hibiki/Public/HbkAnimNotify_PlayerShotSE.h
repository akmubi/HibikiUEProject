#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_PlayerShotSE.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, CollapseCategories)
class UHbkAnimNotify_PlayerShotSE : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotSE;
    
public:
    UHbkAnimNotify_PlayerShotSE();

};

