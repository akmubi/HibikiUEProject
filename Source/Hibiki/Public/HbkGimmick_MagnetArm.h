#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_MagnetArmType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MagnetArm.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetArm : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetArmType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HoldActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldActorAdjuster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAngleMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bArmMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> ArmMoveSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmMoveSeRef;
    
public:
    AHbkGimmick_MagnetArm(const FObjectInitializer& ObjectInitializer);

};

