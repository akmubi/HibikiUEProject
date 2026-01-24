#pragma once
#include "CoreMinimal.h"
#include "BossActionDelegateDelegate.h"
#include "EHbkNote.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkEm1000_StateChangeSlow.generated.h"

class AHbkEm1000_ST01Boss;
class UAkAudioEvent;
class UHbkEm1000_StateChangeSlow;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEm1000_StateChangeSlow : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate PlaySequencer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate PlayMusic;
    
    UHbkEm1000_StateChangeSlow();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkEm1000_StateChangeSlow* PlaySlowBeforeMovie(UObject* WorldContextObject, AHbkEm1000_ST01Boss* BossActor, EHbkNote NoteType, UAkAudioEvent* AkEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlowEnd(int32 NoteCount, bool bIsOnBeat);
    
};

