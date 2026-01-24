#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HbkGimmickAnimationActivateInfo_t.h"
#include "HbkGimmickAnimationFlickInfo_t.h"
#include "HbkGimmickAnimationTransformInfo_t.h"
#include "HbkGimmickAnimationComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationFlickInfo_t> FlickInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickAnimationTransformInfo_t> TransformInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickAnimationActivateInfo_t ActivateInfo;
    
public:
    UHbkGimmickAnimationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th_GimmickAnimationEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickReturnCheckPoint(AActor* Activator, FName CPName);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickResumeAnim(AActor* Activator, bool Immidiate);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickPauseAnim(AActor* Activator, bool Immidiate);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickActivate(AActor* Activator);
    
public:
    UFUNCTION(BlueprintCallable)
    void CopyGimmickAnimationComp(AActor* pActor);
    
};

