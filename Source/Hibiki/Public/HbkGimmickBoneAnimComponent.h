#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EHbkGimmickBoneAnimParamType.h"
#include "HbkGimmickBoneAnimTransformAnimParam.h"
#include "HbkGimmickBoneAnimComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickBoneAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickBoneAnimTransformAnimParam> TransformAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickBoneAnimParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParamExtIntValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ParamCollisionName;
    
    UHbkGimmickBoneAnimComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnCheckPoint(AActor* Activator, FName CPName);
    
    UFUNCTION(BlueprintCallable)
    void OnResumeAnim(AActor* Activator, bool Immidiate);
    
    UFUNCTION(BlueprintCallable)
    void OnPauseAnim(AActor* Activator, bool Immidiate);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteHalf(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote8th(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNote16th(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivate(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtInt(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(AActor* Activator);
    
};

