#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "Components/SceneComponent.h"
#include "MusicSyncComponent_Beat.h"
#include "MusicSyncComponent_Grid.h"
#include "AkMPSComponent.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkMPLComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TANGOSOUNDUTILITY_API UAkMPSComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMusicSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Bars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicSyncComponent_Beat> Beats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicSyncComponent_Grid> Grids;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkMPLComponent*> Listeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkMPLComponent*> CurrentListeners;
    
public:
    UAkMPSComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void EndOfEvent(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddMPL(UAkMPLComponent* cmp);
    
};

