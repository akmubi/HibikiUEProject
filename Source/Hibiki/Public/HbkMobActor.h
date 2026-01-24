#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkMobActorInfo_t.h"
#include "HbkMobActor.generated.h"

class UHbkGameAgentComponent;

UCLASS(Blueprintable)
class AHbkMobActor : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkMobActor_SignificanceStateChanged, bool, IsActive);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMobActorInfo_t> MobInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncAnimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMobActor_SignificanceStateChanged OnSignificanceStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSignificanceStateActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComponent;
    
public:
    AHbkMobActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceStateEvent(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_RhythmEvent(int32 NoteCount, bool bDownBeat);
    

    // Fix for true pure virtual functions not being implemented
};

