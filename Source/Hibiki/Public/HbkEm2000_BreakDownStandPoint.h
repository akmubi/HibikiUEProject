#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EHbkNote.h"
#include "HbkBreakDownStandPointAttackParam.h"
#include "HbkEm2000_BreakDownStandPoint.generated.h"

class UParticleSystem;
class USceneComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm2000_BreakDownStandPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBreakDownStandPointAttackParam> AttackParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EHbkNote> RemoveNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USceneComponent> PresageSceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PresageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PresageEffect2;
    
public:
    AHbkEm2000_BreakDownStandPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterAttackParam(const FHbkBreakDownStandPointAttackParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHalfNoteEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBarEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void On8thNoteEventEx(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void On16thNoteEventEx(int32 NoteCount, bool bOnBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallEffectPresage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform Blueprint_GetStandPoint() const;
    
};

