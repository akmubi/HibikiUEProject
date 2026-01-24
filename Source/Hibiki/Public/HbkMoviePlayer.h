#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkMoviePlayer_OnClosedDelegateDelegate.h"
#include "HbkMoviePlayer_OnFaildPrepareDelegateDelegate.h"
#include "HbkMoviePlayer_OnFinishPlayDelegateDelegate.h"
#include "HbkMoviePlayer_OnFinishPrepareDelegateDelegate.h"
#include "HbkMoviePlayer.generated.h"

class UAkAudioEvent;
class UBinkMediaPlayer;
class UBinkMediaTexture;
class UDataTable;
class UFileMediaSource;
class UMediaPlayer;
class UMediaTexture;

UCLASS(Blueprintable)
class UHbkMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMoviePlayer_OnFinishPrepareDelegate OnFinishPrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMoviePlayer_OnFaildPrepareDelegate OnFaildPrepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMoviePlayer_OnFinishPlayDelegate OnFinishPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMoviePlayer_OnClosedDelegate OnClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* MovieInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* BinkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventOnPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventOnStop;
    
public:
    UHbkMoviePlayer();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPauseChanged(bool sw);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenFailed(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMediaClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
};

