#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkCineMoviePlayer.generated.h"

class UMediaPlayer;
class UMediaTexture;

UCLASS(Blueprintable)
class UHbkCineMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UHbkCineMoviePlayer();

    UFUNCTION(BlueprintCallable)
    void OnMovieOpenFailure(const FString& DeviceUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieOpened(const FString& DeviceUrl);
    
};

