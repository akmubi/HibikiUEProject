#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkGimmickRotationParamType.h"
#include "HbkGimmickRotationFlagas.h"
#include "HbkGimmickRotationParam.h"
#include "HbkGimmickRotationComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkGimmickRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGimmickRotationFlagas Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickRotationParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkGimmickRotationParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ParamExtIntValue;
    
    UHbkGimmickRotationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAllRotationComponent(const UObject* WorldContextObject);
    
protected:
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
    void OnGimmickResumeAnim(AActor* Activator, bool bImmidiate);
    
    UFUNCTION(BlueprintCallable)
    void OnGimmickPauseAnim(AActor* Activator, bool bImmidiate);
    
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

