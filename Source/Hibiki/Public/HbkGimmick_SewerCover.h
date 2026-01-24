#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkGimmickSewerCover_ActorScaleInfo_t.h"
#include "HbkGimmickSewerCover_BoneScaleInfo_t.h"
#include "HbkGimmick_SewerCover.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_SewerCover : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 execParticleNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickSewerCover_ActorScaleInfo_t ActorScaleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickSewerCover_BoneScaleInfo_t> BoneScaleInfoArray;
    
public:
    AHbkGimmick_SewerCover(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeatSyncEvent(const int32 NoteCount, const bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thNoteSyncEvent(const int32 NoteCount, const bool bDownBeat);
    
};

