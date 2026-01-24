#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AkDynamicDialogueNodeInfo.h"
#include "AkDynamicSequenceType.h"
#include "AkDynamicDialogueComponent.generated.h"

class UAkDynamicDialogueEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UAkDynamicDialogueComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkDynamicSequenceType SequenceType;
    
    UAkDynamicDialogueComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopQueue(int32 FadeTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ResumeQueue(int32 FadeTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveQueue(int32 NodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveAllQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayQueue(int32 FadeTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PauseQueue(int32 FadeTimeMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetPlayingItem(FAkDynamicDialogueNodeInfo& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetPauseTimes(int32& out_TimeMs, int32& out_Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetAllItems(TArray<FAkDynamicDialogueNodeInfo>& Items);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void BreakQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 AddQueue(UAkDynamicDialogueEvent* in_AkEvent, const TArray<FString>& in_Args, int32 DelayTimeMs);
    
};

