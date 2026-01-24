#pragma once
#include "CoreMinimal.h"
#include "AttackInterface.h"
#include "EHbkGimmick_MagnetRailObstacleAvoidType.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_MagnetRailObstacle.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class AHbkGimmick_MagnetRailObstacle : public AHbkGimmickBase, public IAttackInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGimmick_MagnetRailObstacleAvoidType AvoidType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PassSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PassSeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    AHbkGimmick_MagnetRailObstacle(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

