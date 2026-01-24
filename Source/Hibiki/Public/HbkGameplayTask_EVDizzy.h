#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "Templates/SubclassOf.h"
#include "HbkGameplayTask_EVDizzy.generated.h"

class UAkAudioEvent;
class UCameraShakeBase;
class UHbkGameplayTask_EVDizzy;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVDizzy : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskEVDizzy_End);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskEVDizzy_End OnEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pDizzySE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
public:
    UHbkGameplayTask_EVDizzy(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NoteEventWhole_EVDizzy(int32 l_NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVDizzy* CreateDizzyEventTask(UObject* WorldContextObject, TSubclassOf<UCameraShakeBase> CameraShakeClass, float CameraScale, UAkAudioEvent* DizzySE);
    
};

