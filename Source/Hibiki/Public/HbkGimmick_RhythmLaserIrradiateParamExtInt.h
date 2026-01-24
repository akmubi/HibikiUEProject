#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RhythmLaserIrradiateParam.h"
#include "HbkGimmick_RhythmLaserIrradiateParamExtInt.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_RhythmLaserIrradiateParamExtInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> ShotSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotSeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_RhythmLaserIrradiateParam> IrradiateParams;
    
    HIBIKI_API FHbkGimmick_RhythmLaserIrradiateParamExtInt();
};

